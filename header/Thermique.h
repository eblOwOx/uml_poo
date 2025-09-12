/*****************************************************************//**
* \file   Thermique.h
* \brief  Declaration de la classe thermique
*
* \author Amaury
* \date   September 2025
*********************************************************************/

#define Thermique_H
#include <iostream>
#include <string>

/*! \class Thermique
 * \brief classe representant une moto. 2 attributs prives
 */
class Thermique
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

