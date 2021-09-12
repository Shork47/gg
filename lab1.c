#include <math.h>
#include <stdio.h>
int main()
{
  int a1,a2,a3,max,min,raznost,i;
  float dol1,dol2,dol3,sum;
    printf("Enter a1 -> ");
    scanf("%d", &a1);
    printf("Enter a2 -> ");
    scanf("%d", &a2);
    printf("Enter a3 -> ");
    scanf("%d", &a3);

    sum=a1+a2+a3;
    if (sum ==0){
      printf("Сумма параметров равна нулю, делить на ноль нельзя"); printf("\n");
      return(0);}

    dol1=a1/sum*100;
    dol2=a2/sum*100;
    dol3=a3/sum*100;
    max=0;
    min=0;
    if (a1>a2 && a1>a3)
    {
      max=a1;
      i=1;
    }
      else
      {
        if (a1<a2 && a1<a3)
        min=a1;
      }
    if (a2>a3 && a2>a1)
    {
      max=a2;
      i=2;
    }
      else
      {
        if (a2<a3 && a2<a1)
        min=a2;
      }
    if (a3>a1 && a3>a2)
    {
      max=a3;
      i=3;
    }
      else
      {
        if (a3<a1 && a3<a2)
        min=a3;
      }
    if (max % 2 == 0)
    {
        raznost=max-min;
        printf("Номер параметра = "); printf("%d",i); printf("\n");
        printf("Разноcть наибольшего и наименьшего параметра = "); printf("%d",raznost); printf("\n");
    }
      else
      {
          printf("Номер параметра = "); printf("%d",i ); printf("\n");
          if (i==1){
          printf("Доля параметра = "); printf("%.4f",dol1); printf("%s","%"); printf("\n");}
          if (i==2){
          printf("Доля параметра = "); printf("%.4f",dol2); printf("%s","%"); printf("\n");}
          if (i==3){
          printf("Доля параметра = "); printf("%.4f",dol3); printf("%s","%"); printf("\n");}
      }
    return(0);
}
