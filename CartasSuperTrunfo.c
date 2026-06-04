#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

float calcularDensidadePopulacional(int population, float area) {
	if (area == 0) {
		return 0; // Evitar divisão por zero
	}

	return population / area;
}

float calcularPibPerCapita(float pib, int population) {
	if (population == 0) {
		return 0; // Evitar divisão por zero
	}

	return pib / population;
}

int main() {
	// Área para definição das variáveis para armazenar as propriedades das cidades
	char state;
	char code[10];
	char cityName[50];
	int population;
	float area;
	float pib;
	int nTouristAttractions;
	float populationDensity;
	float pibPerCapita;

	char state2;
	char code2[10];
	char cityName2[50];
	int population2;
	float area2;
	float pib2;
	int nTouristAttractions2;
	float populationDensity2;
	float pibPerCapita2;

	// Área para entrada de dados
	printf("Digite as informações da primeira carta:\n");

	printf("Estado: ");
	scanf(" %c", &state);
	printf("Código: ");
	scanf("%s", code);
	printf("Nome da Cidade: ");
	scanf(" %[^\n]", cityName);
	printf("População: ");
	scanf("%d", &population);
	printf("Área (Km²): ");
	scanf("%f", &area);
	printf("PIB: ");
	scanf("%f", &pib);
	printf("Número de Pontos Turísticos: ");
	scanf("%d", &nTouristAttractions);

	printf("\nDigite as informações da segunda carta:\n");

	printf("Estado: ");
	scanf(" %c", &state2);
	printf("Código: ");
	scanf("%s", code2);
	printf("Nome da Cidade: ");
	scanf(" %[^\n]", cityName2);
	printf("População: ");
	scanf("%d", &population2);
	printf("Área (Km²): ");
	scanf("%f", &area2);
	printf("PIB: ");
	scanf("%f", &pib2);
	printf("Número de Pontos Turísticos: ");
	scanf("%d", &nTouristAttractions2);

	populationDensity = calcularDensidadePopulacional(population, area);
	pibPerCapita = calcularPibPerCapita(pib, population);
	populationDensity2 = calcularDensidadePopulacional(population2, area2);
	pibPerCapita2 = calcularPibPerCapita(pib2, population2);

	// Área para exibição dos dados
	printf("\nPrimeira Carta:\n");
	printf("Estado: %c\n", state);
	printf("Código: %s\n", code);
	printf("Nome da Cidade: %s\n", cityName);
	printf("População: %d\n", population);
	printf("Área (Km²): %.2f\n", area);
	printf("PIB: %.2f\n", pib);
	printf("Número de Pontos Turísticos: %d\n", nTouristAttractions);
	printf("Densidade Populacional: %.2f\n", populationDensity);
	printf("PIB per Capita: %.2f\n", pibPerCapita);

	printf("\nSegunda Carta:\n");
	printf("Estado: %c\n", state2);
	printf("Código: %s\n", code2);
	printf("Nome da Cidade: %s\n", cityName2);
	printf("População: %d\n", population2);
	printf("Área (Km²): %.2f\n", area2);
	printf("PIB: %.2f\n", pib2);
	printf("Número de Pontos Turísticos: %d\n", nTouristAttractions2);
	printf("Densidade Populacional: %.2f\n", populationDensity2);
	printf("PIB per Capita: %.2f\n", pibPerCapita2);

	return 0;
} 
