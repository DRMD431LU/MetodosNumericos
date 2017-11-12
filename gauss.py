int Gaus() {
    int n;
    printf(" ***SISTEMAS LINEALES RESUELTOS POR EL METODO GAUSS***\n\n");
    printf("Ingresar el orden de la matriz:\n");
    scanf("%d", &n);
    float mat[n][n], vect[n], aux, piv;
    printf("\n");
    printf("Ingresar la matriz /A:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%f", &aux);
            mat[i][j] = aux;
        }
    }
    printf("Ingresar el vector de terminos independientes:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%f", &aux);
        vect[i] = aux;
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
    for (int k = 0; k < n; ++k)//Gauss
    {
        aux = 1 / mat[k][k];
        for (int i = k; i < n; ++i) {
            if (i != k) {
                piv = aux * mat[i][k];
                vect[i] -= piv * vect[k];
            }
            for (int j = k; j < n; ++j) {
                if (i != k) {
                    mat[i][j] -= mat[k][j] * piv;
                }
            }
        }
        for (int i = k; i < n; ++i) {
            mat[k][i] *= aux;
        }
        vect[k] *= aux;
    }
    /*for(int i=0;i<n;++i)//resultados
    {
        for(int j=0;j<n;++j)
        {
            printf("%.2f\t",mat[i][j]);
        }
        printf(" %.2f \n",vect[i]);
    }*/
    for (int i = n - 1; i >= 0; --i)//sustituci�n regresiva
    {
        for (int j = i - 1; j >= 0; --j) {
            aux = mat[j][i];
            mat[j][i] -= aux * mat[i][i];
            vect[j] -= aux * vect[i];
        }
    }
    printf("El vector resultante es:\n");
    for (int i = 0; i < n; ++i)//resultados
    {/*for(int j=0;j<n;++j)
         {
             printf("%.2f\t",mat[i][j]);
         }*/
        printf("%.2f\n", vect[i]);
    }
    return 0;
}