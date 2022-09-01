// CSCI_222 Lab2_P7.12 ("People Mover System") by Alberto E. Ramirez //
// The init_tracks header file allows us to put declarations in one location and then import them wherever we need them. This can save a lot of typing in multi-file programs.

#ifndef INIT_TRACKS_H// the #ifndef directive checks whether a macro is not defined.
#define INIT_TRACKS_H// the #define directive checks whether a macro is defined. When the preprocessor encounters this directive, it replaces any occurrence of identifier in the rest of the code by replacement

#ifndef MATRIX_H// the #ifndef directive checks whether a macro is not defined.
#define MATRIX_H// the #define directive checks whether a macro is defined. When the preprocessor encounters this directive, it replaces any occurrence of identifier in the rest of the code by replacement

#include "segment.h"// segment header file allows for the interface (segment.h) visible to other .cpp files, while keeping the implementation in its own .cpp file

void init_tracks(struct Segment* segments[NUM_TRACKS][NUM_SEGMENTS]);// parameters NUM_TRACKS wait a value of 2 and NUM_SEGMENTS with a value of 10 are taken as input values


#endif //ends the MATRIX_H header file
#endif //ends the INIT_TRACKS_H header file
