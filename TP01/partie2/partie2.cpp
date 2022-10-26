#include <iostream>
#include <string>
#include <Windows.h>
void score(int a, int b) {
    const std::string score40 = "40 pts";
    const std::string score30 = "30 pts";
    const std::string score15 = "15 pts";
    const std::string score0 = "0 pts";
    const std::string scoreA = "Avantage";
    const std::string scoreG = "gagne le jeu";
    const std::string joueurA = "Joueur A : ";
    const std::string joueurB = "Joueur B : ";
    if (a >= 3 || b >= 3) {
        if (a == b) {
            std::cout << "Les joueurs sont à égalité :"<< std::endl;
            if (a > 3) {
                std::cout << joueurA << score40 << "\n" << joueurB << score40 << std::endl;
                }
        }
        if (b >= 3 && a == b + 1) {
            std::cout << joueurA << scoreA << std::endl;
            if (b > 3) {
                std::cout << joueurB << score40 << std::endl;
            }
        }
        if (a >= 3 && b == a + 1) {
            std::cout << joueurB << scoreA << std::endl;
            if (a > 3) {
                std::cout << joueurA << score40 << std::endl;
            }
        }
        if (a >= 4 && a >= b + 2) {
            std::cout << joueurA << scoreG << std::endl;
            if (b > 3) {
                std::cout << joueurB << score40 << std::endl;
            }
        }
        if (b >= 4 && b >= a + 2) {
            std::cout << joueurB << scoreG << std::endl;
            if (a > 3) {
                std::cout << joueurA << score40 << std::endl;
            }
        }
    }
    if (!(a > 3)) {
        switch (a) {
        case 0:
            std::cout << joueurA << score0 << std::endl;
            break;
        case 1:
            std::cout << joueurA << score15 << std::endl;
            break;
        case 2:
            std::cout << joueurA << score30 << std::endl;
            break;
        case 3:
            std::cout << joueurA << score40 << std::endl;
            break;
        default:
            break;
        }
    }
    if (!(b > 3)) {
        switch (b) {
        case 0:
            std::cout << joueurB << score0 << std::endl;
            break;
        case 1:
            std::cout << joueurB << score15 << std::endl;
            break;
        case 2:
            std::cout << joueurB << score30 << std::endl;
            break;
        case 3: 
            std::cout << joueurB << score40 << std::endl;
            break;
        default:
            break;
        }
    }
    
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    while (true) {
        int a;
        int b;
        std::cout << "Nombre d'échanges gagnés par joueur A : " << std::endl;
        std::cin >> a;
        std::cout << "Nombre d'échanges gagnés par joueur B : " << std::endl;
        std::cin >> b;
        score(a, b);
    }
}
