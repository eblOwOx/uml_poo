/*****************************************************************//**
 * \file   conducteur.h
 * \brief  Declaration de la classe conducteur
 *
 * \author Maël
 * \date   September 2025
 *********************************************************************/

#define CONDUCTEUR_H

#include <string>
#include "Moto.h"  ///< Inclusion car un conducteur possède des motos

/**
 * @class Conducteur
 * @brief Représente un conducteur qui possède des motos.
 *
 * Cette classe permet de gérer un conducteur avec ses informations personnelles
 * (nom, prénom, année de naissance) ainsi que les motos qui lui appartiennent.
 */
class Conducteur {
private:
    std::string nom;                ///< Nom du conducteur
    std::string prenom;             ///< Prénom du conducteur
    int anneeNaissance;             ///< Année de naissance du conducteur
    std::vector<Moto*> mesMotos;    ///< Liste des motos du conducteur (max 10)

public:
    /**
     * @brief Constructeur de la classe Conducteur.
     * @paramètre n Nom du conducteur
     * @paramètre p Prénom du conducteur
     * @paramètre an Année de naissance
     */
    Conducteur(const std::string& n, const std::string& p, int an);

    /**
     * @brief Retourne le nom du conducteur.
     * @return Nom sous forme de string
     */
    std::string getNom() const;

    /**
     * @brief Retourne le prénom du conducteur.
     * @return Prénom sous forme de string
     */
    std::string getPrenom() const;

    /**
     * @brief Retourne l'année de naissance du conducteur.
     * @return Année de naissance (int)
     */
    int getAnneeNaissance() const;

    /**
     * @brief Affiche les motos possédées par le conducteur.
     */
    void afficheMotos() const;

    /**
     * @brief Ajoute une moto au conducteur (max 10 motos).
     * @param newMoto Pointeur vers la moto à ajouter
     */
    void addMoto(Moto* newMoto);

    /**
     * @brief Supprime une moto de la liste du conducteur.
     * @param rmMoto Pointeur vers la moto à supprimer
     */
    void rmMoto(Moto* rmMoto);
};