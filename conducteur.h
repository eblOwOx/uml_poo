/*****************************************************************//**
 * \file   conducteur.h
 * \brief  Declaration de la classe conducteur
 *
 * \author Ma�l
 * \date   September 2025
 *********************************************************************/

#define CONDUCTEUR_H

#include <vector>
#include <string>
#include "Moto.h"  ///< Inclusion car un conducteur poss�de des motos

/**
 * @class Conducteur
 * @brief Repr�sente un conducteur qui poss�de des motos.
 *
 * Cette classe permet de g�rer un conducteur avec ses informations personnelles
 * (nom, pr�nom, ann�e de naissance) ainsi que les motos qui lui appartiennent.
 */
class Conducteur {
private:
    std::string nom;                ///< Nom du conducteur
    std::string prenom;             ///< Pr�nom du conducteur
    int anneeNaissance;             ///< Ann�e de naissance du conducteur
    std::vector<Moto*> mesMotos;    ///< Liste des motos du conducteur (max 10)

public:
    /**
     * @brief Constructeur de la classe Conducteur.
     * @param�tre n Nom du conducteur
     * @param�tre p Pr�nom du conducteur
     * @param�tre an Ann�e de naissance
     */
    Conducteur();
	~Conducteur();
    Conducteur(const std::string& n, const std::string& p, int an);

};