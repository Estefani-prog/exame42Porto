
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

/*Nome da tarefa: rev_print
Arquivos esperados: rev_print.c
Funções permitidas: write
--------------------------------------------------------------------------------

Escreva um programa que receba uma string e exiba a string ao contrário
seguido por uma nova linha.

Se o número de parâmetros não for 1, o programa exibirá uma nova linha.

Exemplos:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        // Encontrar o final da string
        while (argv[1][i])
            i++;
        // Imprimir a string ao contrário
        while (i > 0)
                write(1, &argv[1][--i], 1);
    }
    write(1, "\n", 1);
    return (0);
}