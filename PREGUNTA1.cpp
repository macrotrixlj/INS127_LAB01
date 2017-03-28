#include <stdio.h>
#include <cstdlib>


int main(void)
{
    char var_nombre[15];
    printf ("SU NOMBRE Y APELLIDO ES:  ");
	scanf ("%[^\n]s", &var_nombre); //("%[^\n]s",&nombre);
	printf ("BUENOS DIAS:  %s\n", var_nombre);
	
    system("pause");
	
}
    

