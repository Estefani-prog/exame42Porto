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

/*Nome da tarefa: ulstr
Arquivos esperados: ulstr.c
Funções permitidas: write
--------------------------------------------------------------------------------

Escreva um programa que receba uma string e inverta a caixa de todas as suas letras.
Outros caracteres permanecem inalterados.

Você deve exibir o resultado seguido por um '\n'.

Se o número de argumentos não for 1, o programa exibirá '\n'.

Exemplos:

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e*/

#include <unistd.h>

void ulstr(char *str)
{
    int i;
    int c;

    i = 0;
    while (str[i])
    {
        c = str[i];

        if (c >= 'a' && c <= 'z')
            c -= 32;
        else if (c >= 'A' && c <= 'Z')
            c += 32;
        write(1, &c, 1);
        i++; 
    }
    
}

int main(int argc, char **argv)
{
    if (argc > 1)
        ulstr(argv[1]);
        write(1, "\n", 1);
        return (0);
}