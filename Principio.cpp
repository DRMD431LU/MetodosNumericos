#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void Inicio();
void Tema();
void Sen();
void Ssen();
void Vvp();
void Bis();
void Fa_Po();
void Newt();
void Sec();
int Gaus();
int Ga_Jo();
void Jac();
void Ga_Se();
int Doo();
int Cro();
int Pot();
main()
{Inicio(); 
}
void Inicio()
{printf("\t\tUniversidad Nacional Autonoma de Mexico\n\t\tFacultad de Estudios Superiores Acatlan\n\n");
 printf("\t\tCarrera: Matematicas Aplicadas Y Computacion\n\n\t\t\t  Metodos numericos I\n\n");
 printf("\t\tNombre del Proyecto: Programas calif.\n\nIntegrantes del proyecto:\t");
 printf("Martinez Esquivel Sergio Emilio\n\t\t\t\tPerez Villegas Rolando Alessander\n\t\t\t\tHernandez Chamorro Luis Arturo\n\t\t\t\tShantal Vega");
 printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\tFecha de entrega: 22 de Noviembre del 2016\n\n");
 system("pause");
 system("cls");
 printf("Buenas tardes usuario a continuacion se te presentara una breve introduccion\nacerca de lo que son los Metodos Numericos\n");
 printf("Introduccion...\n\n");
 system("pause");
 Tema();
}
void Tema()
{int x;
 system("cls");
 printf("A continuacion se te presentaran los temas a elejir para, posteriormente,\naplicar los metodos deseados:\n");
 printf("1.-Solucion numerica de ecuaciones lineales de una sola variable\n2.-Solucion de sistemas de ecuaciones lineales\n3.Valores y vectores propios\n4.-Salir");
 printf("\nIntroduce el numero en el cual deseas entrar: ");
 scanf("%d",&x);
 if(x>4 || x<=0)
 {do
  {printf("Error.\nNumero invalido introducelo de nuevo: ");
   scanf("%d",&x);
  }while(x>4 || x<=0);
 }
 system("cls");
 switch(x)
 {case 1:  Sen();
  break;
  case 2:  Ssen();
  break;
  case 3:  Vvp();
  break;
  default: 
  system("cls");
  printf("Despedida");
  exit(-1);
 }
}
void Sen()
{int x;
 printf("Introduccion de Solucion numerica de ecuaciones lineales de una sola variable\n");
 system("pause");
 for(;;)
 {system("cls");
  printf("Metodos: 1.-Biseccion\n\t 2.-Falsa posicion\n\t 3.-Newton\n\t 4.-Secante\n\t 5.-Regresar a la pantalla anterior\n");
  scanf("%d",&x);
  if(x>5 || x<=0)
  {do
   {printf("Error.\nNumero invalido introducelo de nuevo: ");
    scanf("%d",&x);
   }while(x>5 || x<=0);
  }system("cls");
  if(x!=5)printf("Ahora se presentara una introduccion del metodo de ");
  switch(x)
  {case 1: printf("Biseccion\n");
    system("pause");
    system("cls");
    printf("Proceso\n");
    Bis();
    system("pause");
   break;
   case 2: printf("Falsa posicion\n");
    system("pause");
	system("cls");
    printf("Proceso\n");
    Fa_Po();
    system("pause");
   break;
   case 3: printf("Newton\n");
    system("pause");
    system("cls");
    printf("Proceso\n");
    Newt();
    system("pause");
   break;
   case 4: printf("Secante\n");
    system("pause");
    system("cls");
    printf("Proceso\n");
    Sec();
    system("pause");
   break;
   default: Tema();
  }
 }
}
void Ssen()
{int x;
 printf("Introduccion de Solucion de sistemas de ecuaciones lineales\n");
 printf("   *** SOLUCION DE SISTEMAS DE ECUACIONES LINEALES ***  \n\n");
 printf(" Un sistema de ecuaciones lineales es un conjunto  de ecuaciones de la forma: \n\n"
          "  a11x1 + a12x2 + a13x3 +. . . + a1nxn = b1\n"
          "  a21x1 + a22x2 + a23x3 +. . . + a2nxn = b2\n"
          "  a31x1 + a32x2 + a33x3 +. . . + a3nxn = b3\n"
          "    .       .      .               .      .\n"
          "    .       .      .               .      .\n"
          "    .       .      .               .      .\n"
          "  an1x1 + an2x2 + an3x3 +. . . + annxn = bn\n\n"
          "  O bien, en forma matricial\n\n"
          "  |a11 a12 a13 . . . a1n|    |x1|     | b1 |\n"
          "  |a21 a22 a23 . . . a2n|    |x2|     | b2 |\n"
          "  |a31 a32 a33 . . . a3n|    |x3|     | b3 |\n"
          "  | .   .   .         . |    | .|  =  | .  |\n"
          "  | .   .   .         . |    | .|     | .  |\n"
          "  | .   .   .         . |    | .|     | .  |\n"
          "  |an1 an2 an3 . . . ann|    |xn|     | bn |\n\n"
          "  Que a su vez se pueden expresar como: \n\n"
          "                Ax=b                    \n\n"
          " Donde A es la matriz de coeficientes, x el vector de incognitas y b el vector \nde terminos "
          "independientes. La matriz (A, b) de orden n x (n+1) se conoce como\n matriz ampliada del "
          "sistema.\n\n"
          " La solucion del sistema de ecuaciones es un conjunto de n valores\n x1, x2, x3, . . . xn que "
          "satisfacen simultaneamente todas las ecuaciones.\n");
 system("pause");
 for(;;)
 {system("cls");
  printf("Metodos: 1.-Gauss\n\t 2.-Gauss-Jordan\n\t 3.-Jacobi\n\t 4.-Gauss-Seidel\n\t 5.-Doolottle\n\t 6.-Crout\n\t 7.-Regresar a la pantalla anterior\n");
  scanf("%d",&x);
  if(x>7 || x<=0)
  {do
   {printf("Error.\nNumero invalido introducelo de nuevo: ");
    scanf("%d",&x);
   }while(x>7 || x<=0);
  }system("cls");
  if(x!=7)printf("Ahora se presentara una introduccion del metodo de ");
  switch(x)
  {case 1: printf("Gauss\n");
    printf("  *** METODO GAUSS ***  \n\n");
	printf(" El metodo de Gauss es una generalizacion del metodo de reduccion, que \nutilizamos para "
          "eliminar incognitas en los sistemas de ecuaciones.\n\n"
          " Consiste en la aplicacion sucesiva del metodo de reduccion, utilizando los \ncriterios de "
          "equivalencia de sistemas, para transformar la matriz ampliada con \nlos terminos independientes"
          " ( A* ) en una matriz triangular, de modo que cada \nfila (ecuacion) tenga una incognita menos"
          "que la anterior.\n\n"
          " Se obtiene asi un sistema, que llamaremos escalonado.\n\n\n"
          "  |a1  b1  c1 | d1|            |a1  b1  c1  | d1| \n"
          "  |a2  b2  c2 | d2|     =>     |0   b2  c2  | d2| \n"
          "  |a3  b3  c3 | d3|            |0    0  c3  | d3|  \n\n\n");  
	system("pause");
    system("cls");
    printf("Proceso\n");
    Gaus();
    system("pause");
   break;
   case 2: printf("Gauss-Jordan\n");
    printf("  *** METODO GAUSS-JORDAN ***  \n\n");
    printf(" El metodo  de Gauss-Jordan es una variacion de la eliminacion de Gauss. La \nprincipal "
          "diferencia consiste en que cuando una incognita se elimina en el\nmetodo de Gauss-Jordan,"
          "esta es eliminada de todas las demas ecuaciones, no solo de las\nsubsecuentes.\n"
          " Ademas, todos los renglones se normalizan al dividirlos entre su elemento \npivote.\n"
          " De esta forma,el paso de eliminacion genera matriz identidad en vez de una \ntriangular.\n\n"
          "  |a1  b1  c1 | d1|            |1   0   0  | d1| \n"
          "  |a2  b2  c2 | d2|     =>     |0   1   0  | d2| \n"
          "  |a3  b3  c3 | d3|            |0   0   1  | d3|  \n\n\n\n\n");
    system("pause");
    system("cls");
    printf("Proceso\n");
    Ga_Jo();
    system("pause");
   break;
   case 3: printf("Jacobi\n");
    system("pause");
    system("cls");
    printf("Proceso\n");
    Jac();
    system("pause");
   break;
   case 4: printf("Gauss-Seidel\n");
    system("pause");
    system("cls");
    printf("Proceso\n");
    Ga_Se();
    system("pause");
   break;
   case 5: printf("Doolittle\n");
    printf("    *** METODO DOOLITTLE ***  \n\n");
    printf(" Se conoce por factorizacion LU de matrices al proceso que a partir de una \nmatriz cuadrada "
          "halla dos matrices triangulares inferior y superior, tal que \n(A = L U),donde (L) es la "
          "matriz triangular inferior y (U) es la matriz \ntriangular superior.\n"
          " El metodo de Doolittle consiste en descomponer la matriz A en el producto de L\n matriz"
          "triangular inferior y U matriz triangular superior y L tiene 1's a lo\nlargo de su diagonal.\n\n "
          "\tA=LU\n\n"
          " |a11  a12  a13  a14|     | 1      0      0     0| |U11    U12    U13    U14| \n"
          " |a21  a22  a23  a24|  =  |L21     1      0     0| | 0     U22    U23    U24| \n"
          " |a31  a32  a33  a34|     |L31    L32     1     0| | 0      0     U33    U34| \n"
          " |a41  a42  a43  a44|     |L41    L42    L43    1| | 0      0      0     U44| \n\n\n\n\n");
    system("pause");
    system("cls");
    printf("Proceso\n");
    Doo();
    system("pause");
   break;
   case 6: printf("Crout\n");
    printf("   *** METODO DE CROUT ***  \n\n");
    printf(" El objetivo del metodo es encontrar una solucion a un sistema de ecuaciones\n lineales, "
          "basado en la factorizacion LU de la matriz de coeficientes\nrelacionada al sistema.\n\n"
          " El metodo de Crout consiste en descomponer la matriz A en el producto de L\n matriz "
          "triangular inferior y U matriz triangular superior y U tiene 1's a lo \nlargo de su diagonal.\n\n"
          " |a11  a12  a13  a14|     |L11     0      0      0 | | 1    U12   U13   U14| \n"
          " |a21  a22  a23  a24|  =  |L21    L22     0      0 | | 0     1    U23   U24| \n"
          " |a31  a32  a33  a34|     |L31    L32    L33     0 | | 0     0     1    U34| \n"
          " |a41  a42  a43  a44|     |L41    L42    L43    L44| | 0     0     0     1 |\n\n\n\n\n");
    system("pause");
    system("cls");
    printf("Proceso\n");
    Cro();
    system("pause");
   break;
   default: Tema();
  }
 }
}
void Vvp()
{int x;
 printf("Introduccion de Valores y vectores propios\n");
 printf("  *** VALORES Y VECTORES PROPIOS ***  \n\n");
    printf(" Estos metodos son utilizados comunmente cuando se desea conocer el valor \ncaracteristico "
          "de mayor o menor valor absoluto de una matriz.\n\n"
          " Una ventaja que presentan estos metodoses que proporcionan simultaneamente el \ncorrespondiente"
          "vector caracteristico asociado.\n\n\n\n\n\n\n");
 system("pause");
 for(;;)
 {system("cls");
  printf("Metodos: 1-Metodo de potencias\n\t 2.-Regresar a la pantalla anterior\n");
  scanf("%d",&x);
  if(x>2 || x<=0)
  {do
   {printf("Error.\nNumero invalido introducelo de nuevo: ");
    scanf("%d",&x);
   }while(x>2 || x<=0);
  }system("cls");
  if(x==1)
  {printf("Introduccion metodo de las potencias:\n");
   printf("   *** METODO DE LA POTENCIA ***  \n\n");
   printf(" El metodo de las potencias es un metodo iterativo que calcula sucesivas \naproximaciones "
          "a los vectores y valores propios de una matriz.\n\n"
          " Dada una matriz /A matriz de dimension n x n, el objetivo es calcular el valor\n propio "
          "dominante y un vector propio asociado.\n\n\n\n\n\n\n");
   system("pause");
   system("cls");
   printf("Proceso\n");
   Pot();
   system("pause");
  } else Tema();
 }
}
void Bis()
{double a,b,c,fa,fb,fc;
 printf("Metodo de la Biseccion\tLa expresion a evaluar es: xe(x)-2\n");
 printf("Introduce el parametro 1: ");
 scanf("%lf",&a);
 printf("Introduce el parametro 2: ");
 scanf("%lf",&b);
 fa=a*sin(a)-2;
 fb=b*sin(b)-2;
 if(fa*fb<=0)
 {printf("A continuacion se mostrara la tabla de valores:\n");
  system("pause"); putchar('\n');
  printf(" n\tA\t      B\t\t  C  \t   F(A) \tF(B)\t   F(C)\n\n");
  for(int i=0; i<18; i++)
  {c=(a+b)/2;
   fc=c*sin(c)-2;
   printf("%2d %11.8lf %12.8lf %11.8lf %11.8lf %11.8lf %11.8lf",i,a,b,c,fa,fb,fc);
   if(fa*fc>0)	a=c;
   else  b=c;
   fa=a*sin(a)-2;
   fb=b*sin(b)-2;
   putchar('\n');
  }
 } else printf("Este metodo no puede aplicarse.\n");
}
void Fa_Po()
{double a,b,c,fa,fb,fc;
 printf("Metodo de la Falsa posicion\tLa expresion a evaluar es: xe(x)-2\n");
 printf("Introduce el parametro 1: ");
 scanf("%lf",&a);
 printf("Introduce el parametro 2: ");
 scanf("%lf",&b);
 fa=a*sin(a)-2;
 fb=b*sin(b)-2;
 if(fa*fb<=0)
 {printf("A continuacion se mostrara la tabla de valores:\n");
  system("pause");
  putchar('\n');
  printf(" n\tA\t      B\t\t  C  \t   F(A) \tF(B)\t   F(C)\n\n");
  for(int i=0; i<18; i++)
  {c=a-(fa*(b-a))/(fb-fa);
   fc=c*sin(c)-2;
   printf("%2d %11.8lf %12.8lf %11.8lf %11.8lf %11.8lf %11.8lf",i,a,b,c,fa,fb,fc);
   if(fa*fc>0) a=c;
   else b=c;
   fa=a*sin(a)-2;
   fb=b*sin(b)-2;
   putchar('\n');
  }
 } else  printf("Este metodo no puede aplicarse.\n");
}
void Newt()
{double xn,fxn,fxn2;
 printf("Metodo de Newton\tLa expresion a evaluar es: xe^x-2.\n");
 printf("Ingresa el valor: ");
 scanf("%lf", &xn);
 fxn=xn*exp(xn)-2;
 fxn2=(xn+1)*exp(xn);
 printf("A continuacion se mostrara la tabla de valores:\n");
 system("pause");
 putchar('\n');
 printf("    n\t  X(n)\t    F(xn)    F'(xn)\n\n"); 
 for(int i=0; i<18; i++)
 {printf("%5.1d%10.4lf%10.4lf%10.4lf", i, xn, fxn, fxn2);
  putchar('\n');
  xn=xn-(fxn/fxn2);
  fxn=xn*exp(xn)-2;
  fxn2=(xn+1)*exp(xn);
 }
}
void Sec()
{double xn, xn2, xn3, fxn, fxn2;
 printf("Metodo de la secante\tLa expresion a evaluar es: xe^x-2.\n");
 printf("Ingresa el valor 1 ");
 scanf("%lf",&xn2); 
 printf("Ingresa el valor 2 ");
 scanf("%lf",&xn);
 fxn=xn*exp(xn)-2;
 fxn2=(xn2)*exp(xn2)-2;
 printf("A continuacion se mostrara la tabla de valores:\n");
 system("pause");
 putchar('\n');
 printf("    n\t   X(n)\t    F(xn)       F(xn-1)\n\n");
 for(int i=0; i<18; i++)
 {printf("%5.1d%10.4lf%10.4lf%10.4lf", i, xn, fxn, fxn2);
  putchar('\n');
  xn3=xn-(fxn*(xn2-xn)/(fxn2-fxn));
  xn2=xn;	xn=xn3;
  fxn=xn*exp(xn)-2;
  fxn2=(xn2)*exp(xn2)-2;
 }
}
int Gaus()
{int n;
 printf(" ***SISTEMAS LINEALES RESUELTOS POR EL METODO GAUSS***\n\n");
 printf("Ingresar el orden de la matriz:\n");
 scanf("%d",&n);
 float mat[n][n],vect[n], aux, piv;
 printf("\n");
 printf("Ingresar la matriz /A:\n");
 for(int i=0;i<n;++i)
 {for(int j=0;j<n;++j)
  {scanf("%f",&aux);
   mat[i][j]=aux;
  }
 }printf("Ingresar el vector de terminos independientes:\n");
 for(int i=0;i<n;++i)
 {scanf("%f",&aux);
  vect[i]=aux;
 } /*for (int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
            printf("%.2f ",mat[i][j]);
        printf("%.2f \n",vect[i]);
    }*/
    /*for(int i=0;i<n;++i)//intercambiar renglones
    {
        if(i>0 && mat[i][i]==0 && mat[i-1][i]!=0 && mat[i][i-1]!=0)
        {
            for(int j=0;j<n;++j)
            {
                aux=mat[i][j];
                mat[i][j]=mat[i-1][j];
                mat[i-1][j]=aux;
            }
            aux=vect[i];
            vect[i]=vect[i-1];
            vect[i-1]=aux;
        }
        else if(i<n-1 && mat[i][i]==0 && mat[i+1][i]!=0 && mat[i][i+1]!=0)
        {
            for(int j=0;j<n;++j)
            {
                aux=mat[i][j];
                mat[i][j]=mat[i+1][j];
                mat[i+1][j]=aux;
            }
            aux=vect[i];
            vect[i]=vect[i+1];
            vect[i+1]=aux;
        }
    }*/
 for(int k=0;k<n;++k)//Gauss
 {aux=1/mat[k][k];
  for(int i=k;i<n;++i)
  {if(i!=k)
   {piv=aux*mat[i][k];
    vect[i]-=piv*vect[k];
   }
   for(int j=k;j<n;++j)
   {if(i!=k)
    {mat[i][j]-=mat[k][j]*piv;
    }
   }
  }
  for(int i=k;i<n;++i)
  {mat[k][i]*=aux;
  }
  vect[k]*=aux;
 }
    /*for(int i=0;i<n;++i)//resultados
    {
        for(int j=0;j<n;++j)
        {
            printf("%.2f\t",mat[i][j]);
        }
        printf(" %.2f \n",vect[i]);
    }*/
 for(int i=n-1;i>=0;--i)//sustitución regresiva
 {for(int j=i-1;j>=0;--j)
  {aux=mat[j][i];
   mat[j][i]-=aux*mat[i][i];
   vect[j]-=aux*vect[i];
  }
 }printf("El vector resultante es:\n");
 for(int i=0;i<n;++i)//resultados
 {/*for(int j=0;j<n;++j)
        {
            printf("%.2f\t",mat[i][j]);
        }*/
  printf("%.2f\n",vect[i]);
 } return 0;
}
int Ga_Jo()
{int n;
 printf(" ***SISTEMAS LINEALES RESUELTOS POR EL METODO GAUSS-JORDAN***\n\n");
 printf("Ingresar el orden de la matriz:\n");
 scanf("%d",&n);
 float mat[n][n],vect[n], aux, piv;
 printf("\n");
 printf("Ingresar la matriz /A:\n");
 for(int i=0;i<n;++i)
 {for(int j=0;j<n;++j)
  {scanf("%f",&aux);
   mat[i][j]=aux;
  }
 }printf("Ingresar el vector de terminos independientes:\n");
 for(int i=0;i<n;++i)
 {scanf("%f",&aux);
  vect[i]=aux;
 }    /*for (int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
            printf("%.2f ",mat[i][j]);
        printf("%.2f \n",vect[i]);
    }*/
    /*for(int i=0;i<n;++i)//intercambiar renglones
    {
        if(i>0 && mat[i][i]==0 && mat[i-1][i]!=0 && mat[i][i-1]!=0)
        {
            for(int j=0;j<n;++j)
            {
                aux=mat[i][j];
                mat[i][j]=mat[i-1][j];
                mat[i-1][j]=aux;
            }
            aux=vect[i];
            vect[i]=vect[i-1];
            vect[i-1]=aux;
        }
        else if(i<n-1 && mat[i][i]==0 && mat[i+1][i]!=0 && mat[i][i+1]!=0)
        {
            for(int j=0;j<n;++j)
            {
                aux=mat[i][j];
                mat[i][j]=mat[i+1][j];
                mat[i+1][j]=aux;
            }
            aux=vect[i];
            vect[i]=vect[i+1];
            vect[i+1]=aux;
        }
    }*/
 for(int k=0;k<n;++k)//Gauss-Jordan
 {aux=1/mat[k][k];
  for(int i=0;i<n;++i)
  {if(i!=k)
   {piv=aux*mat[i][k];
    vect[i]-=piv*vect[k];
   }
   for(int j=k;j<n;++j)
   {if(i!=k)
    {mat[i][j]-=mat[k][j]*piv;
    }
   }
  }
  for(int i=k;i<n;++i)
  {mat[k][i]*=aux;
  }
  vect[k]*=aux;
 }  printf("El vector resultante es:\n");
 for(int i=0;i<n;++i)
 {printf("%.2f\n",vect[i]);
 } return 0;
}
void Jac()
{int n;
 printf("Metodo de Jaconi\nIngresa el numero de la matriz: "); 
 scanf("%d", &n);
 int A[n][n],B[n],m,i;
 double C[n], D[n];
 putchar('\n');
 for (int i=0; i<n; i++)
 {m=0;
  for (int j=0; j<n; j++)
  {printf("Ingresa el valor de la fila %d y columna %d: ", i+1, j+1);
   scanf("%d", *(A+i)+j);
   if(j==i)
   {printf("Ingresa el valor termino independiente para la fila %d: ", i+1);
	scanf("%d", B+i);
	}else m+=*(*(A+i)+j);
  }
  if(*(*(A+i)+i)<m)
  {printf("\n\nError. No es posible realizar este metodo. ");
   printf("\nLa matriz no es diagonal positiva para la fila %d: ", i+1);
   printf("\nIngresa una matriz diagonal positiva.\n\n");
   i=-1;
  }
 }
 for(int i=0;  i<n; i++)
 {printf("Ingresa Los valores de convergencia para X%d", i+1);
  scanf("%lf", C+i);
  *(D+i)=*(B+i);
 }printf("\n\nEl resultado es: \n\n");
 for (int i=1; i<20; i++)
 {printf("\t%d", i);
  for (int j=0; j<n; j++)
  {for (int k=0; k<n; k++)
   {if(k!=j) *(D+j)-=((*(*(A+j)+k))*(*(C+k)));
   } *(D+j)/=*(*(A+j)+j);
   printf("\t%lf", *(D+j));
  }
  for(int t=0;  t<n; t++)
  {*(C+t)=*(D+t);
   *(D+t)=*(B+t);
  }putchar('\n');
 }
}
void Ga_Se()
{printf("Metodo de Gauss-Seidel\nIngresa el numero de la matriz: ");
 int n;
 scanf("%d", &n);
 int  A[n][n], B[n], m;
 double C[n], D[n];
 putchar('\n');
 for (int i=0; i<n; i++)
 {m=0;
  for (int j=0; j<n; j++)
  {printf("Ingresa el valor de la fila %d y columna %d: ", i+1, j+1);
   scanf("%d", *(A+i)+j);
   if(j==i)
   {printf("Ingresa el valor termino independiente para la fila %d: ", i+1);
	scanf("%d", B+i);
   }
   else  m+=*(*(A+i)+j);
  }
  if(*(*(A+i)+i)<m)
  {printf("\n\nError. No es posible realizar este metodo. ");
   printf("\nLa matriz no es diagonal positiva para la fila %d: ", i+1);
   printf("\nIngresa una matriz diagonal positiva.\n\n");
   i=-1;
  }
 }
 for(int i=0;  i<n; i++)
 {printf("Ingresa Los valores de convergencia para X%d: ", i+1);
  scanf("%lf", C+i);
  *(D+i)=*(B+i);
 } printf("\n\nEl resultado es: \n\n");
 for (int i=1; i<20; i++)
 {printf("\t%d", i);
  for (int j=0; j<n; j++)
  {for (int k=0; k<n; k++)
   { if(k!=j) *(D+j)-=((*(*(A+j)+k))*(*(C+k)));
   }
   *(D+j)/=*(*(A+j)+j);
   *(C+j)=*(D+j);
   printf("\t%lf", *(D+j));
  }
  for(int t=0;  t<n; t++)
  {*(C+t)=*(D+t);
   *(D+t)=*(B+t);
  }	putchar('\n');
 }
}
int Doo()
{int n;
 printf(" ***SISTEMAS RESUELTOS POR EL METODO DOOLITTLE***\n\n");
 printf("Ingresar el orden de la matriz:\n");
 scanf("%d",&n);
 float mat[n][n],l[n][n], u[n][n], aux;
 printf("Ingresar la matriz /A:\n");
 for(int i=0;i<n;i++)//lectura de matriz e inicialización de L y U
 {for(int j=0;j<n;j++)
  {scanf("%f",&mat[i][j]);
   l[i][j]=0;
   u[i][j]=0;
  }
 }
 for(int k=0;k<n;k++)//Doolittle
 {l[k][k]=1;
  aux=0;
  for(int s=0;s<k;s++)
  {aux+=l[k][s]*u[s][k];
  }u[k][k]=mat[k][k]-aux;
  for(int j=k+1;j<n;j++)
  {aux=0;
   for(int s=0;s<k;s++)
   {aux+=l[k][s]*u[s][j];
   }u[k][j]=(mat[k][j]-aux)/l[k][k];
  }
  for(int i=k+1;i<n;i++)
  {aux=0;
   for(int s=0;s<k;s++)
   {aux+=l[i][s]*u[s][k];
   }
   l[i][k]=(mat[i][k]-aux)/u[k][k];
  }
 }printf("\nL=\n");
 for(int k=0;k<n;k++)//impresion de matriz L
 {for(int j=0;j<n;j++)
  {printf("%.3f\t",l[k][j]);
  } printf("\n");
 } printf("\nU=\n");
 for(int k=0;k<n;k++)//impresión de matriz U
 {for(int j=0;j<n;j++)
  {printf("%.3f\t",u[k][j]);
  }printf("\n");
 }return 0;
}
int Cro()
{int n;
 printf(" ***SISTEMAS RESUELTOS POR EL METODO DE CROUT***\n\n");
 printf("Ingresar el orden de la matriz:\n");
 scanf("%d",&n);
 float mat[n][n],l[n][n], u[n][n], aux;
 printf("\nIngresar la matriz /A:\n");
 for(int i=0;i<n;i++)//lectura de matriz e inicialización de L y U
 {for(int j=0;j<n;j++)
  {scanf("%f",&mat[i][j]);
   l[i][j]=0;
   u[i][j]=0;
  }
 }
 for(int k=0;k<n;k++)//Crout
 {u[k][k]=1;
  aux=0;
  for(int s=0;s<k;s++)
  {aux+=l[k][s]*u[s][k];
  }
  l[k][k]=mat[k][k]-aux;
  for(int j=k+1;j<n;j++)
  {aux=0;
   for(int s=0;s<k;s++)
   {aux+=l[k][s]*u[s][j];
   }
   u[k][j]=(mat[k][j]-aux)/l[k][k];
  }
  for(int i=k+1;i<n;i++)
  {aux=0;
   for(int s=0;s<k;s++)
   {aux+=l[i][s]*u[s][k];
   }
   l[i][k]=(mat[i][k]-aux)/u[k][k];
  }
 }printf("\nL=\n");
 for(int k=0;k<n;k++)//impresion de matriz L
 {for(int j=0;j<n;j++)
  {printf("%.3f\t",l[k][j]);
  } printf("\n");
 } printf("");
 printf("\nU=\n");
 for(int k=0;k<n;k++)//impresión de matriz U
 {for(int j=0;j<n;j++)
  {printf("%.3f\t",u[k][j]);
  }printf("\n");
 }return 0;
}
int Pot()
{int n;
 printf(" ***SISTEMAS RESUELTOS POR EL METODO DE LA POTENCIA***\n\n");
 printf("Ingresar el orden de la matriz:\n");
 scanf("%d",&n);
 float mat[n][n],x[n],v[n],res,aux;
 printf("\n");
 printf("Ingresar la matriz /A:\n");
 for(int i=0;i<n;++i)
 {for(int j=0;j<n;++j)
  {scanf("%f",&aux);
   mat[i][j]=aux;
  } x[i]=1.0;
 }
 for(int k=0;k<20;++k)
 {if(k==0)
  {for(int i=0;i<n;++i)
   {aux=0;
    for(int j=0;j<n;++j)
    {aux+=mat[i][j]*x[j];
    } 
	v[i]=aux;
   }
   res=v[0];
   for(int i=1;i<n;++i)
   {if(res<v[i])  res=v[i];
   }
  }
  else
  {for (int i=0;i<n;++i)
   {x[i]=v[i]*(1/res);
   }
   for(int i=0;i<n;++i)
   {aux=0;
    for(int j=0;j<n;++j)
    {aux+=(mat[i][j]*x[j]);
    }
    v[i]=aux;
   }
   res=v[0];
   for(int i=1;i<n;++i)
   {if(res<v[i])  res=v[i];
   }
  }
 } printf("\nVector Propio\n");
 for(int i=0;i<n;++i) printf("%.2f\t",x[i]);
 printf("\n\nValor Propio\n");
 printf("%.2f \n",res);
return 0;
}
