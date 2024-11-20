#include <iostream>

#include "protos.h"
//Definition des fonctions deeclarees dans protos.h

int longueur(const char* chaine) {
	int l = 0;
	while (*chaine != '\0') {
		l++;
		chaine++;
	}
	return l;
}
void copie(char* dest, const char* source) {
	int i = 0;
	for (i = 0; source[i] != '\0'; i++) {
		dest[i] = source[i];
	}
	std::cout << "Chaine copiee: " << dest << std::endl;
}
void concatene(char* dest, const char* source) {
	int l = 0;
	l = longueur(source);
	int l1 = 0;
	l1 = longueur(dest);
	int j = 0;
	for (int i = l1; i < (l+l1); i++) {
		dest[i] = source[j];
		j++;
	}
	std::cout << "Cette concatenation permet d'obtenir: " << dest << std::endl;
}
int compare(const char* chaine1, const char* chaine2) {
	int l1 = 0;
	int l2 = 0;
	l1 = longueur(chaine1);
	l2 = longueur(chaine2);
	return l1 - l2;
}
char* cherche_char(char* chaine, char caractere) {
	int l = 0;
	l = longueur(chaine);
	for (int i = 0; i < l; i++) {
		if (chaine[i] == caractere) {
			return &chaine[i];
		}
	}
	return NULL;
}
void inverse(char* chaine) {
	int l = 0;
	l = longueur(chaine);
	char ch_inter[100];
	int j = l;
	for (int i = 1; i < l; i++) {
		    j--;
			ch_inter[j] = chaine[i];
	}
	ch_inter[l] = chaine[0];
	std::cout << "L'inverse de cette chaine est: " << ch_inter << std::endl;
}
void to_upper(char* chaine) {
	int l = 0;
	l = longueur(chaine);
	for (int i = 0; i < l; i++) {
		if (chaine[i] >= 'a' && chaine[i] <= 'z') {
			chaine[i] = chaine[i] - ('a' - 'A');
		}
	}
	std::cout << "Cette chaine tout en minuscule est: " << chaine << std::endl;
}
void to_lower(char* chaine) {
	int l = 0;
	l = longueur(chaine);
	for (int i = 0; i < l; i++) {
		if (chaine[i] >= 'A' && chaine[i] <= 'Z') {
			chaine[i] = chaine[i] + ('a' - 'A');
		}
	}
	std::cout << "Cette chaine tout en minuscule est: " << chaine << std::endl;
}
char* cherche_mot(char* phrase, const char* mot) {
	int i = 0, j = 0;
	while (phrase[i] != '\0') {
		if (phrase[i] == mot[j]) {
			int k = i;
			while (phrase[k] == mot[j] && mot[j] != '\0') {
				k++;
				j++;
			}
			if (mot[j] == '\0') {
				return &phrase[i];
			}
			j = 0;
		}
		i++;
	}
	return NULL;
}
void sous_chaine(const char* source, char* dest, int debut, int l_ong) {
	int l = 0;
	int j;
	int i;
	l = longueur(source);
	for ( (i = debut) && (j == 0); i < l && j < l_ong; i++ && j++) {
			dest[j] = source[i];
	}
	std::cout << "La sous chaine extraite est: " << dest << std::endl;
}
void supprime_caractere(char* chaine, char caractere) {
	int l = 0;
	l = longueur(chaine);
	int index = 0;
	for (int i = 0; i < l; i++) {
		if (chaine[i] != caractere) {
			chaine[index] = chaine[i];
			index++;
		}
	}
	chaine[index] = '\0';
	std::cout << "Apres la suppression du caractere " << caractere << " la chaine devient: " << chaine << std::endl;
}
int compte_mots(const char* phrase) {
	int compteur = 0;
	bool present = false;
	for (int i = 0; phrase[i] != '\0'; i++) {
		if ((phrase[i] >= 'A' && phrase[i] <= 'Z') || (phrase[i] >= 'a' && phrase[i] <= 'z') || (phrase[i] >= '0' && phrase[i] <= '9')) {
			if (!present) {
				present = true;
				compteur++;
			}
		}
		else {
			present = false;
		}
	}
	return compteur;
}