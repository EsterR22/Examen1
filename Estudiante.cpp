//Crear un programa que le solicite al usuario ingresar N cantidad de estudiantes 
//(Código, nombres, apellidos, Curso ,nota1, nota2, nota3, nota4 ) y que 
//calcule automáticamente el promedio; y 
//si la nota es superior a 60 que indique que el estudiante aprobó 
//caso contrario que indique que reprobó. Aplicar los Paradigmas de la Progra°°mación Orientada a Objetos.
#include <iostream>

using namespace std;
class Estudiante
{		//atributos
		protected:
		string nombre,apellido;
		float nota1,nota2,nota3,nota4;
		
		protected: //constructor
		Estudiante(string nom,string ape,float n1,float n2,float n3,float n4)
		{nombre=nom;
		apellido=ape;
		nota1=n1;
		nota2=n2;
		nota3=n3;
		nota4=n4;	
		}
		
			void agregar();
			void mostrar();
		
};
