// gestionVéhicule.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Conducteur.h"

int main()
{
    // Création d’un conducteur avec le constructeur par défaut
    Conducteur conducteur1;

    // Affichage des informations du conducteur
    std::cout << "Nom du conducteur : " << conducteur1.getNom() << std::endl;
    std::cout << "Prenom du conducteur : " << conducteur1.getPrenom() << std::endl;
    std::cout << "Annee de naissance du conducteur : " << conducteur1.getAnneeNaissance() << std::endl;

    // Affichage de la liste des motos 
    std::cout << "Motos de " << conducteur1.getNom() << " : " << std::endl;
    conducteur1.afficheMotos();

	// Création d’une moto avec le constructeur par défaut
    Moto moto1;

	// Affichage du poids de la moto
	std::cout << "Poids de la moto1 : " << moto1.getPoids() << std::endl;

    return 0;
}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
