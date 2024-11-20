#include <iostream>
#include <string>
#include <limits>

#include "protos.h"
//programme principale.
//lien vers le projet github en description.

int main(int argc, char** argv) {
	std::cout << "Que voullez vous faire: " << std::endl;
	//Menu principal pourchisir l'operation a effectuer.
	std::cout << "1- calcul de longueur\n 2- copie de chaine\n 3- concatenation de chaines\n 4- comparaison de chaines\n 5- recherche d'un caractere\n 6-inversion d'une chaine." << std::endl;
	std::cout << "7- extraction de sous chaine\n 8- supprimer un caractere\n 9- transformer les minuscules d'une chaine en majuscules \n 10- transformer les majuscules d'une chaine en minuscules\n 11- compter les mots dans une phrase \n 12- chercher un mot dans une phrase." << std::endl;
	std::cout << "choix: ";
	int choix = 0;
	std::cin >> choix;
	if (choix == 1) {
		// Calcul de la longueur de la chaine nommee 'chaine' a l'aide de la fonction 'longueur()'. 
		char chaine[50];
		std::cout << "Veuillez saisir la chaine dont vous voullez la longueur: ";
		std::cin >> chaine;
		int l = 0;
		const char* ch = chaine;
		l = longueur(ch);
		std::cout << "La longueur de cette chaine est: " << l << std::endl;
	}
	if (choix == 2) {
		// Copie de la chaine nommee 'chaine' a l'aide de la fonction 'copie()'.
		char chaine[50];
		std::cout << "Veuillez saisir la chaine a copier: " << std::endl;
		std::cin >> chaine;
		const char* source = chaine;
		char chi[50] = "ah";
	    char* dest = chi;
		copie(dest, source);
	}
	if (choix == 3) {
		/*Concatenationn de deux chaines ch1 et ch2 donnees par l'utilisateur
		et qui place la chaine1 a la fin de la chaine2 a l'aide de la fonction concatene()*/
		char chaine1[50] = "ah";
		char chaine2[50] = "ah";
		std::cout << "Veuillez saisir la 1ere chaine: " << std::endl;
		std::cin >> chaine1;
		std::cout << "Veuillez saisir la 2eme chaine: " << std::endl;
		std::cin >> chaine2;
	    char* dest = chaine1;
		const char* source = chaine2;
		concatene(dest, source);
	}
	if (choix == 4) {
		/*Comparaison de deux chaines; chaine1 et chaine2 donnees par l'utilisateur a l'aide de la fonction compare()*/
		char chaine1[50] = "ah";
		char chaine2[50] = "ah";
		std::cout << "Veuillez saisir la 1ere chaine: " << std::endl;
		std::cin >> chaine1;
		std::cout << "Veuillez saisir la 2eme chaine: " << std::endl;
		std::cin >> chaine2;
		const char* ch1 = chaine1;
		const char* ch2 = chaine2;
		int l = 0;
		l = compare(chaine1, chaine2);
		if (l > 0) {
			std::cout << "La premiere chaine est plus grande que la deuxieme." << std::endl;
		}
		else if (l < 0) {
			std::cout << "La deuxieme chaine est plus grande que la premiere." << std::endl;
		}
		else {
			std::cout << "Les deux chaines sont egales." << std::endl;
		}
	}if (choix == 5) {
		// Recherche d'un caractere dans une chaine avec la fonction cherche_char.
		char caractere;
		std::cout << "Veuillez enter le caractere a chercher: ";
		std::cin >> caractere;
		char chaine[50];
		std::cout << "Veuillez saisir la chaine dans laquelle vous voullez rechercher le caractere: ";
		std::cin >> chaine;
		char* ch = chaine;
		char* pos = nullptr;
		pos = cherche_char(ch, caractere);
		if(pos) {
			std::cout << "le caractere /"<< caractere << "/ a ete trouve" << " a la position "<< pos - chaine  << std::endl;
		}
	    else{
			std::cout << "le caractere /" << caractere << "/ est introuvable" << std::endl;
		}
	}
	if (choix == 6) {
		//Inverse une chaine nommee 'chaine' donnee par l'utilisateur a l'aide de la fonnction inverse().
		char chaine[50];
		std::cout << "Veuillez saisir la chaine a inverser: ";
		std::cin >> chaine;
	    char* ch = chaine;
		inverse(ch);
	}
	if (choix == 7) {
		/*Extrait une sous chaine dest dans source a partir d'un caractere donne par l'utilisateur et de longueur donne aussi 
		fonction utilisee sous_chaine().*/
        char chaine[50];
		std::cout << "Veuillez saisir la chaine dans laquelle vous voullez extraire une sous chaine: ";
		std::cin >> chaine;
	    const char* source = chaine;
		std::cout << "Entrer la position appartir de laquelle la sous chaine va etre extraite: ";
		int debut;
		std::cin >> debut;
		int l_ong = 0;
		l_ong = longueur(source);
		std::cout << "Entrer la longueur de la sous chaine a extraire: ";
		int l;
		std::cin >> l;
		char* dest;
		sous_chaine(source, dest, debut, l);
	}
	if (choix == 8) {
		/*Suppression d'un caractere dans une chaine
		fonction utilisee supprime_caractere*/
		char chaine[50];
		std::cout << "Veuillez saisir la chaine dans laquelle vous voullez supprimer un caractere: ";
		std::cin >> chaine;
		const char* source = chaine;
		std::cout << "Entrer le caractere a supprimer dans la chaine: ";
		char caractere;
		std::cin >> caractere;
		supprime_caractere(chaine, caractere);
	}
	if (choix == 9) {
		/*Transforme toutes les minuscules d'une chaine en majuscules
		fonction utilisee to_upper()*/
		char chaine[50];
		std::cout << "Veuillez saisir la chaine dans laquelle vous voullez supprimer un caractere: ";
		std::cin >> chaine;
		char* ch = chaine;
		to_upper(ch);
	}
	if (choix == 10) {
		/*Transforme toutes les majuscules d'une chaine en minuscules
		fonction utilisee to_lower()*/
		char chaine[50];
		std::cout << "Veuillez saisir la chaine dans laquelle vous voullez supprimer un caractere: ";
		std::cin >> chaine;
	    char* ch = chaine;
		to_lower(ch);
	}
	if (choix == 11) {
		/*Compte les mots dans une phrase
		fonction utilisee compte_mot()*/
	   char phrase[100] = "ha";
		std::cout << "Veuillez saisir la phrase dont vous voullez le nombre de mots: " << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.getline(phrase, 100);
		const char* ch = phrase;
		int nbre_mots = 0;
		nbre_mots = compte_mots(ch);
		std::cout << "Cette phrase compte " << nbre_mots << " mots." << std::endl;
	}
	if (choix == 12) {
		/*Cherche un mot dans une phrase
		fonction utilisee cherche_mot*/
		char phrase[100] = "ah";
		char mot[20] = "ah";
		std::cout << "Veuillez saisir une phrase: " << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.getline(phrase, 100);
		char* ch = phrase;
		std::cout << "Veuillez saisir le mot a chercher: " << std::endl;
		std::cin >> mot;
		const char* ch1 = mot;
		char* pos = cherche_mot(ch, ch1);
		if (pos) {
			std::cout << "Le mot /" << mot << "/ a ete trouve a la position: " << (pos - phrase) << std::endl;
		}
		else {
			std::cout << "Le mot /" << mot << "/ n'a pas ete trouve dans la phrase." << std::endl;
		}
	}
	return 0;
}