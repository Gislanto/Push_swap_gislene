/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_analizy_disorder.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 16:13:37 by codespace         #+#    #+#             */
/*   Updated: 2026/09/08 11:28:26 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

float  ft_analizy_disorder(int *stack, int size)
{
    int     i;
    int     j;
    long disorder;
    long erros;
    int temp;

    i = 0;
    temp = 0;
    disorder = 0;
    erros = 0;
    while (stack[i] && i < size)
    {
        temp = stack[i];
        j = 0;
        while (j < size - i)
        {
            if (temp > stack[i + j++])
                erros++;
        }
        i++;
    }
     disorder = size * (size - 1) / 2;
    return ((float)erros / disorder);
}

