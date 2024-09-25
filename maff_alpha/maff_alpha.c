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
Nome da tarefa: maff_alpha
Arquivos esperados: maff_alpha.c
Funções permitidas: write
--------------------------------------------------------------------------------

Escreva um programa que exiba o alfabeto, com letras pares em maiúsculas e
letras ímpares em minúsculas, seguido por uma nova linha.

Exemplo:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$*/

#include <unistd.h>

int main ()
{
    write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
    return 0;
}