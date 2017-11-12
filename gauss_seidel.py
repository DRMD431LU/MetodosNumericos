void Ga_Se() {
    printf("Metodo de Gauss-Seidel\nIngresa el numero de la matriz: ");
    int n;
    scanf("%d", &n);
    int A[n][n], B[n], m;
    double C[n], D[n];
    putchar('\n');
    for (int i = 0; i < n; i++) {
        m = 0;
        for (int j = 0; j < n; j++) {
            printf("Ingresa el valor de la fila %d y columna %d: ", i + 1, j + 1);
            scanf("%d", *(A + i) + j);
            if (j == i) {
                printf("Ingresa el valor termino independiente para la fila %d: ", i + 1);
                scanf("%d", B + i);
            } else m += *(*(A + i) + j);
        }
        if (*(*(A + i) + i) < m) {
            printf("\n\nError. No es posible realizar este metodo. ");
            printf("\nLa matriz no es diagonal positiva para la fila %d: ", i + 1);
            printf("\nIngresa una matriz diagonal positiva.\n\n");
            i = -1;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("Ingresa Los valores de convergencia para X%d: ", i + 1);
        scanf("%lf", C + i);
        *(D + i) = *(B + i);
    }
    printf("\n\nEl resultado es: \n\n");
    for (int i = 1; i < 20; i++) {
        printf("\t%d", i);
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (k != j) *(D + j) -= ((*(*(A + j) + k)) * (*(C + k)));
            }
            *(D + j) /= *(*(A + j) + j);
            *(C + j) = *(D + j);
            printf("\t%lf", *(D + j));
        }
        for (int t = 0; t < n; t++) {
            *(C + t) = *(D + t);
            *(D + t) = *(B + t);
        }
        putchar('\n');
    }
}
