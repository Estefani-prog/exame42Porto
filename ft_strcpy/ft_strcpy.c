/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_ab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:55:48 by estda-si          #+#    #+#             */
/*   Updated: 2024/09/25 12:57:09 by estda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nome da tarefa: ft_strcpy
Arquivos esperados: ft_strcpy.c
Funções permitidas:
--------------------------------------------------------------------------------

Reproduza o comportamento da função strcpy (man strcpy).

Sua função deve ser declarada da seguinte forma:

char *ft_strcpy(char *s1, char *s2);*/

char *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;

    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

/*#include <stdio.h>
int main(void)
{
    char s2[] = "Estefani Bonifacio";
    char s1[25];

    ft_strcpy(s1, s2);

    printf("s2: %s\n", s2);
    printf("s1: %s\n", s1);
    return (0);
}*/