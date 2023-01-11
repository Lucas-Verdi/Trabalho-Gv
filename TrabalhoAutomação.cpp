#include <iostream>
#include<locale.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::string resposta;
	std::string nome;
	int processo;
	int carga1;
	int alcance1;
	int eixos1;
	int carga2;
	int alcance2;
	int eixos2;
	int carga3;
	int alcance3;
	int eixos3;

	std::cout << "Trabalho de Lucas Arnaut Verdi, 3º E" << std::endl;
	system("PAUSE");

	
		do
		{

			system("cls");
			std::cout << "Bem vindo ao serviço de consultoria robótica !" << std::endl;
			std::cout << "Processo: Fábrica de chocolate" << std::endl;
			std::cout << "Nome: ";
			std::cin >> nome;
			system("cls");
			std::cout << "Olá " << nome << ", Vamos seguir para a escolha do seu robô..." << std::endl;
			std::cout << "\nSelecione o processo que sua empresa irá efetuar:" << std::endl;
			std::cout << "\n1 - Organizar chocolates nas caixas" << std::endl;
			std::cout << "2 - Colocar chocolate no molde" << std::endl;
			std::cout << "3 - Servir chocolate ao cliente na recepção" << std::endl;
			std::cout << "\nInsira uma opção: ";
			std::cin >> processo;

			switch (processo)
			{
			case 1:
				system("cls");
				std::cout << "Especifique a carga que irá levantar (Medida em g, apenas números): ";
				std::cin >> carga1;
				system("cls");
				std::cout << "Especifique o alcance necessário do robô (Medida em mm, apenas números): ";
				std::cin >> alcance1;
				system("cls");
				std::cout << "Insira o número de eixos que deseja(De 2-4): ";
				std::cin >> eixos1;
				system("cls");

				std::cout << "Carga: " << carga1 << "g" << std::endl;
				std::cout << "Alcance: " << alcance1 << "mm" << std::endl;
				std::cout << "Eixos: " << eixos1 << std::endl;

				std::cout << "\nRobô ideal para você: Paralelo Delta/Aranha" << std::endl;
				std::cout << "Fabricante: Adept" << std::endl;
				std::cout << "Preço: 25Mil EUR" << std::endl;
				std::cout << "\nPara efetuar a compra, entre em contato conosco diretamente pelo email servicosroboticos@gmail.com\n\n";
				break;

			case 2:
				system("cls");
				std::cout << "Especifique a carga que irá levantar (Medida em g, apenas números): ";
				std::cin >> carga2;
				system("cls");
				std::cout << "Especifique o alcance necessário do robô (Medida em mm, apenas números): ";
				std::cin >> alcance2;
				system("cls");
				std::cout << "Insira o número de eixos que deseja(De 3-6): ";
				std::cin >> eixos2;
				system("cls");

				std::cout << "Carga: " << carga2 << "g" << std::endl;
				std::cout << "Alcance: " << alcance2 << "mm" << std::endl;
				std::cout << "Eixos: " << eixos2 << std::endl;

				std::cout << "\nRobô ideal para você: Articulado KR Agilus" << std::endl;
				std::cout << "Fabricante: KUKA" << std::endl;
				std::cout << "Preço: 30Mil EUR" << std::endl;
				std::cout << "\nPara efetuar a compra, entre em contato conosco diretamente pelo email servicosroboticos@gmail.com\n\n";
				break;

			case 3:
				system("cls");
				std::cout << "Especifique a carga que irá levantar (Medida em g, apenas números): ";
				std::cin >> carga3;
				system("cls");
				std::cout << "Especifique o alcance necessário do robô (Medida em mm, apenas números): ";
				std::cin >> alcance3;
				system("cls");
				std::cout << "Insira o número de eixos que deseja(De 3-6): ";
				std::cin >> eixos3;
				system("cls");

				std::cout << "Carga: " << carga3 << "g" << std::endl;
				std::cout << "Alcance: " << alcance3 << "mm" << std::endl;
				std::cout << "Eixos: " << eixos3 << std::endl;

				std::cout << "\nRobô ideal para você: Articulado KR Agilus" << std::endl;
				std::cout << "Fabricante: KUKA" << std::endl;
				std::cout << "Preço: 30Mil EUR" << std::endl;
				std::cout << "\nPara efetuar a compra, entre em contato conosco diretamente pelo email servicosroboticos@gmail.com\n\n";
				break;
			}

			std::cout << "Deseja efetuar novamente a consultoria? (Sim ou Não) ";
			std::cin >> resposta;
		} while (resposta == "Sim" || resposta == "sim");

		system("cls");
		std::cout << "Muito obrigado por utilizar os nossos serviços!\n" << std::endl;
		system("PAUSE");
	return 0;
}