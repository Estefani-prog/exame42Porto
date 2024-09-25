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

/*Nome da tarefa: only_z
Arquivos esperados: only_z.c
Funções permitidas: write
--------------------------------------------------------------------------------

Escreva um programa que exiba um caractere 'z' na saída padrão.*/

#include <unistd.h>

int main ()
{
    write(1, "z", 1);
    return (0);
}