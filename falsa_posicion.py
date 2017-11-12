void Fa_Po() {
    double a, b, c, fa, fb, fc;
    printf("Metodo de la Falsa posicion\tLa expresion a evaluar es: xe(x)-2\n");
    printf("Introduce el parametro 1: ");
    scanf("%lf", &a);
    printf("Introduce el parametro 2: ");
    scanf("%lf", &b);
    fa = a * sin(a) - 2;
    fb = b * sin(b) - 2;
    if (fa * fb <= 0) {
        printf("A continuacion se mostrara la tabla de valores:\n");
        system("pause");
        putchar('\n');
        printf(" n\tA\t      B\t\t  C  \t   F(A) \tF(B)\t   F(C)\n\n");
        for (int i = 0; i < 18; i++) {
            c = a - (fa * (b - a)) / (fb - fa);
            fc = c * sin(c) - 2;
            printf("%2d %11.8lf %12.8lf %11.8lf %11.8lf %11.8lf %11.8lf", i, a, b, c, fa, fb, fc);
            if (fa * fc > 0) a = c;
            else b = c;
            fa = a * sin(a) - 2;
            fb = b * sin(b) - 2;
            putchar('\n');
        }
    } else printf("Este metodo no puede aplicarse.\n");
}
