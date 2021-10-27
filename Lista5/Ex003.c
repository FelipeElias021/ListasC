#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main() {
    // Define o valor das páginas de código UTF8 e default do Windows
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
 	// Define codificação como sendo UTF-8
	SetConsoleOutputCP(CPAGE_UTF8);

    //Definir as variáveis jnicial, final e de controle para mudar
	int diaInicial,mesInicial,anoInicial,diaFinal,mesFinal,anoFinal,diaControl,mesControl,anoControl;
    printf("Dia inicial: ");
    scanf("%d",&diaInicial);
    printf("Mês inicial: ");
    scanf("%d",&mesInicial);
    printf("Ano inicial: ");
    scanf("%d",&anoInicial);
    printf("\nDia final: ");
    scanf("%d",&diaFinal);
    printf("Mês final: ");
    scanf("%d",&mesFinal);
    printf("Ano final: ");
    scanf("%d",&anoFinal);
    //As variáveis de controle recebem a inicial, para que sejam escritas até chegar no final
    diaControl = diaInicial;
    mesControl = mesInicial;
    anoControl = anoInicial;
    //Foi usado != e ||, pois quando todos os numeros iniciais e finais forem os mesmos, vai se tudo falso, de acordo com a tabela verdade, assim vai sair do while
    while (diaControl != diaFinal || mesControl != mesFinal || anoControl != anoFinal) {
        //Vai mostrando os dias
        printf("\n%d/%d/%d",diaControl,mesControl,anoControl);
        //Verificar se é fevereiro e se é ano bissexto ou não
        if (mesControl == 2 && anoControl % 4 != 0) {
            //Quando for o último dia do mês, vai passar o mes(aumentar 1), e o dia vai ser definido como 0, já que ele vai cair no if (linha 65 / 78)de 31 dias e incrementar a variável dias antes de imprimir, pulando assim pro dia 2
            if (diaControl == 28) {
                mesControl++;
                diaControl = 0;
            //Se não for o último dia do mês apenas vai passar o dia (aumentar 1)
            } else {
                diaControl++;
            }
            //E assim segue essa estrutura, repetida, mas mudando apenas os dias (linhas 48 / 57 / 73)
        } else if (mesControl == 2 && anoControl % 4 == 0) {
            if (diaControl == 29) {
                mesControl++;
                diaControl = 0;
            } else {
                diaControl++;
            }
        }
        //Meses com 30 dias
        if (mesControl == 4 || mesControl == 6 || mesControl == 9 || mesControl == 11) {
            if (diaControl == 30) {
                mesControl++;
                diaControl = 0;
            } else {
                diaControl++;
            }
        }
        //Meses com 31 dias
        if (mesControl == 1 || mesControl == 3 || mesControl == 5 || mesControl == 7 || mesControl == 8 || mesControl == 10 || mesControl == 12) {
            //Ao mês 12 estar com 31 dias, o ano vai passar(aumentar 1),mes pode ser definido com 1 e dia como 0, já que ele passará no próximo if (linha 73 / 77) e sofrerá um incremento antes de ser impresso
            //Apenas tem aqui essa estrutura, pois apenas o mes 12 tem 31 dias, e seria inútil por no de 30.
            if (mesControl == 12 && diaControl == 31) {
                anoControl++;
                mesControl = 1;
                diaControl = 0;
            }
            if (diaControl == 31) {
                mesControl++;
                //Como não tem mais nenhum if, pode definir como 1 ao passar o mês, já que não tera mais nenhum incremento, assim imprimirá 1 memso
                diaControl = 1;
            } else {
                diaControl++;
            }
        }
    }
    //Dia final
    printf("\n%d/%d/%d",diaControl,mesControl,anoControl);

    //Pelos testes iniciais, se a pessoa tentar datas maiores o programa vai ir para o infinito e além. O mesmo vai acontecer se a data inicial for depois da final.
    //Talvez se adicionar uma estrutura de condição englobando o while com o teste lógico anoControl <= anoFinal && mesControl <= mesFinal && anoControl <= anoFinal, resolva o problema do loop infinito

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}