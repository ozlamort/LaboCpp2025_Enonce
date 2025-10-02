/**************Option.cpp************/


#include <Option.h>


Option::Opition()
{
	cout<< ">> Model: constructeur par defaut <<<"<< endl;
	code=NULL;
	setCode("code");
	setLabel("Peinture métalisée");
	setPrice(500.0);
};

Option::Opition(const char*c,const char*l,float p)
{
	cout<<">>> Model: constructeur d'initialisation <<<"<<endl;
	code=NULL;  //mettre pointeur à null pour ne pas supprimer un element en mémoire
	setCode(c);
	setLabel(l);
	setPrice(p);
}

Option::Opition(const Code &c)
{
	cout<<">>> Model: constructeur de copie <<<"<<endl;
	code=NULL;
	setCode(c.getCode());
	setLabel(l.getLabel());
	setPrice(p.getPrice());
}

//**********************DESTRUCTEUR

Option::Opition()
{
	cout<< ">> Option: Destructeur <<<"<< endl;
	if(code)
	{
		delete[]code;  //suppression de 'code' car tableau de caractère []
	}
};


//****************************SETTERS

void Option::setCode(const char*c)
{
	if(c==NULL)
	{
		return;
	}
	if(code==c)
	{
		return;
	}
	if(code)
	{
		delete[]code;  //crochet car pointeur de char
	}
	code=new char[strlen(c)+1];  //+1 pour le \0
	strcpy(code,c);
}
