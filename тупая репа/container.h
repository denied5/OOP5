#pragma once
#include "avtoPark.h"
#include <vector>


template<class A_TYPE, class B_TYPE, class C_TYPE, class E_TYPE, class F_TYPE>
class Container 

{
public:

	std::vector<A_TYPE *> A_vec;
	std::vector<B_TYPE *> B_vec;
	std::vector<C_TYPE *> C_vec;
	std::vector<E_TYPE *> E_vec;
	std::vector<F_TYPE *> F_vec;

	Container() {
		int size = 1 + rand() % 7;

		for (int i = 0; i < size; i++) {
			A_vec.push_back(new metal(1 + rand() % 3));
		}
		size = 1 + rand() % 7;
		for (int i = 0; i < size; i++) {
			B_vec.push_back(new car(1 + rand() % 3));
		}
		size = 1 + rand() % 7;
		for (int i = 0; i < size; i++) {
			C_vec.push_back(new body(1 + rand() % 3));
		}
		size = 1 + rand() % 7;
		for (int i = 0; i < size; i++) {
			E_vec.push_back(new engin(1 + rand() % 3));
		}
		size = 1 + rand() % 7;
		for (int i = 0; i < size; i++) {
			F_vec.push_back(new avtoPark(1 + rand() % 3));
		}
	}

	Container(unsigned int size) {

		for (int i = 0; i < size; i++) {
			A_vec.push_back(new avtoPark(1 + rand() % 3));
		}
		for (int i = 0; i < size; i++) {
			B_vec.push_back(new car(1 + rand() % 3));
		}
	}

	Container(std::string path) {

	}
	~Container() {

	}
};