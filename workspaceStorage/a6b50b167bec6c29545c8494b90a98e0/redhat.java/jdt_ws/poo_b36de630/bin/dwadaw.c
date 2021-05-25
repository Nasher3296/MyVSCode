#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float alumnos [10], proms [10], aux, max, maxAlumno;
    int i;

    for (i=0; i<10; i++)
    {
        printf("ingrese el número de alumno");
        scanf("%f",& alumnos [i]);

        printf("ingrese el promedio del alumno");
        scanf("%f",& proms [i]);
    }

    for (i=0; i<10; i++)
    {
        if(i==0)
        {
            max = proms[i];
            maxAlumno = alumnos[i];
        }
        else if(proms[i]>max)
        {
            max = proms[i];
            maxAlumno = alumnos[i];
        }
    }

    printf("el alumno con el mayor promedio es %f", maxAlumno);
}
