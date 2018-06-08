void MergeSort (int vetor[], int vetoraux[], int esquerda, int direita)
{
    if (esquerda < direita)
    {
        int m = (esquerda + direita) / 2;
        MergeSort(vetor, vetoraux, esquerda, m);
        MergeSort(vetor, vetoraux, m + 1, direita);
        Intercala(vetor, vetoraux, esquerda, m, direita);
    }
}

void Intercala (int vetor[], int vetoraux[], int esquerda, int m, int direita)
{

}
