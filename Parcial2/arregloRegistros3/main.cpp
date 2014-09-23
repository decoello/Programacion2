#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Ingresar 5 alumnos a un registro con los siguientes datos nombre, p1, p2, promedio.

usando un procedimiento ingresar el nombre y las notas. Usar una funcion para calcular el promedio
de un alumno. Usar un procedimiento para calcular los promedios de los todos los alumnos.
 Usar una funcion para devolver el mejor alumno de todo el arreglo.
 Elaborar un procedimiento para presentar el alumno.
Elaborar un procedimiento para presentar un alumno.
Elaborar un procedimiento para preentar todos los empleados.
*/
struct alumno
{
    char nombre[30];
    double p1,p2,promedio;
};
int const n=5;
alumno alum[n];
alumno maxalumno;

void ingreso(alumno alum[], int n)
{int i;
for(i=0;i<n;i++)
{
    cout<<"Ingresar el nombre del alumno...:";
    cin.getline(alum[i].nombre,30);


    cout<<"Ingresar la nota del parcial 1..:";
    cin>>alum[i].p1;
    cout<<"Ingresar la nota del parcial 2..:";
    cin>>alum[i].p2;
     _flushall();
}

}
void calcular(alumno alum[],int n)
{
     for(int i=0;i<5;i++)
    {
        alum[i].promedio=((alum[i].p1+alum[i].p2)/2);
    }
}
alumno alumnoMayor(alumno alum[],int n)
{   alumno maxi=alum[0];
    for(int i=0;i<5;i++)
    {
        if(alum[i].promedio>maxi.promedio)
        {
            maxi=alum[i];
        }
    }

    return maxi;
}
void presentar(alumno alum[],int n)
{
    for(int i=0;i<n;i++)
    {   cout<<"Nombre "<<alum[i].nombre <<"\n";
        cout<<"Promedio "<<alum[i].promedio <<"\n";



    }
}




int main()
{
 ingreso(alum,n);
 calcular(alum,n);
 presentar(alum,n);
 maxalumno=alumnoMayor(alum,n);
   cout<<"---------Mayor-----------"<<"\n";
    cout<<"Alumno con mejor promedio es ";
    cout<<maxalumno.nombre<<" Con el promedio ";
    cout<<maxalumno.promedio<<"\n";


}
