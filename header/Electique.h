/*****************************************************************//**
* \file   Electrique.h
* \brief  Declaration de la classe Electrique
*
* \author Amaury
* \date   September 2025
*********************************************************************/

#define ELECTRIQUE_H
#include <iostream>
#include <string>

/*! \class Electrique
 * \brief classe representant un moteur electrique. 1 attributs prives
 */
class Electrique
{
private:
    /*Classe sous forme canonique*/
    float tensionMax;

protected:

public:
    /*Classe sous forme canonique*/
    Electrique();
    ~Electrique();
    Electique(const Electrique& elec);
    Electrique &operator = (const Electrique& elec);

    Electrique(float tensionMax);
    void setTensionMax(float puissance);
    float getTentionMax();
};
