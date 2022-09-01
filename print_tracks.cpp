// CSCI_222 Lab2_P7.12 ("People Mover System") by Alberto E. Ramirez //

#include <iostream>// header file that defines the standard input/output stream objects
#include "print_tracks.h"// print_tracks header file allows for the interface (print_tracks.h) visible to other .cpp files, while keeping the implementation in its own .cpp file
#include "segment.h"// segment header file allows for the interface (segment.h) visible to other .cpp files, while keeping the implementation in its own .cpp file

void print_tracks(struct Segment* segments[NUM_TRACKS][NUM_SEGMENTS]) // parameters NUM_TRACKS wait a value of 2 and NUM_SEGMENTS with a value of 10 are taken as input values
{
    std::cout << "+--"; // draws the upper-left corner
    // for loop function will draw the top track
    for (int i = 0; i < NUM_SEGMENTS / 2; i++) 
    {
        if (segments[0][i]->train == 0) // if a train is not present, then the if/else function will draw the outer track
        {                                     
            std::cout << "---";
        }
        else if (segments[0][i]->train == 1) 
        {                                
            std::cout << "->-";
        }
        else                                                                  
            std::cout << "-<-";
    }

    std::cout << "--+" << std::endl;// draws the upper-right corner
    std::cout << "|   x  x  x  x  x   |" << std::endl;// draws the upper portion of the sgment
    std::cout << "|  ";// draws the left vertical border

    for (int i = 0; i < NUM_SEGMENTS / 2; i++) 
    {
        if (segments[1][i]->train == 0) //if a train is not present, then it draws the inner track
        {                                    
            std::cout << "---";
        }
        else if (segments[1][i]->train == 1) 
        {                         
            std::cout << "->-";
        }
        else std::cout << "-<-";                                                   
    }

    std::cout << "  |" << std::endl; // draws the right vertical border
    std::cout << "|  |             |  |" << std::endl; // draws the left and right vertical border for inner loop


    std::cout << "|  "; //draws the left vertical border
    for (int i = NUM_SEGMENTS / 2; i < NUM_SEGMENTS; i++) 
    {
        if (segments[1][i]->train == 0) // if a train not present, then it draws the inner track
        {                                     
            std::cout << "---";
        }
        else if (segments[1][i]->train == 1) //if a train is present, then it draws the inner track
        {                               
            std::cout << "->-";
        }
        else std::cout << "-<-"; // if a train is present, then it draws the inner track
    }

    std::cout << "  |" << std::endl;
    std::cout << "|   x  x  x  x  x   |" << std::endl; // draws the lower segments
    std::cout << "+--";// draws the lower left corner

    for (int i = NUM_SEGMENTS / 2; i < NUM_SEGMENTS; i++) //if train not present, print outer track
    {
        if (segments[0][i]->train == 0) 
        {                                     
            std::cout << "---";
        }
        else if (segments[0][i]->train == 1) 
        {                                
            std::cout << "->-";
        }
        else std::cout << "-<-"; 
    }
    std::cout << "--+" << std::endl; // draws the lower right corner
}
