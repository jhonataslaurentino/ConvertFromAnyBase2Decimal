/* 
  Laurentino, J.I.C.
  Laboratório de Inteligência Computacional Aplicada a Negócios (LABICAN) 
  Departamento de Computação e Tecnologia (DCT) 
  Bacharelando em Sistemas de Informação (BSI)
  Universidade Federal do Rio Grande do Norte – Caicó – RN – Brasil
  
  14/11/2018
*/
#include<stdio.h>
#include<math.h>
int main()
{
  long long b,n,i=0,ans=0,*ptr, aux;
  printf("Qual base?\n");
  scanf("%lld",&b);
  printf("Digite o numero\n");
  scanf("%lld",&n);
  aux=n;
  ptr=&n;
  while(*ptr>0){
    ans=ans+(*ptr%10)*pow(b,i);
    *ptr=*ptr/10;
    i++;
  }
  printf("%lld na base %lld é %lld \n", aux,b,ans);
  return 0;
}
