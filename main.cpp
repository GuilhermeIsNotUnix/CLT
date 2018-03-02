#include <iostream>
#include <stdlib.h>
#include <unistd.h>
//==============================================================================
int S = 0; //segundos
int M = 0; //minutos
int H = 0; //horas
int i; //contador para o for
//==============================================================================

//Metodo que imprime o titulo
void titulo()
{
	   std::cout << "████████╗██╗███╗   ███╗███████╗██████╗" << '\n';
     std::cout << "╚══██╔══╝██║████╗ ████║██╔════╝██╔══██╗" << '\n';
	   std::cout << "   ██║   ██║██╔████╔██║█████╗  ██████╔╝" << '\n';
	   std::cout << "   ██║   ██║██║╚██╔╝██║██╔══╝  ██╔══██╗" << '\n';
	   std::cout << "   ██║   ██║██║ ╚═╝ ██║███████╗██║  ██║" << '\n';
	   std::cout << "   ╚═╝   ╚═╝╚═╝     ╚═╝╚══════╝╚═╝  ╚═╝" << '\n';
     std::cout << "\t\t\t\t v.1.5" << '\n';
}

void count()
{
	std::cout << "\n\t|Pressione Enter para iniciar a contagem|\n";

	//Checa se Enter foi pressionado
	if(std::cin.get() == '\n')
	{

			for(i = 0; i < 5; --i)
			{
					/* Exibe o tempo, que é atualizado a cada 1 segundo junto da função "sleep".*/
					std::cout << "\n\t\t\t\t" << H << "h : " << M << "min :" << S << "seg";

					/*
					O sleep tem função de deixar o programa em modo de espera por um tempo definido.
					Assim, a proxima ação é só executada depois do tempo em segundos informado na função "sleep"
					Requer o uso da biblioteca "<unistd.h> em UNIX-Based Systems".
					*/
					sleep(1); /*O parâmetro "1" equivale a 1 segundo.*/

					/* Tem a função de limpar a tela no terminal, requer o uso da biblioteca "<stdlib.h>".*/
					system("clear");
					S++;

					/*
					Quando a variável do segundo atinge valor 60, a variável
					do minuto é incrementada, e segundo passa a assumir valor 0, assim reiniciando a contagem dos segundos.
					*/
					if (S == 60)
					{
							S = 0;
							M++;
					}

					/*
					Similar a estrutura acima...
					Quando a variável "minuto" atinge valor 60, a variável
					"hora" é incrementada, e minuto passa a assumir valor 0, assim reiniciando a contagem.
					*/
					if (M == 60)
					{
							M = 0;
							H++;
					}

			}

	 }

}

//Metodo principal main
int main(int argc, char **argv)
{
    titulo();
    count();
		
  return 0;
}
