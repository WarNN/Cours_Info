#include <stdlib.h>
#include <stdio.h>

//convertit une valeur en nombre binaire (sur un nombre de digit donné)
void tobin(int valeur, int digit, int nombre[])
{
      int i;
      int temp;
      
      temp=valeur;
      for (i=0;i<digit;i++){   // itère pour le nombre de digit attendus
            nombre[i]=temp & 1;  // prend le LSB et le sauve dans nombre
            temp = temp >> 1;    // décalage d'un bit sur la droite
      }
}


void fabriqueMot(int valeur, int taille_max, char mot[]){
	int i;
	int nombre[taille_max];
	tobin(156,taille_max,nombre);
	for(i = 0 ; i < taille_max; i++){
		if(nombre[i] == 1) mot[i] == 'a';
		else mot[i] == 'b';
	}
}

int main(){
	int i;
	char mot[8];
	for(i = 0; i < 35; i++){
		fabriqueMot(i,8,mot);
		printf("%s\n",mot);
	}
}

