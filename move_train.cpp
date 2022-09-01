// CSCI_222 Lab2_P7.12 ("People Mover System") by Alberto E. Ramirez //

#include "move_train.h"// move_train header file allows for the interface (move_train.h) visible to other .cpp files, while keeping the implementation in its own .cpp file
#include "segment.h"// segment header file allows for the interface (segment.h) visible to other .cpp files, while keeping the implementation in its own .cpp file

void move_train(struct Segment* segments[NUM_TRACKS][NUM_SEGMENTS]) // parameters NUM_TRACKS wait a value of 2 and NUM_SEGMENTS with a value of 10 are taken as input values
{
    for (int i = 0; i < NUM_TRACKS; i++) 
    {
        for (int j = 0; j < NUM_SEGMENTS; j++) 
        {
            struct Segment* temp_segment = segments[i][j];
            if (temp_segment->train == 1) 
            {
                if (temp_segment->next->train == 0) 
                {
                    temp_segment->train = 0;
                    temp_segment->next->train = 2;
                }
                else if (temp_segment->next_adj->train == 0) 
                {
                    temp_segment->train = 0;
                    temp_segment->next_adj->train = 2;
                }
            }
            else if (temp_segment->train == -1) 
            {   
                if (temp_segment->prev->train == 0) 
                {
                    temp_segment->train = 0;
                    temp_segment->prev->train = -2;
                }
                else if (temp_segment->prev_adj->train == 0) 
                {
                    temp_segment->train = 0;
                    temp_segment->prev_adj->train = -2;
                }
            }
        }
    }
    //for loop function will reset values
    for (int i = 0; i < NUM_TRACKS; i++) 
    {
        for (int j = 0; j < NUM_SEGMENTS; j++) 
        {
            if (segments[i][j]->train == 2 || segments[i][j]->train == -2) 
            {
                segments[i][j]->train /= 2;
            }
        }
    }
}

