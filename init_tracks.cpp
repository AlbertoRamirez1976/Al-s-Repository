// CSCI_222 Lab2_P7.12 ("People Mover System") by Alberto E. Ramirez //

#include <ctime>// header file that contains definitions of functions to get and manipulate date and time information.
#include <string>// header introduces string types, character traits and a set of converting functions
#include "init_tracks.h"// init_tracks header file allows for the interface (init_tracks.h) visible to other .cpp files, while keeping the implementation in its own .cpp file
#include "segment.h"// segment header file allows for the interface (segment.h) visible to other .cpp files, while keeping the implementation in its own .cpp file

void init_tracks(struct Segment* segments[NUM_TRACKS][NUM_SEGMENTS]) // parameters NUM_TRACKS wait a value of 2 and NUM_SEGMENTS with a value of 10 are taken as input values
{
    //the for loop function will allocate memory for the track segments
    for (int i = 0; i < NUM_TRACKS; i++) //allocates the memory for the outer track segment
    {
        for (int j = 0; j < NUM_SEGMENTS; j++) //allocates memory for the inner track segment
        {
            segments[i][j] = new Segment;
        }
    }
    srand(time(0));// random number generator based on the current time

    //for loop function will not connect the segments in order to allow for the pointer function to point to the next segment
    for (int i = 0; i < NUM_TRACKS; i++)
    {
        for (int j = 0; j < NUM_SEGMENTS; j++)
        {
            int knext, kprev;
            knext = (j + 1) % NUM_SEGMENTS;
            kprev = (j - 1 + NUM_SEGMENTS) % NUM_SEGMENTS;
            segments[i][j]->next = segments[i][knext]; //pointer to next
            segments[i][j]->prev = segments[i][kprev]; //pointer to previous
            segments[i][j]->next_adj = segments[NUM_TRACKS - 1 - i][knext]; //pointer to adjacent next
            segments[i][j]->prev_adj = segments[NUM_TRACKS - 1 - i][kprev]; //pointer to adjacent previous
        }
    }

    //for loop function will initiate a new train in each segment
    for (int i = 0; i < NUM_TRACKS; i++)
    {
        for (int j = 0; j < NUM_SEGMENTS; j++)
        {
            segments[i][j]->train = 0;
        }
    }

    //while loop function will randomly place four trains
    int n = 0; //variable declaration for the loop iterator variable 'n' which will keep the track active 
    while (n < NUM_TRAIN)
    {
        int t, s, d;// variable declaration for the variable t = track , s = segment, d = direction

        t = rand() % NUM_TRACKS;// t variable will be initialized by a random value
        s = rand() % NUM_SEGMENTS;// t variable will be initialized by a random value
        d = (rand() % 2) * 2 - 1;// t variable will be initialized by a random value

        // if/else statement will craete an array
        if (segments[t][s]->train == 0)
        {
            segments[t][s]->train = d;
            n++;
        }
    }
}
