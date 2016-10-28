/*
	Fichier Voiture.cpp

*/
#include "Voiture.hpp"

using namespace std;

//------------------------------------------------------------------------------
//Constructeur
Voiture::Voiture()
	: x_ (0),
	  y_ (0)
{}

Voiture::Voiture(unsigned x, unsigned y)
	: x_ (x),
	  y_ (y)
{}

//------------------------------------------------------------------------------
//Destructeur
Voiture::~Voiture()
{}

//------------------------------------------------------------------------------
Point Voiture::getPosition() const
{
	return position_;
}

//------------------------------------------------------------------------------
double Voiture::getVitesse() const
{
	return vitesse_;
}

//------------------------------------------------------------------------------
double Voiture::getAngle() const
{
	return angle_;
}

//------------------------------------------------------------------------------
unsigned Voiture::getPlace() cont
{
	return place_;
}

//------------------------------------------------------------------------------
unsigned Voiture::getSecteurActuel() const
{
	return secteurActuel_;
}

//------------------------------------------------------------------------------
unsigned Voiture::getSecteurPrecedent() const
{
	return secteurPrecedent_;
}

//------------------------------------------------------------------------------
bool Voiture::getAccelere() const
{
	return accelere_;
}

//------------------------------------------------------------------------------
bool Voiture::getFreine() const
{
	return freine_;
}

//------------------------------------------------------------------------------
bool Voiture::getGauche() const
{
	return gauche_;
}

//------------------------------------------------------------------------------
bool Voiture::getDroite() const
{
	return droite_;
}

//------------------------------------------------------------------------------
void Voiture::setPosition(Point position)
{
	position_ = position;
}

//------------------------------------------------------------------------------
void Voiture::setVitesse(double vitesse)
{
	vitesse_ = vitesse;
}

//------------------------------------------------------------------------------
void Voiture::setAngle(double angle)
{
	angle_ = angle;	
}

//------------------------------------------------------------------------------
void Voiture::setSecteurActuel(unsigned secteurActuel)
{
	secteurActuel_ = secteurActuel;
}

//------------------------------------------------------------------------------
void Voiture::setSecteurPrecedent(unsigned secteurPrecedent)
{
	secteurPrecedent_ = secteurPrecedent;
}

//------------------------------------------------------------------------------
void Voiture::setAccelere(bool accelere)
{
	accelere_ = accelere;
}

//------------------------------------------------------------------------------
void Voiture::setFreine(bool freine)
{
	freine_ = freine;
}

//------------------------------------------------------------------------------
void Voiture::setGauche(bool gauche)
{
	gauche_ = gauche;
}

//------------------------------------------------------------------------------
void Voiture::setDroite(bool droite)
{
	droite_ = droite;
}
