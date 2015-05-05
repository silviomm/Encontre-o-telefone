#include <stdio.h>
#include <stdlib.h>

int main (void){

    char url[] = "arquivo.txt";
    char aux;
    FILE *arq;

    arq = fopen(url, "r");

    if(arq == NULL)
        printf("Erro na abertura do arquivo");

    else{
        aux = fgetc(arq);

        while(aux != EOF){
            if(aux == '1')
                printf("1");
            if(aux == '0')
                printf("0");
            if(aux == '-')
                printf("-");
            if(aux == '\n')
                printf("\n");
            if(aux == 'A'||aux == 'B' ||aux =='C')
                printf("2");
            if(aux == 'D'||aux == 'E'||aux == 'F')
                printf("3");
            if(aux == 'G'||aux == 'H'||aux == 'I')
                printf("4");
            if(aux == 'J'||aux == 'K'||aux == 'L')
                printf("5");
            if(aux == 'M'||aux == 'N'||aux == 'O')
                printf("6");
            if(aux == 'P'||aux == 'Q'||aux == 'R'||aux == 'S')
                printf("7");
            if(aux == 'V'||aux == 'T'||aux == 'U')
                printf("8");
            if(aux == 'W'||aux == 'X'||aux == 'Y'||aux == 'Z')
                printf("9");
            aux = fgetc(arq);
        }

        fclose(arq);

    }
getch();
return 0;

}
