int Doo() {
    int n;
    printf(" ***SISTEMAS RESUELTOS POR EL METODO DOOLITTLE***\n\n");
    printf("Ingresar el orden de la matriz:\n");
    scanf("%d", &n);
    float mat[n][n], l[n][n], u[n][n], aux;
    printf("Ingresar la matriz /A:\n");
    for (int i = 0; i < n; i++)//lectura de matriz e inicializaci�n de L y U
    {
        for (int j = 0; j < n; j++) {
            scanf("%f", &mat[i][j]);
            l[i][j] = 0;
            u[i][j] = 0;
        }
    }
    for (int k = 0; k < n; k++)//Doolittle
    {
        l[k][k] = 1;
        aux = 0;
        for (int s = 0; s < k; s++) {
            aux += l[k][s] * u[s][k];
        }
        u[k][k] = mat[k][k] - aux;
        for (int j = k + 1; j < n; j++) {
            aux = 0;
            for (int s = 0; s < k; s++) {
                aux += l[k][s] * u[s][j];
            }
            u[k][j] = (mat[k][j] - aux) / l[k][k];
        }
        for (int i = k + 1; i < n; i++) {
            aux = 0;
            for (int s = 0; s < k; s++) {
                aux += l[i][s] * u[s][k];
            }
            l[i][k] = (mat[i][k] - aux) / u[k][k];
        }
    }
    printf("\nL=\n");
    for (int k = 0; k < n; k++)//impresion de matriz L
    {
        for (int j = 0; j < n; j++) {
            printf("%.3f\t", l[k][j]);
        }
        printf("\n");
    }
    printf("\nU=\n");
    for (int k = 0; k < n; k++)//impresi�n de matriz U
    {
        for (int j = 0; j < n; j++) {
            printf("%.3f\t", u[k][j]);
        }
        printf("\n");
    }
    return 0;
}