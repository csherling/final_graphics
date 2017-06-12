/*========== ml6.h ==========

Header file for fucntions we will use in ml6

Sets the maximum XYES and YRES for images as well
as the maximum color value you want to use.

Creates the point structure in order to represent 
a pixel as a color triple
=========================*/
#ifndef ML6_H
#define ML6_H

#define XRES 500
#define YRES 500
#define MAX_COLOR 255

/*
  Every point has an individual int for
  each color value
*/
struct point_t {

  int red;
  int green;
  int blue;
} point_t;

struct light_source {
  int x;
  int y;
  int z;
  int r;
  int g;
  int b;
} light_source;

struct light_constants {
  double ar;
  double dr;
  double sr;
  double ag;
  double dg;
  double sg;
  double ab;
  double db;
  double sb;
} light_constants;

typedef struct light_source light;
typedef struct light_constants reflection;

/*
  We can now use color as a data type representing a point.
  eg:
  color c;
  c.red = 0;
  c.green = 45;
  c.blue = 187;
*/
typedef struct point_t color;

/*
  Likewise, we can use screen as a data type representing
  an XRES x YRES array of colors.
  eg:
  screen s;
  s[0][0] = c;
*/
typedef struct point_t screen[XRES][YRES];
typedef double  zbuffer[XRES][YRES];

#endif
