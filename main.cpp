#include <iostream>
#include "HelpArray.h"


int main()
{

    float a, b;

    XorOorEmpty input;

    HelpArray obj;

    obj.output();

    while (true) {
        std::cout << "Input array element(x, y) and input character(X, O): ";
        std::cin >> a >> b >> input;

        if (input != 'X' && input != 'O') {
            std::cout << "Invalid input. Please enter X or O." << std::endl;
            continue;
        }

        obj.replacementArr((int)a, (int)b, input);
        obj.output();

        if (obj.checkWin('X')) {//check for win
            std::cout << "Player X wins!" << std::endl;
            break;
        }
        else if (obj.checkWin('O')) {
            std::cout << "Player O wins!" << std::endl;
            break;
        }
    }
}