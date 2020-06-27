#include <iostream>
#include <string>
using namespace std;
int murcielago(string palabra[], int n){ /*Función que permita cambiar
    cada letra, por el carácter según el código murciélado*/
    for(int i=0; i<n; i++){
        if((palabra[i])=="m"){
            palabra[i]="0";
        }
         else if((palabra[i])=="u"){
            palabra[i]="1";
        }
        else if((palabra[i])=="r"){
            palabra[i]="2";
        }
        else if((palabra[i])=="c"){
            palabra[i]="3";
        }
        else if((palabra[i])=="i"){
            palabra[i]="4";
        }
        else if((palabra[i])=="e"){
            palabra[i]="5";
        }
        else if((palabra[i])=="l"){
            palabra[i]="6";
        }
        else if((palabra[i])=="a"){
            palabra[i]="7";
        }
        else if((palabra[i])=="g"){
            palabra[i]="8";
        }
        else if((palabra[i])=="o"){
            palabra[i]="9";
        }
    }
    for (int j = 0; j < n; j++)/*Mostrar la palabra, en una sola línea*/
    {
        cout<<palabra[j];
    }    
}
int main(){
    int n;
    cout<<"Ingrese la cantidad de letras que desee ingresar"<<endl;
    cin>>n;
    string palabra[n];
    
    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese la letra"<<endl;
        cin>>palabra[i];
    }
    
    murcielago(palabra, n);/*Llamar a la función*/
    return 0;
}