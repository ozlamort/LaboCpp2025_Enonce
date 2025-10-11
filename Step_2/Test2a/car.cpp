/********Car.cpp***********/


#include "car.h"
//#include "Option.h"
#include <iostream>
#include <string>
#include "Model.h"
using namespace std;

/**************constructeur******************/

Car::Car()  //constructeur
{
	cout<<"Car: constructeur pas defaut"<<endl;
	name="nullptr";
	setName("nom");
}

Car::Car(const string& n)  //constructeur d'initialisation
{
	cout<<"Car: constructeur d'initialisation"<<endl;
	name="nullptr";  
	setName(n);
}

Car::Car(const Car& c)  //constructeur de copie
{
	cout<<"Car: constructeur de copie"<<endl;
	name="nullptr";
	setName(c.getName());
}

//**********************DESTRUCTEUR

Car::~Car()
{
	cout<<"Car: destructeur"<<endl;
	/*if(!name.empty())
	{
		delete name; //suppression de 'name' car tableau de caractère []
	}*/
}


//*****************Setters

void Car::setName(const string& n)
{
	name =n;
}

void Car::setModel(Model m)
{
	model=m;
}



/*********************************getters***********************************/


string Car::getName() const
{
	return name;
}

Model Car::getModel()const
{
	return model;
}

/*******************************Méthode d'instance***************************/


void Car::display()const
{
	cout<<"Car: ";
	if(!name.empty())
	{
		cout<<name;
	}
	else
	{
		cout<<"pas de nom";
	}
}