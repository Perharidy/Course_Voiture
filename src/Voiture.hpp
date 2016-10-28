/* 
	Fichier Voiture.hpp
	
	   
*/


#ifndef VOITURE_HPP
#define VOITURE_HPP
#pragma once

/******************************************************************************/
class Voiture
{
	private:
	Point position_;
	double vitesse_;
	double angle_;
	unsigned place_;
	unsigned secteurActuel_;
	unsigned secteurPrecedent_;

//Depend de notre implémentation je suppose ? structure ?	
	bool accelere_;
	bool freine_;
	bool gauche_;
	bool droite_;
	
	public:
	Voiture(Point position, double vitesse, double angle, unsigned place, unsigned secteurActuel, unsigned secteurPrecedent, bool accelere, bool freine, bool gauche, bool droite);

	~Voiture();
//Getters
	Point getPosition() const;
	double getVitesse() const;
	double getAngle() const;
	unsigned getPlace() const;
	unsigned getSecteurActuel() const;
	unsigned getSecteurPrecedent() const;
	//bool
	bool getAccelere() const;
	bool getFreine() const;
	bool getGauche() const;
	bool getDroite() const;
	
//Setters
	void setPosition (Point p);
	void setVitesse (double vitesse);
	void setAngle (double angle);
	void setSecteurActuel (unsigned num);
	void setSecteurPrecedent (unsigned num);
	//bool
	void setAccelere (bool b);
	void setFreine (bool b);
	void setGauche (bool b);
	void setDroite (bool b);
}; // class Voiture
/******************************************************************************/

#endif // VOITURE_HPP
