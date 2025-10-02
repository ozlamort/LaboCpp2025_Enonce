/*****************Model.cpp**************/

#include "Model.h"


//**********************CONSTRUCTEUR


Model::Model()
{
  cout<< ">> Model: constructeur par defaut <<<"<< endl;
  name=NULL;
  setName("nom");
  setPower(0);
  setEngine(Engine::Petrol);
  setBasePrice(0.0);
  /*power=0;
  engine=Engine::Petrol;
  basePrice=0.0;*/
};


Model::Model(const char*n,int p,Engine e,float bp)
{
  cout<<">>> Model: constructeur d'initialisation <<<"<<endl;
  name=NULL;  // mettre pointeur à null pour ne pas supprimer un element en mémoire
  setName(n);
  setPower(p);
  setEngine(e);
  setBasePrice(bp);
}


Model::Model(const Model &m)
{
  cout<<">>> Model: constructeur de copie <<<"<<endl;
  name=NULL;
  setName(m.getName());
  setPower(m.getPower());
  setEngine(m.getEngine());
  setBasePrice(m.getBasePrice());
}

//*********************DESTRUCTEUR

Model::~Model()
{
  cout<< ">> Model: Destructeur <<<"<< endl;
  if(name)
  {
    delete[] name;  //suppression de 'name' car tableau de caractère []
  }
};


//*************************Setters



void Model::setName(const char*n)
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
  name=new char [strlen(n)+1];  // +1 pour le \0
  strcpy(name,n);
}


void Model::setPower(int p)
{
  if(p<0)
  {
    return;
  }
  power=p;
}


void Model::setEngine(Engine e)
{
  engine=e;
}


void Model::setBasePrice(float bp)
{
  if(bp<0.0)
  {
    return;
  }
  basePrice=bp;
}





//*************************GETTERS


const char* Model::getName() const
{
  return name;
}


int Model::getPower() const
{
  return power;
}


Engine Model::getEngine() const
{
  return engine;
}


float Model::getBasePrice() const
{
  return basePrice;
}






//************************Méthode D'instance

void Model::display() const
{
  cout<<"Model: ";

  if(name)
  {
    cout<<name;
  }
  else
  {
    cout<<"Pas de nom";
  }

  cout<<name<<"("<<power<<"ch,";
  switch(engine)
  {
    case Engine::Petrol:cout<<"Essence,";
      break;
    case Engine::Diesel:cout<<"Diesel,";
      break;
    case Engine::Electric:cout<<"Electrique,";
      break;
    case Engine::Hybrid:cout<<"Hybride,";
  }
  cout<<basePrice<<"euro)"<<endl;
};