/*****************************************************************//**
* \file   Thermique.cpp
* \brief  Definition de la classe Thermique
*
* \author Amaury
* \version 0.1
* \date   September 2025
*
* Programme Cpp permettant de creer des objets pour décrir
*********************************************************************/

#include "../header/Thermique.h"

using namespace std;


/**
 * \brief Constructeur par default
 * \li Cylindree du moteur = 0
 *
 */
Thermique::Thermique() 
{
    this->cylindree = 0;
}

/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param cylindree cylindree du moteur
 */
Thermique::Thermique(float cylindree) {
    this->cylindree = cylindree;
}

/**
 * \brief Destructeur
 *
 */
Thermique::~Thermique() {
    cout << "Destrcution du moteur avec : " << this->cylindree << " cynlindree." << endl;
}

/**
 * \brief Accesseur de l'attribut cylindree
 *
 * \return le cylindree du moteur
 */
float Thermique::getCylindree()
{
    return this->cylindree;
}

/**
 * \brief Mutateur de l'attribut cylindree
 *
 * \param newCylindree nouveau cylindree du moteur
 */
void Thermique::setCylindree(float newCylindree)
{
    this->cylindree = newCylindree;
}
