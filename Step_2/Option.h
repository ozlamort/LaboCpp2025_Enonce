/*********************Option.h*****************/


#ifndef OPTION_H
#define OPTION_H


#include <cstring>
using namespace std;  //permet d'utiliser cout directement et non stdcout
#include <iostream>



class Option
{
	private:
		char*code;
		char*label;
		float price;


	public:
		Option(); //constructeur
		Option(const char*,const char*,float p);
		Option(const Option& o);
		~Option();  //destructeur

		void setCode(const char*c);
		void setLabel(const char*l);
		void setPrice(float p);

		const char* getCode()const;
		const char* getLabel()const;
		float getPrice()const;

		void display()const;

};

#endif