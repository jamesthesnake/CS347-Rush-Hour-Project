/*  File: types.h
    Author: Addie Martin
    This is the file that defines several needed types.
*/
#ifndef TYPES_H
#define TYPES_H

/*
  Enum: Orientation
  Description: Lets us define the orientation of a vehicle.
*/
enum Orientation {RIGHTLEFT, UPDOWN};

/*
  Struct: Coord
  Description: A general container for integer coordinates.
*/
struct Coord
{
	Coord(short _x, short _y) : x(_x), y(_y) {}
	short x;
	short y;
};

//Needed forward declaration
class Vehicle;

/*
  Struct: VehicleMovement
  Description: Basically ties an action(movement) to a vehicle.
*/
struct VehicleMovement
{
	Vehicle* v;
	short m;
	VehicleMovement(Vehicle* _v, short _m) : v(_v), m(_m) {}
};


#endif
