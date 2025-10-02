/**************Model.h**************/

#ifndef MODEL_H
#define MODEL_H


#include <cstring>
using namespace std;  // permet d'utiliser cout directement et non stdcout
#include <iostream>

enum Engine 
{
  Petrol, 
  Diesel, 
  Electric, 
  Hybrid
};

class Model
{
  private:
   char*name;
   int power;
   Engine engine;
   float basePrice;

  public:  // en dehors de la classe, ça doit être déclaré en public
    Model();  // Constructeur
    Model(const char*,int p,Engine e,float bp);
    Model(const Model &n);
    ~Model();   // Destructeur

    void setName(const char*n);
    void setPower(int p);
    void setEngine(Engine e);
    void setBasePrice(float bp);

    const char* getName() const;
    int getPower() const;
    Engine getEngine() const;
    float getBasePrice() const;

    void display() const;

};

#endif