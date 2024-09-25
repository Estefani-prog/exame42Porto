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

/*Nome da tarefa: aff_z
Arquivos esperados: aff_z.c
Funções permitidas: write
--------------------------------------------------------------------------------

Escreva um programa que pegue uma string e exiba o primeiro caractere 'z'
que encontrar nela, seguido por uma nova linha. Se não houver
caracteres 'z' na string, o programa escreve 'z' seguido
por uma nova linha. Se o número de parâmetros não for 1, o programa exibe
'z' seguido por uma nova linha.

Exemplo:

$> ./aff_z "abc" | cat -e
z$
$> ./aff_z "dubO a POIL" | cat -e
z$
$> ./aff_z "zaz sent le poney" | cat -e
z$
$> ./aff_z | cat -e
z$*/

#include <unistd.h>

int main (void)
{
    write(1,"z\n", 2);
    return (0);
}