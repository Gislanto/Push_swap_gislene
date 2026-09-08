int verificar_flags(char **argv, char *flag, int argc)
{
    int i;

    i = 0;
    while (i < argc)
    {
        if (ft_strcmp(argv[i], flag) == 0)
            return (1);
        i++;
    }
    return (0);
}

int choose_strategy(float disorder, int size) 
{
    if (disorder < 0.2)
        return (size^2);
    if (disorder >= 0.2 && disorder < 0.5)
        return (size * raiz de size);
    if (disorder >= 0.5 && disorder <= 1.0)
        return (size * log size);
}
