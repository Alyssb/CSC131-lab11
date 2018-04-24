#include <cstdlib>
#include <iostream>
#include <iomanip>

enum MainMenuItem{SQUARE_OPTION = 1, CIRCLE_OPTION = 2, QUIT = 99};

MainMenuItem displayMainMenu();
void displaySquareSubmenu();
void displayCircleSubmenu();



int main() {
    MainMenuItem selectedOption;
    do {
        displayMainMenu();
    } while(selectedOption != QUIT);

    return EXIT_SUCCESS;
}

MainMenuItem displayMainMenu(){
    std::cout << " 1. Play with Square\n";
    std::cout << " 2. Play with Circle\n";
    std::cout << "99. Quit\n\n";
    std::cout << "What? ";
    unsigned short selection;
    std::cin >> selection;

    switch(selection) {
    case SQUARE_OPTION:
        break;
    case CIRCLE_OPTION:
        break;
    case QUIT:
        break;
    default:
        break;
    }

    return static_cast<MainMenuItem>(selection);
}

void displaySquareSubmenu(){

}

void displayCircleSubmenu(){

}