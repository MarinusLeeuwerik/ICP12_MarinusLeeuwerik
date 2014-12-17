#include <stdbool.h>

#ifndef FUNCTIONS
#define FUNCTIONS

extern bool Authorize();
extern int Randomize(int min, int max);
extern int Menu();
extern double SurfaceBeam(double l, double w, double h);
extern double VolumeBeam(double l, double w, double h);

extern double VolumePiramid(double l, double w, double h);
#endif