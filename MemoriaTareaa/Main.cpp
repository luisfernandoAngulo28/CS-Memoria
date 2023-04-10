#include <iostream>
#include "CSMemoria.h"


int main(int argc, char** argv) {

  CSMemoria *MiMemoria=new CSMemoria();
  MiMemoria->mostrar_memoria();
  int x= MiMemoria->new_espacio ("juan,Perez");
  cout << "\nLa x es: "<<x<<endl;

   int y= MiMemoria->new_espacio ("40253");
	cout << "\nLa y es: "<<y<<endl;
   int z= MiMemoria->new_espacio ("INF220,SA");
   //(y,"->40253",100)
   MiMemoria->poner_dato(y,"->40253",100);
   MiMemoria->delete_espacio(y);

  MiMemoria->mostrar_memoria();
  //--------------------------------------
 system("PAUSE");
 return 0;
}

