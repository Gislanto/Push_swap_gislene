float  ft_analizy_disorder(int *stack, int size)
{
    int      i;
    int      j;
    long     disorder;
    long     erros;
    int      temp;

    i = 0;
    temp = 0;
    disorder = 0;
    erros = 0;
    while (stack[i] && i < size)
    {
        temp = stack[i];
        j = 0;
        while (j < size - i)
            if (temp > stack[i + j++])
                erros++;
        i++;
    }
    disorder = size * (size - 1) / 2;
    return ((float)erros / disorder);
}
