#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
  char palavra[255], frase[255];
  int x, y, z = 0, tamf, tamp, conf = 0, cont = 0;
  printf("Digite uma frase: \n");
  gets(frase);
  printf("Digite uma palavra: \n");
  gets(palavra);
  tamf = strlen(frase);
  tamp = strlen(palavra);
  for(x = 0; x < tamf; x++){
    if(frase[x] == palavra[0]){
      z = x;
      cont = 0;
      for(y = 0; y < tamp; y++){
        if(frase[z] == palavra[y]){
          cont++;
        }
        z++;
      }
      if(cont == tamp){
        conf++;
      }
    }
  }
  if(conf != 0){
    printf("\nsim");
  }
  else{
    printf("\nnão");
  }
  printf("\n");
  printf("%i\n", tamf);
  printf("%i\n", tamp);
  getchar();
}