#include <iostream>
#include <array>
#include <vector>

int somme(int a, int b) { // partie 1.1.1
    return a + b;
}
void inversePointeur(int *a, int *b) { // partie 1.1.2
    int a1 = *b;
    *b = *a;
    *a = a1;
    
}
void inverseReference(int& a, int& b) { // partie 1.1.2
    int a1 = b;
    b = a;
    a = a1;

}
void remplacePointeur(int* a, int* b, int* c) { // partie 1.1.3
    *c = *a + *b;
}
void remplaceReference(int& a, int& b, int& c) { // partie 1.1.3
    c = a + b;
}
// void trie(std::array<int, 10> &tableau) { // partie 1.1.4 enlevé pour bonus
void trie(std::vector<int> &tableau) {
    int val1;
    int choix;
    std::cout << "Le trie doit etre : \n" << "(1) Croissant \n" << "(2) Decroissant \n" << "(3) Inverse" << std::endl; // bonus
    std::cin >> choix;
    switch (choix) {
    case 1: // trie croissant
        for (int i = 0; i < std::size(tableau); i = i + 1) {
            for (int j = i + 1; j < std::size(tableau); j = j + 1) {
                if (tableau[i] > tableau[j]) {
                    val1 = tableau[i];
                    tableau[i] = tableau[j];
                    tableau[j] = val1;
                }
            }
        }
        break;
    case 2: // trie décroissant
        for (int i = 0; i < std::size(tableau); i = i + 1) {
            for (int j = i + 1; j < std::size(tableau); j = j + 1) {
                if (tableau[i] < tableau[j]) {
                    val1 = tableau[i];
                    tableau[i] = tableau[j];
                    tableau[j] = val1;
                }
            }
        }
    case 3: // trie inverse
        for (int i = 0; i < std::size(tableau); i = i + 1) {
            for (int j = i + 1; j < std::size(tableau); j = j + 1) {
                val1 = tableau[j];
                tableau[j] = tableau[i];
                tableau[i] = val1;
            }
        }
    }
    
}
int main()
{
    int a;
    int b;
    int c;
    std::cout << "Entrez le nombre a :" << std::endl;
    std::cin >> a;
    std::cout << "Entrez le nombre b :" << std::endl;
    std::cin >> b;
    std::cout << "Voici la somme : " << somme(a, b) << std::endl;

    std::cout << "Inversion avec pointeur :" << std::endl;
    std::cout << "Entrez le nombre a :" << std::endl;
    std::cin >> a;
    std::cout << "Entrez le nombre b :" << std::endl;
    std::cin >> b;
    inversePointeur(&a, &b);
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    std::cout << "Inversion avec reference " << std::endl;
    std::cout << "Entrez le nombre a " << std::endl;
    std::cin >> a;
    std::cout << "Entrez le nombre b " << std::endl;
    std::cin >> b;
    inverseReference(a, b);
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    std::cout << "Remplacer avec pointeur " << std::endl;
    std::cout << "Entrez le nombre a " << std::endl;
    std::cin >> a;
    std::cout << "Entrez le nombre b " << std::endl;
    std::cin >> b;
    std::cout << "Entrez le nombre c " << std::endl;
    std::cin >> c;
    remplacePointeur(&a, &b, &c);
    std::cout << "c : " << c << std::endl;

    std::cout << "Remplacer avec reference " << std::endl;
    std::cout << "Entrez le nombre a " << std::endl;
    std::cin >> a;
    std::cout << "Entrez le nombre b " << std::endl;
    std::cin >> b;
    std::cout << "Entrez le nombre c " << std::endl;
    std::cin >> c;
    remplaceReference(a, b, c);
    std::cout << "c : " << c << std::endl;
    int taille;
    std::cout << "Quelle doit etre la taille du tableau ?"; // bonus
    std::cin >> taille; // bonus
    // std::array<int, 10> tableau; // Enlevé pour le bonus
    std::vector<int> tableau(taille); //bonus
    srand((unsigned int)time(NULL));
    for (int i = 0; i < std::size(tableau); i = i + 1) {
        tableau[i] = (rand() % 100);
        std::cout << tableau[i] << std::endl; //pour tester le tableau
    }
    trie(tableau);
    for (int i = 0; i < std::size(tableau); i = i + 1) {
        std::cout << tableau[i] << std::endl;
    }
}
