   /*En este primer programa pido al usuario dos numeros enteros y 
     realizo la suma de ambos y muestro el resultado en pantalla*/


#include <iostream>

using namespace std;

int main(){

int entero1;
cout<< "Introduzca el primer numero\n";
cin>> entero1;

int entero2;
cout<< "Ingrese el segundo numemro\n";
cin>> entero2;

int suma = entero1 + entero2;
cout<< "La suma es: " << suma <<endl;

return 0;
}
