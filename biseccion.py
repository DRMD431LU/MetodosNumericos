#************************************************
'''
Esta parte es lo que venia en el programa en C++

'''
#********************************************************
# void Bis() {
#     double a, b, c, fa, fb, fc;
#     printf("Metodo de la Biseccion\tLa expresion a evaluar es: xe(x)-2\n");
#     printf("Introduce el parametro 1: ");
#     scanf("%lf", &a);
#     printf("Introduce el parametro 2: ");
#     scanf("%lf", &b);
#     fa = a * sin(a) - 2;
#     fb = b * sin(b) - 2;
#     if (fa * fb <= 0) {
#         printf("A continuacion se mostrara la tabla de valores:\n");
#         system("pause");
#         putchar('\n');
#         printf(" n\tA\t      B\t\t  C  \t   F(A) \tF(B)\t   F(C)\n\n");
#         for (int i = 0; i < 18; i++) {
#             c = (a + b) / 2;
#             fc = c * sin(c) - 2;
#             printf("%2d %11.8lf %12.8lf %11.8lf %11.8lf %11.8lf %11.8lf", i, a, b, c, fa, fb, fc);
#             if (fa * fc > 0) a = c;
#             else b = c;
#             fa = a * sin(a) - 2;
#             fb = b * sin(b) - 2;
#             putchar('\n');
#         }
#     } else printf("Este metodo no puede aplicarse.\n");
# }



#************************************************
'''
Así es como debería de quedar pasando el codigo de C++
a Python sin muchos cambios.
'''
#********************************************************
from math import * #hago la importacion de la libreria interna de math de python para usar la funcion seno
def Biseccion():
    a,b=0,0 #pueden utilizar el punto y coma al final de las expresiones es opcional.
    print("Metodo de la Biseccion\tLa expresion a evaluar es: xe(x)-2\n"); #aunque esta no es la funcion que evalua el metodo jajaja
     #Python tiene tanto print, como printf, aunque el printf se genera de otra manera
    print("Introduce el parametro 1: "); #el print funciona casi igual que el printf en C
    a=input(); #se asigna el valor que toma de input a "a" 
    #como input toma una cadena debemos hacer un cast a entero o flotante
    a=float(a)
    b=float(input("Introduce el parametro 2: ")) #podemos pedir el parametro con un mensaje y asignarlo en una sola sentencia junto al cast.
    fa =a * sin(a) - 2;
    fb =b * sin(b) - 2; 
    #algo andaba mal en esta expresion del if, siempre se iba al else.
    if(fa * fb > 0): #En lugar de llaves se usan bloques de identacion
        print("A continuacion se mostrara la tabla de valores:\n");
        print(" n\tA\t      B\t\t  C  \t   F(A) \tF(B)\t   F(C)\n\n");
        for i in range(19): #como lo que quieren hacer es 17 iteraciones
            c =(abs((a + b) / 2)); #calcula el punto medio, tiene que ser valor absoluto
            fc = (c * sin(c) - 2);
            print("%2d %11.8lf %12.8lf %11.8lf %11.8lf %11.8lf %11.8lf" % (i, a, b, c, fa, fb, fc));
            if (fa * fc > 0): a = c;
            else:
                b = c;
            fa = a * sin(a) - 2;
            fb = b * sin(b) - 2;
    else:
        print("Este metodo no puede aplicarse.\n");

#hacemos la llamada a la funcion para comprobar que funciona
Biseccion()

#************************************************
'''
Así es como debería de quedar para la parte grafica, 
de hecho recibe cualquier cadena valida como expresion matematica y la evalua
aunque no le hagan mucho caso todavia
'''
#********************************************************
# def biseccion(a,b,expr,count):
#     expr=expr
#     if(count<0):
#         return -1
#     c=(abs(b+a)/2)
#     fa=expr.subs({x:a})
#     fb=expr.subs({x:b})
#     fc=expr.subs({x:c})
#     print("n={} **** a={} **** b={}**** c={}****\nfa={}*** fb={} **** fc={} ****\n".format(count,a,b,c,fa,fb,fc))
#     if(fc>0):
#         a=c
#         biseccion(a,b,expr,count-1)
#     elif(fc<0):
#         b=c
#         biseccion(a,b,expr,count-1)
#     else:
#         messagebox.erroralert("Ocurrio un error en las evaluaciones")
#         #print("Ocurrio un error en las evaluaciones")
#         count=-1

#************************************************
'''
Un poco mas optimizado el codigo
'''
#********************************************************
# from math import * 
# def Biseccion():
#     a=float(input("Metodo de la Biseccion\tLa expresion a evaluar es: xe(x)-2\nIntroduce el parametro 1: "))    
#     b=float(input("Introduce el parametro 2: ")) 
#     fa =a * sin(a) - 2; fb =b * sin(b) - 2; 
#     if(fa * fb > 0):
#         print('''A continuacion se mostrara la tabla de valores:\n
#             n\tA\t      B\t\t  C  \t   F(A) \tF(B)\t   F(C)''');      
#         for i in range(19):
#             c =(abs((a + b) / 2))
#             fc = (c * sin(c) - 2)
#             print("%2d %11.4f %12.4f %11.4f %11.4f %11.4f %11.4f"% (i, a, b, c, fa, fb, fc))
#             if (fa * fc > 0): a = c
#             else:
#                 b = c;
#             fa = a * sin(a) - 2
#             fb = b * sin(b) - 2
#     else:
#         print("Este metodo no puede aplicarse.");
        
# Biseccion()