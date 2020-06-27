#include <iostream>
using namespace std;

int matriz(double nota[][5], int estudiantes){ /*Función que llena la matriz*/
    cout<<"A continuación digite las notas de cada estudiante"<<endl;
    for (int i = 0; i < estudiantes; i++)
    {
        cout<<"estudiante "<<i+1<<endl;
        for (int j = 0; j < 5; j++)
        {
            cout<<"Ingrese de estudiante "<<i+1<<" su nota "<<j+1<<endl;
            cin>>nota[i][j];
        }
    }
}
int notafinal(double nota[][5], int estudiantes){/*Función que calcula la nota final
y el estado del estudiante*/
    double ponderacion[estudiantes][6];
    double suma=0;
        for (int i = 0; i < estudiantes; i++) /*Se llena una nueva matriz,
        que es la de las ponderaciones del estudiante*/
    {
        for (int j = 0; j < 5; j++)
        {
            ponderacion[i][j]=(nota[i][j]*0.20);  
        } 
    }
    for (int i = 0; i < estudiantes; i++) /*Se realiza la suma por columnas de 
    la matriz (por eso la suma se inicializa, una vez se completa la columna)
    y se establece el estado del estudiante si aprobó o reprobó)*/
    {
        suma=0;
        cout<<"Estudiante "<<i+1<<endl;
        for (int j = 0; j < 5; j++)
        {
        suma=suma+ponderacion[i][j];
                    }
    cout<<"Su nota final es "<<suma<<endl;          
    if(suma>=6){
        cout<<"Aprobado."<<endl;
    }
    else{
        cout<<"Reprobado."<<endl;
    }
    }
}
int main(){
    int estudiantes;
    cout<<"Ingrese la cantidad de estudiantes que están en el centro"<<endl;
    cin>>estudiantes;
    double nota[estudiantes][5];
    matriz(nota, estudiantes);/*Se llama a la función que llena la matriz*/
    notafinal(nota, estudiantes);/*Se llama a la función que crea las ponderaciones,
    calcula la nota final y establece el estado del estudiante*/
    return 0;
}