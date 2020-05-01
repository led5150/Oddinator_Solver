# Oddinator_Solver
This short c++ program solves the Oddinator Riddle from Reddit


##   Here is the riddle!  ##

1000 people are lined up in front of a demon named “Oddinator”. 
The odd numbered people in that line are eaten by the demon Oddinator. 
After that, a new queue is made of the remaining people form the queue. 
Oddinator again eats the odd numbered people from the queue. 
In doing so, the queue gets shorter and eventually a single person is left.

Can you figure out which place in line the lone survivor of the
original 1000 people had to ensure his/her survival?


##  End Riddle  ##

Try to solve it!  Or just run my code! : )
(hint, try it on a queue of just 10 people first...)

The code uses a very simple struct to represent the poor souls
in this queue.  The struct simply holds an integer value of their
original place in line.

It uses a recursive function to remove the odd numbered people, 
then creates a shorter queue until there is only one person remaining.
It then simply returns the value that was stored in the struct for this
lucky, lucky soul!

You can change the size of the queue to test different sized lines of
people by changing the value that is passed into the line_em_up() function
in main(). 

That's it!  Did this one just for fun!
