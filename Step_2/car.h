/*********car.h**********/
 

#ifndef CAR_H
#define CAR_H


#include <cstring>
using namespace std;   //permet d'utiliser cout directement et non stdout
#include <iostream>



class Car
{
	private:
		char*name;
		Model model;


	public:
		Car(); //constructeur

		~Car(); //destructeur

		void setName(const char*n);

		const char* getName() const;

		void display()	const;
};

#endif