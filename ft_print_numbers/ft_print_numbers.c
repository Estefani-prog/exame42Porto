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

/*Nome da tarefa: ft_print_numbers
Arquivos esperados: ft_print_numbers.c
Funções permitidas: write
--------------------------------------------------------------------------------

Escreva uma função que exiba todos os dígitos em ordem crescente.

Sua função deve ser declarada da seguinte forma:

void ft_print_numbers(void);*/

#include <unistd.h>

void ft_print_numbers(void)
{
    write(1, "0123456789", 10);
}