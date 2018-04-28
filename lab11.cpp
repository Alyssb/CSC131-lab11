/**
 * CSC131 - Computational Thinking
 * Missouri State University

 * @file lab11.cpp
 * @authors Alyssa Slayton <jajs41@missouristate.edu>
 */

#include <cstdlib>
#include <iostream>
#include "Square.h"
#include "Circle.h"

enum class MainMenuItem{SQUARE_OPTION = 1, CIRCLE_OPTION = 2, QUIT = 99};
enum class SquareMenuItem{CHANGE_SIDE = 1, PRINT_AREA = 2, QUIT = 99};
enum class CircleMenuItem{CHANGE_RADIUS = 1, PRINT_AREA = 2, QUIT = 99};


MainMenuItem displayMainMenu();
void displaySquareSubmenu();
void displayCircleSubmenu();

int main()
{
    MainMenuItem selectedOption;

    do {
        selectedOption = displayMainMenu();
    } while (selectedOption!=MainMenuItem::QUIT);

    return EXIT_SUCCESS;
}

MainMenuItem displayMainMenu()
{
    std::cout << "1. Play with Square\n";
    std::cout << "2. Play with Circle\n";
    std::cout << "99. Quit\n\n";
    std::cout << "What do you want to do? ";
    unsigned short selection;
    std::cin >> selection;

    switch (selection) {
    case static_cast<unsigned short>(MainMenuItem::SQUARE_OPTION):
        displaySquareSubmenu();
        break;
    case static_cast<unsigned short>(MainMenuItem::CIRCLE_OPTION):
        displayCircleSubmenu();
        break;
    case static_cast<unsigned short>(MainMenuItem::QUIT):
		break;
    default:
		break;
    }
    return static_cast <MainMenuItem>(selection);
}

void displaySquareSubmenu()
{
    unsigned short selection{0};
    Square square{};
    int side{};

    SquareMenuItem menuItem;
      do {
        std::cout << "1. Change side\n";
        std::cout << "2. Print area\n";
        std::cout << "99. Quit\n";
        std::cout << "\nWhat do you want to do? ";
        std::cin >> selection;
        menuItem = static_cast<SquareMenuItem>(selection);

        switch (menuItem) {
        case SquareMenuItem::CHANGE_SIDE:
            std:: cout << "Enter new side: ";
            std:: cin >> side;
            square.setSide(side);
            break;
        case SquareMenuItem::PRINT_AREA:
            std::cout << "\nArea = " << square.area() << "\n";
            break;
        case SquareMenuItem::QUIT:
			break;
        }
    } while (menuItem!=SquareMenuItem::QUIT);
}

void displayCircleSubmenu()
 {
    unsigned short selection{0};
    Circle circle{};
    double radius{};

    CircleMenuItem menuItem;
    do {
        std::cout << "1. Change radius\n";
        std::cout << "2. Print area\n";
        std::cout << "99. Quit\n";
        std::cout << "\nWhat do you want to do? ";
        std::cin >> selection;
        menuItem = static_cast<CircleMenuItem>(selection);

        switch (menuItem) {
        case CircleMenuItem::CHANGE_RADIUS:
            std:: cout << "Enter new radius: ";
            std:: cin >> radius;
            circle.setRadius(radius);
            break;
        case CircleMenuItem::PRINT_AREA:
            std::cout << "\nArea = " << circle.area() << "\n";
            break;
        case CircleMenuItem::QUIT: break;
        }
    } while (menuItem!=CircleMenuItem::QUIT);
}