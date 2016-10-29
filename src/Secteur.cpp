/*
	Fichier Secteur.cpp


*/
#include "Secteur.hpp"
#include <cmath> // utile pour les fonctions mathématiques
using namespace std;

//------------------------------------------------------------------------------
//Constructeur
Secteur::Secteur(unsigned numero, Color couleur)
	: numero_ (numero),
	  couleur_ (couleur)
{}

//------------------------------------------------------------------------------
//Destructeur
Secteur::~Secteur()
{}

//------------------------------------------------------------------------------
unsigned Secteur::getNumero() const
{
	return numero_;
}

//------------------------------------------------------------------------------
Color Secteur::getColeur() const
{
	return couleur_;
}

//------------------------------------------------------------------------------
void Secteur::setNumero(unsigned numero)
{
	numero_ = numero;
}

//------------------------------------------------------------------------------
void Secteur::setCouleur(Color couleur)
{
	couleur_ = couleur;
}