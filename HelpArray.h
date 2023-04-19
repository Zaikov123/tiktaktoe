#pragma once
#include <iostream>
#include <type_traits>

typedef char XorOorEmpty;



class HelpArray
{
private:
	unsigned int turn = 0;
	XorOorEmpty arr[3][3];
public:

	HelpArray();

	void output();

	bool checkWin(XorOorEmpty player);

	void replacementArr(int a, int b, XorOorEmpty input);

};