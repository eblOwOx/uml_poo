#define Moteur_H

#include <string>
#include <iostream>


class Moteur {
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