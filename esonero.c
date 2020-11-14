#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
  char M[128];
  char K[128];
  char X[128];
  char D[128];

  int a;
  int b;
  int c;
  int p;
  int lunm;
  int lunk;
  int casuale[128];
  int f;
  time_t t;
srand((unsigned)time(&t));
system("clear");
  printf("\n");
  printf("       inserire codice M  ");
  fgets (M, 130, stdin);
  lunm=strlen(M)-1;
      if (lunm<128){
                    goto fede2;
                    }else {
                           while(getchar()!='\n');}
  fede2:
  printf("       inserisci chiave K ");
  fgets (K, 129, stdin);
  printf("***********************************************************************\n\n");
fede1:
lunk=strlen(K)-1;
if (lunm>lunk){
fede3:
              printf("******     La chiave KEY K è minore del codice M          ******\n\n");
              printf("******     Premere 1 per reinserire la chiave KEY K       ******\n");
              printf("******     Premere 2 per generare una KEY K in automatico *******\n");
              printf("******     Premere 3 per terminare il programma           *******\n");
              scanf("%d",&p);
              printf("valore opzione inserito %d\n",p);
              if(p==1){
                        while(getchar()!='\n');
                        printf("       inserisci chiave K ");
                        fgets (K, 129, stdin);
                        goto fede1;}
              if (p==2){
                        printf("Codici ASCII generati ");
                        for(f=0;f<lunm;f++) {
                        K[f]=rand()%128;
                        printf("%d \\",K[f]);}
                        goto fede4;}
              if (p==3){
                        printf("programma terminato, arrivederci \n");
                        return 0; }
              if (p!=1 || p!=2 || p!=3) {
                                        while(getchar()!='\n');
                                        printf("\n************\n");
                                        printf("inserire numero valido \n");
                                        printf("************\n");
                                        goto fede3;
                                        }
              }
fede4:
printf("\n\n");
for(c=0;c<lunm;c++){
                    a=M[c];
                    b=K[c];
                    X[c]=a ^ b;
                    printf ("C.P. %d\t",c);
                    printf("carattere M %c \\",M[c]);
                    printf(" cod. ASCII %d\t",a);
                    printf("carattere Key %c \\",K[c]);
                    printf(" cod.ASCII %d\t",b);
                    printf("codice criptato %d\t",X[c]);
                    D[c]=X[c] ^ b;
                    printf("carattere M decriptato %c\n",D[c]);
                    }
printf("codice criptato ");
for(c=0;c<lunm;c++) printf ("%d\\",X[c]);
printf("\n\n");
}
