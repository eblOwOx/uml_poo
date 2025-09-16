/*****************************************************************//**
 * \file   conducteur.h
 * \brief  Declaration de la classe conducteur
 *
 * \author Ma�l
 * \date   September 2025
 *********************************************************************/

#define CONDUCTEUR_H

#include <iostream>
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
    Moto mesMotos [10];             ///< Motos du conducteur

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

    /**
 * @brief Retourne le nom du conducteur.
 * @return Nom sous forme de string
 */
    std::string getNom();

    /**
     * @brief Retourne le pr�nom du conducteur.
     * @return Pr�nom sous forme de string
     */
    std::string getPrenom();

    /**
     * @brief Retourne l'ann�e de naissance du conducteur.
     * @return Ann�e de naissance (int)
     */
    int getAnneeNaissance();

    /**
     * @brief Affiche les motos poss�d�es par le conducteur.
     */
    void afficheMotos();

    /**
     * @brief Ajoute une moto au conducteur (max 10 motos).
     * @param newMoto Pointeur vers la moto � ajouter
     */
    void addMoto(Moto* newMoto);

    /**
     * @brief Supprime une moto de la liste du conducteur.
     * @param rmMoto Pointeur vers la moto � supprimer
     */
    void rmMoto(Moto* rmMoto);
};
