#include "HelpArray.h"



HelpArray::HelpArray()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = ' ';
        }
    }
}

void HelpArray::output()
{
    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            std::cout << "|" << arr[i][j];
        }
        std::cout << "|" << std::endl;
    }
}

bool HelpArray::checkWin(XorOorEmpty player) {
    for (int i = 0; i < 3; i++) {
        if (arr[i][0] == player && arr[i][1] == player && arr[i][2] == player)
            return true;
    }


    for (int i = 0; i < 3; i++) {
        if (arr[0][i] == player && arr[1][i] == player && arr[2][i] == player)
            return true;
    }


    if (arr[0][0] == player && arr[1][1] == player && arr[2][2] == player)
        return true;


    if (arr[2][0] == player && arr[1][1] == player && arr[0][2] == player)
        return true;



    return false;
}

void HelpArray::replacementArr(int a, int b, XorOorEmpty input)
{

    // a, b - coordinates, input - char like X or O
    if ((a >= 0 && a <= 2) && (b >= 0 && b <= 2)) {
        if ((this->turn % 2) == 0) {
            if (arr[a][b] == ' ' && input == 'X') {
                this->turn++;
                arr[a][b] = input;

            }
        }
        else if ((this->turn % 2) != 0) {
            if (arr[a][b] == ' ' && input == 'O') {
                this->turn++;
                arr[a][b] = input;

            }
        }
    }
    else {
        std::cout << "Uncorrect data Error" << std::endl;
    }

}