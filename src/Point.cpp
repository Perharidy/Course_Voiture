/*
	Fichier Point.cpp

	Définition des méthodes de Point
*/
#include "Point.hpp"
#include <cmath> // utile pour les fonctions mathématiques
#include <sstream> // pour les conversions en chaine

#define PI 3.14159265

using namespace std;

//------------------------------------------------------------------------------
//Constructeur
Point::Point()
	: x_ (0),
	  y_ (0)
{}

Point::Point(unsigned x, unsigned y)
	: x_ (x),
	  y_ (y)
{}

//------------------------------------------------------------------------------
//Destructeur
Point::~Point()
{}

//------------------------------------------------------------------------------
unsigned Point::getX() const
{
	return x_;
}

//------------------------------------------------------------------------------
unsigned Point::getY() const
{
	return y_;
}

//------------------------------------------------------------------------------
void Point::setX(unsigned x)
{
	x_ = x;
}

//------------------------------------------------------------------------------
void Point::setY(unsigned y)
{
	y_ = y;
}

//------------------------------------------------------------------------------
void Point::setXY(unsigned x, unsigned y)
{
	x_ = x;
	y_ = y;
}

string Point::toString(){
	stringstream sst;
	sst <<"(" << x_ << "," << y_ << ")";
	return sst.str();
}

//------------------------------------------------------------------------------
double Point::distance(Point autre)
{
	return sqrt( (autre.getX() - x_)*(autre.getX() - x_) + (autre.getY() - y_)*(autre.getY() - y_) );
}

//------------------------------------------------------------------------------
bool Point::equals(Point autre)
{
	return true;
}

//------------------------------------------------------------------------------
void Point::deplacer(unsigned dx, unsigned dy)
{
	x_ = x_ + dx;
	y_ = y_ + dy;
}