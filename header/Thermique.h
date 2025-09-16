/*****************************************************************//**
* \file   Thermique.h
* \brief  Declaration de la classe thermique
*
* \author Amaury
* \date   September 2025
*********************************************************************/

#ifndef THERMIQUE_H
#define THERMIQUE_H
#include <iostream>
#include <string>
#include "Moteur.h"

/*! \class Thermique
 * \brief classe representant un moteur thermique. Enfant de la classe Moteur. 1 attributs prives
 */
class Thermique : public Moteur
{
private:
    /*Classe sous forme canonique*/
    float cylindree;

protected:

public:
    /*Classe sous forme canonique*/
    Thermique();
    ~Thermique();

    Thermique(float cylindree);
    void setCylindree(float cylindree);
    float getCylindree();
};
#endif
