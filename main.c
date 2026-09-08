int main (int argc, char **argv)
{
    int size;
    int i;
    
    size = (argc - 1);
    i = 0;
    j = 1;
    if (argc < 2)
        return (write(1, "Error: No arguments provided\n", 28));
    while (i < size)
        stack_a[i++] = ft_atoi(argv[j++]);
    disorder = ft_analizy_disorder(stack_a, size);
    if (!stack_a)
        return (write(1, "(nil)", 5));
    if (verificar_flags(argv, "--simple", size))
       return (--simple());
    else if (verificar_flags(argv, "--medium", size))
       return (--medium());
    else if (verificar_flags(argv, "--complex", size))
       return (--complex());
    else
        return (choose_strategy(disorder, size));
    free(stack_a);
    free(stack_b);
    return (0);
}