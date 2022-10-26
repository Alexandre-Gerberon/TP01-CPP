#include <iostream>
#include <string>
#include <Windows.h>
void format(std::string &nom, std::string &prenom) { // partie 3.1.2
    std::string tmp;
    for (int i = 0; i < std::size(nom); i = i + 1) { // bonus
        tmp = tmp + (char)toupper(nom[i]);
    }
    nom = tmp;
    tmp = "";
    for (int i = 0; i < std::size(prenom); i = i + 1) { // bonus
        if (i == 0) {
            tmp = (char)toupper(prenom[i]);
        }
        else {
            tmp = tmp + (char)tolower(prenom[i]);
        }
    }
    prenom = tmp;
}
void justeprix() { // partie 3.2.2
    srand((unsigned int)time(NULL));
    int nombre = 0 + rand() % 1000;
    std::cout << nombre;
    int reponse = -1;
    while (!(reponse == nombre)) {
        std::cout << "Devinez le nombre : " << std::endl;
        std::cin >> reponse;
        if (reponse == nombre) {
            std::cout << "bravo ! tu as deviné le nombre" << std::endl;
        }
        else if (reponse > nombre) {
            std::cout << "C'est trop grand" << std::endl;
        }
        else {
            std::cout << "C'est trop petit" << std::endl;
        }
    }
}
int main()
{
    std::string nom;
    std::string prenom;
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Quel est ton nom et ton prénom ?" << std::endl;
    std::cin >> nom >> prenom; 
    format(nom, prenom);
    std::cout << "Bonjour, " << nom << " " << prenom << std::endl;
    justeprix();
}
