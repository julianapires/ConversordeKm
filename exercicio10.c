#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{   setlocale (LC_ALL, "");

    float M, K;
    
    printf ("Informe a velocidade em m/s: ");
    scanf ("%f", &M);
    
    K = M*3.6;
    
    printf ("A velocidade em Km/h é de: %.2f", K);
  
  system("PAUSE");	
  return 0;
}
