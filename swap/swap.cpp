/**
 * @file swap.cpp
 * @author Jessiely Oliveira (jessiely.costa@gmail.com)
 */

#include <iostream>
using std::cerr;
using std::endl;
using std::cout;

#include "swap.h"

int main(int argc, char const *argv[]) {
	Node *list = new Node();

	if(!list) {
		cerr << "Allocation error" << endl;
		return 1;
	} 

	if(list->empty()) {
		cout << "Empty list" << endl;
	}

	//adicionar elementos
	//remover elementos
	//trocar elementos




	return 0;
}