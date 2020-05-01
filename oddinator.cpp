/* A simple program to solve the Oddinator riddle
 * Written By: Matt Champlin
 * Date:       5/1/2020 (Corona Quarantine Times)
*/

#include <iostream>
#include <vector>

using namespace std;

// To represent people in the cue and save their origninal
// index.
struct person {
    int orig_index;
    person(int x) 
    {
        orig_index = x;
    } 
};

/*** FUNCTION HEADERS - Implementation and descriptions are below main() ***/
vector<person> line_em_up(int num_people);
int find_survivor(vector<person> &people);
vector<person> Oddinator_Eats(vector<person> &people);


int main () 
{
    vector<person> queue_of_people = line_em_up(1000);

    cout << "Survivor was the " << find_survivor(queue_of_people) 
         << " person in line!" << endl;

    return 0;
}

// A recursive function that takes a vector of people and finds who would
// survive the Oddinator!
int find_survivor(vector<person> &people)
{
    if (people.size() == 1) {
        return people[0].orig_index;
    } else {
        vector<person> surviving_people = Oddinator_Eats(people);
        return find_survivor(surviving_people);
    }
}


// The Oddinator Eats!!!  Every person in an "odd" index is eaten, and
// peple in "even" indexes survive.  We have to flip the logic, however, 
// because of 0 indexing, so we use mod 2 == 1 to find even survivors.
vector<person> Oddinator_Eats(vector<person> &people)
{
    vector<person> survivors;
    for (size_t i = 0; i < people.size(); i++) {
        if (i % 2 == 1) {
            survivors.push_back(people[i]);
        }
    }
    return survivors;
}


// This function takes an integer of the number of people to line up in the
// queue.  It creates people and stores their original index number + 1 
// (since vectors use 0 indexing but we think in 1 indexing for this problem) 
vector<person> line_em_up(int num_people)
{   
    vector<person> queue;
    for (int i = 0; i < num_people; i++) {
        person dude(i + 1);
        queue.push_back(dude);
    }
    return queue;
}
