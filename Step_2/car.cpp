/********Car.cpp***********/


#include "car.h"

/**************constructeur******************/

Car::Car()
{
	cout<<"Car: constructeur pas defaut"<<endl;
	name=NULL;
	setName("nom");
};

Car::Car(const char*n)
{
	cout<<"Car: constructeur d'initialisation"<<endl;
	name=NULL;  //mettre pointeur à null pour ne pas supprimer un element en mémoire
	setName(n);
}

Car::Car(const Car &v)
{
	cout<<"Car: constructeur de copie"<<endl;
	name=NULL;
	setName(v.getName());
}

//**********************DESTRUCTEUR

Car::~Car()
{
	cout<<"Car: destructeur"<<endl;
	if(name)
	{
		delete[] name; //suppression de 'name' car tableau de caractère []
	}
};


//*****************Setters

void Car::setName(const char*n)
{
	if(n==NULL)
	{
		return;
	}
	if(name==n)
	{
		return;
	}
	if(name)
	{
		delete [] name; //crochet car pointeur de char
	}
	name=new char[strlen(n)+1]; // +1 pour le \0
	strcpy(name,n);
}

void Model::setModel(Model m)
{
	Model=m;
}



/*********************************getters***********************************/


const char* Car::getName() const
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
	cout::"Car: ";
	if(name)
	{
		cout<<name;
	}
	else
	{
		cout<<"pas de nom";
	}
};