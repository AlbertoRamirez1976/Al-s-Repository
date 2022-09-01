// CSCI_222 Lab2_P7.12 ("People Mover System") by Alberto E. Ramirez //
// The program that simulates the control software for a “people mover” system, 
// which is a set of driverless trains that move in two concentric circular tracks. 
// A set of switches  allows trains to switch tracks.  In your program, the outer and inner  tracks should each be divided into ten  segments. 
// Each track segment can contain  a train that moves either clockwise or  counterclockwise. 
// A train moves to an  adjacent segment in its track or, if that  segment is occupied, to the adjacent  segment in the other track. 
// Define a Segment structure. Each segment 

#include <iostream>// header file that defines the standard input/output stream objects
#include "init_tracks.h"// init_tracks header file allows for the interface (init_tracks.h) visible to other .cpp files, while keeping the implementation in its own .cpp file
#include "move_train.h"// move_train header file allows for the interface (move_train.h) visible to other .cpp files, while keeping the implementation in its own .cpp file
#include "print_tracks.h"// print_tracks header file allows for the interface (print_tracks.h) visible to other .cpp files, while keeping the implementation in its own .cpp file

int main() 
{
    Segment* segments[NUM_TRACKS][NUM_SEGMENTS];// parameters NUM_TRACKS wait a value of 2 and NUM_SEGMENTS with a value of 10 are taken as input values

    init_tracks(segments);// call to the init_tracks .cpp file. The segments header files is taken in as a parameter input value

    for (int i = 0; i < SIM_TIME; i++)// for loop will continue to increment value while the condition remain true
    {
        print_tracks(segments);// call to the print_tracks .cpp file. The segments header files is taken in as a parameter input value
        std::cout << std::endl << std::endl;// output
        move_train(segments);// call to the move_train .cpp file. The segments header files is taken in as a parameter input value
    }
    return 0;
}

