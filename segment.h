// CSCI_222 Lab2_P7.12 ("People Mover System") by Alberto E. Ramirez //
// Define a Segment structure. Each segment  has a pointer to the next and previous segments in its track, 
// a pointer to the next and previous segments in the other track,  and a train indicator 
// that is 0 (empty), +1 (train moving clockwise), or –1 (train  moving counterclockwise).

// The segment header file allows us to put declarations in one location and then import them wherever we need them. This can save a lot of typing in multi-file programs.

#ifndef SEGMENT_H// the #ifndef directive checks whether a macro is not defined.
#define SEGMENT_H// the #define directive checks whether a macro is defined. When the preprocessor encounters this directive, it replaces any occurrence of identifier in the rest of the code by replacement

#define NUM_SEGMENTS 10 // the directive replaces any occurrence of NUM_SEGMENTS in the rest of the code with the integer value of 10
#define NUM_TRACKS 2// the directive replaces any occurrence of NUM_TRACKS in the rest of the code with the integer value of 2
#define NUM_TRAIN 4// the directive replaces any occurrence of NUM_TRAIN in the rest of the code with the integer value of 4
#define SIM_TIME 50 // the directive replaces any occurrence of SIM_TIME in the rest of the code with the integer value of 50

struct Segment// the Segment data structure groups different data elements under one name
{
    int train;  // variable declaration to an integer value for the variable train. if 1 = ccw, if 0 = none, if 1 = cw
    Segment* next, * prev, * next_adj, * prev_adj; // next, prev = same track, next_adj, prev_adj = next track
};

#endif//ends the SEGMENT_H header file
