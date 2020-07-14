#include "iostream"
#include "cmath"
#include "math.h"
#include "string"
#include "stdlib.h"
using namespace std;

string nombreArticulo[200];
int cantidad[200], artcomprados,i;
float precio[200];
float costoPorArticulo[200], costototal;

int Recoleccion()
{
cout << "Indique la cantidad de articulos distintos a comprar: ";
cin >> artcomprados;
cout << "A continuacion, indique: el nombre del articulo, la cantidad del mismo articulo comprado, y su precio." << endl << endl;
for (i=0; i < artcomprados; i++ )
{
cout << "Nombre del articulo: "; cin >> nombreArticulo[i];
cout << "Cantidad de articulos adquiridos: "; cin >> cantidad[i];
cout << "precio unitario del articulo: "; cin >> precio[i];
cout << endl;
}
return 0;
}

int Calculo()
{
for (i=0; i < artcomprados; i++)
{
costoPorArticulo[i] = precio[i]*cantidad[i];    
}
return 0;  
}

int factura()
{
for (i=0; i < artcomprados; i++)
{
cout << "Articulo " << i+1 << ":" << endl;
cout << "Nombre del articulo: " << nombreArticulo[i];
cout << endl << "Cantidad de articulos adquiridos: " << cantidad[i];
cout << endl << "precio unitario del articulo: "<< precio[i];   
cout << endl << "precio total del articulo: "<< costoPorArticulo[i];
cout << endl << endl; 
}
return 0;    
}

int Costo()
{
for (i=0; i < artcomprados ; i++)
{
costototal = costoPorArticulo[i] + costototal;
}
return 0;    
}

int main()
{
Recoleccion();
Calculo();
factura();
Costo();
cout << "El gasto total de su compra es de: " << costototal;    
}