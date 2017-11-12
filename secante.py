void Sec() {
    double xn, xn2, xn3, fxn, fxn2;
    printf("Metodo de la secante\tLa expresion a evaluar es: xe^x-2.\n");
    printf("Ingresa el valor 1 ");
    scanf("%lf", &xn2);
    printf("Ingresa el valor 2 ");
    scanf("%lf", &xn);
    fxn = xn * exp(xn) - 2;
    fxn2 = (xn2) * exp(xn2) - 2;
    printf("A continuacion se mostrara la tabla de valores:\n");
    system("pause");
    putchar('\n');
    printf("    n\t   X(n)\t    F(xn)       F(xn-1)\n\n");
    for (int i = 0; i < 18; i++) {
        printf("%5.1d%10.4lf%10.4lf%10.4lf", i, xn, fxn, fxn2);
        putchar('\n');
        xn3 = xn - (fxn * (xn2 - xn) / (fxn2 - fxn));
        xn2 = xn;
        xn = xn3;
        fxn = xn * exp(xn) - 2;
        fxn2 = (xn2) * exp(xn2) - 2;
    }
}