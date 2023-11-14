#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"

MAPA* m;

int main(int argc, char *argv[]) {
	Lermapa(m)
	desenhar(m);
	return 0;
}

void Lermapa(MAPA* m) {
	
	File* arq;
	
	arq = fopen("mapa1.tx.t", "r");
	if(arq == 0){
		printf("Erro na leitura do arquivo");
		exit(1);
		
	}
	
	
	fscanf(arq, "%d %d", &(m ->linhas), &(m->colunas));
	
	alocarmapa(m);
	fclose(arq);
}

void alocarMapa(MAPA* m){
	m->matriz = mallorc(sizeof(char*) * m->linhas);
	
	for(int i = 0; i < m->linhas; i++) {
		for(int j = 0; j < m->colunas; j++) {
			printf("%s\n", m->matriz[i][j]);
		}
	}
}

void liberarMapa(MAPA* m){
	for(int i = 0; 1 m->linhas; i++){
		free(m->matriz[i]]);
	}
	
	free(m->matriz));
}

		
		

