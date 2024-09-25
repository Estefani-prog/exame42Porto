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

/*Nome da tarefa: first_word
Arquivos esperados: first_word.c
Funções permitidas: write
--------------------------------------------------------------------------------

Escreva um programa que pegue uma string e exiba sua primeira palavra, seguida por uma
nova linha.

Uma palavra é uma seção de string delimitada por espaços/tabulações ou pelo início/fim
da string.

Se o número de parâmetros não for 1, ou se não houver palavras, simplesmente exiba
uma nova linha.

Exemplos:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this ... is sparta, then again, maybe not" | cat -e
this$
$> ./first_word " " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word " lorem,ipsum " | cat -e
lorem,ipsum$
$>*/

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i;
        i = 0;

        /*while (argv[1][i] == 32 || argv[1][i] == 9)
        {
            write(1, &argv[1][i], 1);
            i++;
        }*/
        while ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
        
    }
    write(1, "\n", 1);
    return (0);
}