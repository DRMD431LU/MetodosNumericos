void Newt() {
    double xn, fxn, fxn2;
    printf("Metodo de Newton\tLa expresion a evaluar es: xe^x-2.\n");
    printf("Ingresa el valor: ");
    scanf("%lf", &xn);
    fxn = xn * exp(xn) - 2;
    fxn2 = (xn + 1) * exp(xn);
    printf("A continuacion se mostrara la tabla de valores:\n");
    system("pause");
    putchar('\n');
    printf("    n\t  X(n)\t    F(xn)    F'(xn)\n\n");
    for (int i = 0; i < 18; i++) {
        printf("%5.1d%10.4lf%10.4lf%10.4lf", i, xn, fxn, fxn2);
        putchar('\n');
        xn = xn - (fxn / fxn2);
        fxn = xn * exp(xn) - 2;
        fxn2 = (xn + 1) * exp(xn);
    }
}