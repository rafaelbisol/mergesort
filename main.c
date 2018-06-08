#include "mergesort.h"

/* Funçao principal . */
int main ( int argc, char * argv [])
{
    clock_t start, end;
    double elapsed_time;
    srand (time(NULL));
    int i;
    int tamanho;
    scanf ("%d", &tamanho);
    int *v = (int *) malloc(tamanho * sizeof (int));
    int *vaux = (int *) malloc (tamanho * sizeof (int));
    for ( i = 0; i < tamanho; i ++)
    {
        v [i] = rand () % (tamanho + 1); /* aleatório */
        // v [ i ] = i ; /* crescente */
        // v [ i ] = tamanho - i ; /* decrescente */
        // v [ i ] = 4; /* iguais */
    }
    // Imprimir (v , tamanho ) ;
    start = clock () ;
    MergeSort (v, vaux, 0, tamanho - 1);
    end = clock ();
    elapsed_time = (end - start) / (double) CLOCKS_PER_SEC;
    printf ("Tempo de execuçao (Merge-Sort): %.2f\n", elapsed_time);
    if (! Verifica_Ordenacao (v, tamanho ))
    {
        printf ("Erro: a ordenacao nao está correta !\n");
    }
    // Imprimir (v , tamanho ) ;
    free (v);
    free (vaux);
    return 0;
}
