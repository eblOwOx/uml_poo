/*****************************************************************//**
* \file   Electrique.h
* \brief  Declaration de la classe Electrique
*
* \author Amaury
* \date   September 2025
*********************************************************************/

#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H
#include <iostream>
#include <string>
#include "Moteur.h"

/*! \class Electrique
 * \brief classe representant un moteur electrique. Enfant de la classe Moteur. 1 attributs prives
 */
class Electrique : public Moteur
{
private:
    /*Classe sous forme canonique*/
    float tensionMax;

protected:

public:
    /*Classe sous forme canonique*/
    Electrique();
    ~Electrique();
    Electrique(const Electrique& elec);
    Electrique &operator = (const Electrique& elec);

    Electrique(float tensionMax);
    void setTensionMax(float puissance);
    float getTensionMax();
};
#endif
