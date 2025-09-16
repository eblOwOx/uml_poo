/*****************************************************************//**
* \file   Moteur.h
* \brief  Declaration de la classe moteur
*
* \author Gagny
* \date   September 2025
*********************************************************************/
#ifndef MOTEUR_H
#define MOTEUR_H
#include <string>
#include <iostream>

/*! \class Moteur
 * \brief classe representant un moteur. Parent des classes Electrique et Thermique. 1 attributs prives
 */
class Moteur{
private:
	int Puissance;


public:
	Moteur();
	~Moteur();

	Moteur(int Puissance);
	void setPuissance(int nouveauPuissance);
	int getPuissance();
	
protected:

};
#endif
