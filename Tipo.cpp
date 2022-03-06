#include "Estudiante.cpp"
#include <iostream>
using namespace std;
class Tipo : Estudiante
{	private : int codigo; 
			string curso;
	public : Tipo(string nom, string ape, float n1, float n2, float n3, float n4, int cod, string cur): Estudiante(nom,ape,n1,n2,n3,n4)
	{codigo=cod; curso=cur;
	nota1=0;
	nota2=0;
	nota3=0;
	nota4=0;
	}
	
	
	void setNombre(string nom){nombre=nom;}
	string getNombre(){return nombre;}
	void setApellido(string ape){apellido =ape;}
	string getApellidos(){return apellido;}
	void setNota1(float n1){nota1=n1;}
	float getNota1(){return nota1;}
	void setNota2(float n2){nota2=n2;}
	float getNota2(){return nota2;}
	void setNota3(float n3){nota2=n3;}
	float getNota3(){return nota3;}
	void setNota4(float n4){nota4=n4;}
	float getNota4(){return nota4;}
	void setCodigo(int cod){codigo=cod;}
	int getCodigo(){codigo;}
	void setCurso(string cur){curso=cur;}
	string getCurso(){curso;}
	
	//calcule automáticamente el promedio; y 
	
	float promediof()
	{float promedio;
	promedio=(nota1+nota2+nota3+nota4)/4;
	return promediof;
	}
	//si la nota es superior a 60 que indique que el estudiante aprobó 
	strin apro();
	{string aprobar;
		 if(promediof()>60)	aprobar ="Aprobado";
  	else if(promediof()<60) aprobar = "Reprobado";
 	return apro;
	}
	
};
