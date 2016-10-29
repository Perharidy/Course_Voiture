/* 
* Fichier Secteur.hpp 
*
*
* @author LE BARS Yannis & HUNAULT Marion
*	
*/

#ifndef SECTEUR_HPP
#define SECTEUR_HPP
#pragma once

/*****************************************************************************/
class Secteur
{
	private:
		/**
		 * Numéro du secteur
		 */
		unsigned numero_;
		/**
		 * Couleur du secteur
		 */
		Color couleur_;

	public:
		/** --------------------------------------------------------------------
		 * @brief Constructeur d'un secteur
		 *
		 * @param unsigned numero : le numéro du secteur
		 * @param couleur Color : la couleur du secteur
		 * 
		 * @pre 
		 * @post 
		 *
		 * @b Complexité O(1)
		 */
		Secteur(unsigned numero, Color couleur);
	
		/** --------------------------------------------------------------------
		 * @brief Destructeur d'un secteur
		 *
		 * @b Complexité O(1)
		 */
		~Secteur();

		/** --------------------------------------------------------------------
		 * @brief Accesseur du numéro
		 *
		 * @return le numéro
		 *
		 * @b Complexité O(1)
		 */
		unsigned getNumero () const;

		/** --------------------------------------------------------------------
		 * @brief Accesseur de la couleur
		 *
		 * @return la couleur
		 *
		 * @b Complexité O(1)
		 */
		Color getCouleur () const;
	
		/** --------------------------------------------------------------------
		 * @brief Mutateur de la couleur
		 *
		 * @param couleur couleur remplacante
		 *
		 * @b Complexité O(1)
		 */
		void setNumero (int num);

		/** --------------------------------------------------------------------
		 * @brief Mutateur de la couleur
		 *
		 * @param couleur couleur remplacante
		 *
		 * @b Complexité O(1)
		 */
		void setCouleur (Color couleur);
}; //class Secteur

/******************************************************************************/
#include "Secteur.cpp"

#endif // Secteur_HPP