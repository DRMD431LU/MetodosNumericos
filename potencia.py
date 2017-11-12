int Pot() {
    int n;
    printf(" ***SISTEMAS RESUELTOS POR EL METODO DE LA POTENCIA***\n\n");
    printf("Ingresar el orden de la matriz:\n");
    scanf("%d", &n);
    float mat[n][n], x[n], v[n], res, aux;
    printf("\n");
    printf("Ingresar la matriz /A:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%f", &aux);
            mat[i][j] = aux;
        }
        x[i] = 1.0;
    }
    for (int k = 0; k < 20; ++k) {
        if (k == 0) {
            for (int i = 0; i < n; ++i) {
                aux = 0;
                for (int j = 0; j < n; ++j) {
                    aux += mat[i][j] * x[j];
                }
                v[i] = aux;
            }
            res = v[0];
            for (int i = 1; i < n; ++i) {
                if (res < v[i]) res = v[i];
            }
        } else {
            for (int i = 0; i < n; ++i) {
                x[i] = v[i] * (1 / res);
            }
            for (int i = 0; i < n; ++i) {
                aux = 0;
                for (int j = 0; j < n; ++j) {
                    aux += (mat[i][j] * x[j]);
                }
                v[i] = aux;
            }
            res = v[0];
            for (int i = 1; i < n; ++i) {
                if (res < v[i]) res = v[i];
            }
        }
    }
    printf("\nVector Propio\n");
    for (int i = 0; i < n; ++i) printf("%.2f\t", x[i]);
    printf("\n\nValor Propio\n");
    printf("%.2f \n", res);
    return 0;
}
