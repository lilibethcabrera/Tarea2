#include <stdio.h>


float a,b,c,x,r=0,z;
float raiz1,raiz2,sum,total2,tt;
float raiz,division,raizdentro,resultado;

int main()
{
printf("ax^2+bc+c = 0\n");
printf("Digite el primer numero:\n");
scanf("%f",&a);
printf("Digite el segundo numero:\n");
scanf("%f",&b);
printf("Digite el tercer numero:\n");
scanf("%f",&c);

raiz1= b*b;
raiz2 = 4*a*c;
raizdentro = raiz1 - raiz2;


printf("FORMULA GENERAL:(b^2-4ab) = (%f)\n",raizdentro);


while (r*r <= raizdentro) {
   resultado=r*r;
   r++;

}   if(resultado==raizdentro)

{
printf("El resultado de la raiz %f es : %f \n",raizdentro,r-1);
}

else {
printf("El numero %f no tiene raiz \n",raizdentro);
}

printf("Utilizando (-b +- raiz)/2\n");
raiz=r-1;
division = -b - raiz;
z=2*a;
tt=division/z;
printf("El valor de X es: x = %f\n",tt);

sum = -b + raiz;
total2=sum/z;

printf("El valor de X de la ecuacion cuadratica es: x = %f\n\n",total2);
return 0;
}
