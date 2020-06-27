#include <iostream>
using namespace std;

double media(double suma){/*Función para calcular el promedio de estaturas*/
    double promedio;
    promedio=suma/25;
    
    return promedio;
}
double posicion(double a[], double prom){ /*Función para clasificar las estaturas
según su posición respecto a la media*/
    int contmenor = 0, contmayor = 0;
    for (int i = 0; i < 25; i++)
    {
        if(a[i]<prom){
            contmenor++;
        }
        else{
            contmayor++;
        }
    }
    cout<<"La cantidad de estaturas bajo la media es "<<contmenor<<endl;
    cout<<"La cantidad de estaturas bajo la media es "<<contmayor<<endl;
    
}
int main(){
    double suma=0, prom;
    double a[25];
    for (int i = 0; i < 25; i++)
    {
        cout<<"Ingrese las estaturas de cada uno de los estudiantes"<<endl;
        cin>>a[i];
        suma=suma+a[i];
    }
    prom=media(suma);/*Se iguala el resultado de la función a otra variable, 
    para utilizar el dato en la función de la clasificación de estaturas*/
    cout<<"El promedio de las estaturas es "<< prom<<endl;
    posicion(a, prom);/*Se llama a la función de la clasificación de estaturas*/
    return 0;
}

