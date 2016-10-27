#include <stdio.h>
#include <stdlib.h>
/*include "raicesConfiables.c"*/

struct raices
{
  float X1, X2;
  char mensajeResultado[50];
};


struct raices laViejaConfiable(float a,float b,float c)
{

	struct raices resultado;
        if (a!=0)
		 {
           if (((b*b)-(4*a*c))>=0)
		   {
	      resultado.X1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
	      resultado.X2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
          strcpy(resultado.mensajeResultado,"Chido" );

		   }
		   else
		     {
              strcpy (resultado.mensajeResultado,"Ingrese otros coeficientes plox");
		     }
		 }
		else
		  {
           strcpy (resultado.mensajeResultado,"a tiene que ser diferente de 0");
		  }
        return resultado;

}


int main()

{
	struct raices resultado;
	resultado=laViejaConfiable(1,1,4);
	if (strcmp(resultado.mensajeResultado,"Chido")==0)
	{
		printf("%f,%f",resultado.X1,resultado.X2);
	}
	else
	{
		printf("Ingrese otros coeficientes:%s",resultado.mensajeResultado);
	}

	return 0;
}

