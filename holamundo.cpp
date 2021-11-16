/*primer prograna con entrada y salida estandar en c++*/
/*ahora para compilar debo usar g++ y no gcc*/

#include <iostream>

using namespace std; //para no tener que usar la forma larga del cout y cin

int main(){ //ya no hace falta el void

   char nombre[] = "nombre";

   cout<< "\n Ingrese su nombre: ";
   cin>> nombre;

   cout<< "\n\n Bienvenido " << nombre <<endl;

return 0;
}
