#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
    int band=0;
    FILE *archivo, *archivo2;
    char caracter, caracter2;
    archivo = fopen("prueba.txt","r");
    archivo2 = fopen("prueba1.txt","r");
        if (archivo == NULL || archivo2 == NULL){
 		printf("\nError al leer archivos.");
                return 0;
        }
        else{
	    while (feof(archivo) == 0 || feof(archivo) == 0){
		caracter = fgetc(archivo);
		caracter2 = fgetc(archivo2);
		if (caracter!=caracter2){
                    band=1;
                }
            }
            fclose(archivo);
            fclose(archivo2);
            if(band==1)
                printf("\nNueva version");
            else
                printf("\nMisma version");
            return EXIT_SUCCESS;
        }
}