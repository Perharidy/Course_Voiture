/* 
	Fichier Point.hpp
	
	   
*/


#ifndef POINT_HPP
#define POINT_HPP
#pragma once

#include <string> // pour le type std::string


/**************************************************************************** */
class Point
{
	private:
		// Attributs et types internes
		unsigned x_; //double peut etre
		unsigned y_;

	public:
		/** --------------------------------------------------------------------
		 * @brief Constructeur d'une point 
		 * 
	     * @param x Entier egal à l'abscisse du point
	     * @param y Entier egal à l'ordonnée du point
	     * 
	     * @pre 
		 * 
		 * @post 
		 *
		 * @b Complexité O(1)
	     */
		Point();
		Point(unsigned x, unsigned y);

		/** --------------------------------------------------------------------
		 * @brief Destructeur d'un point
		 *
		 * @b Complexité O(1)
		 */
		~Point();

		/** --------------------------------------------------------------------
		 * @brief Accesseur de l'abscisse du point
		 *
		 * @b Complexité O(1)
		 */
		unsigned getX() const;

		/** --------------------------------------------------------------------
		 * @brief Accesseur de l'ordonnée du point
		 *
		 * @b Complexité O(1)
		 */
		unsigned getY() const;
		
		/** --------------------------------------------------------------------
		 * @brief Mutateur de l'abscisse du point
		 *
		 * @param x x remplacant
		 *
		 * @b Complexité O(1)
		 */
		void setX(unsigned x);
		
		/** --------------------------------------------------------------------
		 * @brief Mutateur de l'ordonnée du point
		 *
		 * @param y y remplacant
		 *
		 * @b Complexité O(1)
		 */
		void setY(unsigned y);
		
	    /** --------------------------------------------------------------------
		 * @brief Mutateur du point
		 *
		 * @param x x remplacant
		 * @param y y remplacant
		 *
		 * @b Complexité O(1)
	     */
		void setXY(unsigned x, unsigned y);

		std::string toString();

		double distance(Point autre);

		bool equals(Point autre);

		void deplacer(unsigned dx, unsigned dy);







}; // class Point
/**************************************************************************** */

#endif // POINT_HPP
