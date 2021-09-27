// TP1 - CLAUSS Clement.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

// I.1.3

int *p1; // pointeur
int *p2;
int* ref1; // reference
int* ref2;
int  tableau[10];

// I.1.4


int i;

//  I.1.1

int addition(int a, int b)
{
	return a + b;
}

// I.1.2

void inversion(int a, int b)
{
	int c;


	c = a;
	a = b;
	b = c;

}

// I.1.3

int additionP(int a, int b, int c)
{

	p1 = &a;
	p2 = &b;
	c = *p1 + *p2;

	return c;

}

int additionRef(int a, int b, int c)
{

	ref1 = &a;
	ref2 = &b;
	c = *ref1 + *ref2;

	return c;

}

// I.1.4

void remplissage()
{
	srand((unsigned)time(0));
	int randomNumber;
	int echange;
	int place = 0;


	

	
	


	for (int i = 0; i < 10; i++)
	{
		randomNumber = (rand() % 100);
		tableau[i] = randomNumber;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		if (tableau[j] > tableau[i])
		{

			// inversion(tableau[j], tableau[i]);  je ne trouve pas la raison de pourquoi cette ligne ne m'amène pas à une liste triée

			echange = tableau[j];
			tableau[j] = tableau[i];
			tableau[i] = echange;
			
			
			
		}
		
	}

}

// -- II Jeu de tennis --

/*void tennis(int a, int b)
{
	int scoreJ1;
	int scoreJ2;
	switch (a)

	{
		case 0:
			scoreJ1 = 0;
			break;
		case 1:
			scoreJ1 = 15;
			break;
		case 2 :
			scoreJ1 = 30;
			break;
		case 3 :
			scoreJ1 = 40;
			break;
		



	default:

		break;
	}
}*/

void tennis()
{
	int echangeJ1 = 0;
	int echangeJ2 = 0;
	bool fini = false;

	std::cout << "veuillez saisir le nombre d'echange gagne par le joueur 1 et le joueur 2" << std::endl;
	std::cout << "J1 : ";
	std::cin >> echangeJ1;
	std::cout << "J2 : ";
	std::cin >> echangeJ2;


	if ((echangeJ1 >= 4) && (echangeJ2 <= 2))

	{
		echangeJ1 = 40;
		switch (echangeJ2)
		{
		case 1:
			echangeJ2 = 15;
			break;
		case 2:
			echangeJ2 = 30;
			break;

		default:
			echangeJ2 = 0;
			break;
		}
		std::cout << "Joueur 1 gagne le set avec un score de "<< echangeJ1 << " - " << echangeJ2 << std::endl;

	}
	else if ((echangeJ2 >= 4) && (echangeJ1 <= 2))
	{
		echangeJ2 = 40;
		switch (echangeJ1)
		{
		case 1:
			echangeJ1 = 15;
			break;
		case 2:
			echangeJ1 = 30;
			break;

		default:
			echangeJ1 = 0;
			break;
		}
		std::cout << "Joueur 2 gagne le set avec un score de " << echangeJ1 << " - " << echangeJ2 << std::endl;
	}

	else if ((echangeJ1 >= 4) && (echangeJ2 >= 4) && (echangeJ1 - echangeJ2 == 2))
	{
		std::cout << "Joueur 1 gagne le set avec un score de AVANTAGE - DESAVANTAGE" << std::endl;
	}

	else if ((echangeJ1 >= 4) && (echangeJ2 >= 4) && (echangeJ2 - echangeJ1 == 2))
	{
		std::cout << "Joueur 2 gagne le set avec un score de DESAVANTAGE - AVANTAGE" << std::endl;
	}
	else
	{
		std::cout << "le match n'est pas fini ou le score incorrecte" << std::endl;;
	}
	

	
	

}

void salutationPrenom()
{
	std::string prenom;

	std::cout << "Quel est votre prenom ?" << std::endl;
	std::cin >> prenom;
	std::cout << "Bonjour " << prenom << std::endl;
}

void salutation()
{
	std::string nom;
	std::string prenom;

	std::cout << "Quel est votre nom et prenom ?" << std::endl;
	std::cin >> nom >> prenom;
	std::cout << "Bonjour " << nom << " " << prenom << std::endl;


}

void devinette()
{

	srand(time(NULL));
	int nombre = rand()%1000;
	int reponse;
	int essaie = 1;
	bool gagne = false;
	

	
	

	while (gagne == false)
	{


		std::cout << "devinez le nombre entre 0 et 1000" << std::endl;
		std::cin >> reponse;

		if (reponse == nombre)
		{
			std::cout << "Bravo tu as trouvé le nombre en " << essaie << " essaie(s)" << std::endl;
			gagne = true;
		}

		else if (reponse < nombre)
		{
			std::cout << "Le nombre que l'on recherche est plus grand" << std::endl;;
			essaie += 1;
		}
		else
		{
			std::cout << "Le nombre que l'on recherche est plus petit" << std::endl;;
			essaie += 1;
		}
		
	}

	
}

int main()
{	
	
	std::cout << addition(1,2) << std::endl;
	std::cout << additionP(3,2,1) << std::endl;
	std::cout << additionRef(4,7,1) << std::endl;
	remplissage();
	std::cout << "tableau de la question I.1.4 " << std::endl;
	for (i = 0; i < 10; i++)
	{
		std::cout << tableau[i] << std::endl;
		
	}
	
// -- II Jeu de tennis --
std::cout << "jeu de tennis" << std::endl;
tennis();
  
// -- III Inscription dans la console et récupération des saisies.

// -- III.1 Affichage et saisie de chaînes de caractères.

// salutationPrenom();
salutation();

// -- III.2 Affichage et saisie de nombres.  

devinette();
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
