#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {
   
    char  estado[50];
    char  codigo[40];
    float populacao;
    float  areadekm;
    float  pib;
    float  pturisticos;
//============================
    int  estado2[60];
    char  codigo2[24];
    float populacao2;
    float  areadekm2;
    float  pib2;
    float  pturisticos2;

//===============================
int atributo1, atributo2; 
int resultado1, resultado2;
//===============================
   float pibpercapita, densidadepopu, pibpercapita2, densidadepopu2;
    float superpoder;
    
    
    printf ("==== BEM VINDO AO JOGO DE SUPER TRUNGO====\n \n");
    printf("-- Comece preenchendo informacao da primeira carta \n");

            printf ("Digite o nome do Pais: ");
                scanf("%s", &estado );    

            printf ("Digite numero da populacao: ");
                scanf("%f", &populacao );

            printf ("Digite o tamando da area de km: ");
                scanf("%f", &areadekm ); 

            printf ("Digite o numero do PIB: ");
                scanf("%f", &pib ); 

            printf ("Digite o ponto turistico: ");
                scanf("%f", &pturisticos ); 

// SEGUNDA CARTA ABAIXO // 
    printf("===== PREENCHA A INFORMACAO DA SEGUNDA CARTA ===== \n");
       
        printf ("Digite o nome do Pais: ");
            scanf("%s", &estado2 );    
    
        printf ("Digite numero da populacao: ");
            scanf("%f", &populacao2 );
    
        printf ("Digite o tamando da area de km2: ");
             scanf("%f", &areadekm2 ); 

        printf ("Digite o numero do PIB: ");
            scanf("%f", &pib2 ); 

        printf ("Digite o ponto turistico: ");
            scanf("%f", &pturisticos2 ); 


            densidadepopu =  populacao / areadekm;
            pibpercapita  =   pib / populacao;
            densidadepopu2 =  populacao2 / areadekm2;
            pibpercapita2  =   pib2 / populacao2;
        
    printf("============================================================ \n");
    printf("===============RESULTADO DA PRIMEIRA CARTA==================\n");

            printf("o estado : %s \n", estado);
            printf("Populacao : %0.2f \n", populacao);
            printf("area de Km: %0.2f \n", areadekm);
            printf("PIB: %0.2f \n", pib);
            printf("Pontos turisticos: %0.2f \n", pturisticos);
            printf("A Densidade Populaconal é:: %0.2f \n", densidadepopu);

    printf("============================================================ \n");
    printf("===============RESULTADO DA SEGUNDA CARTA==================\n");
        
            printf("o estado : %s \n", estado2);
            printf("Populacao : %0.2f \n", populacao2);
            printf("area de Km: %0.2f \n", areadekm2);
            printf("PIB: %0.2f \n", pib2);
            printf("Pontos turisticos: %0.2f \n", pturisticos2);
            printf("A Densidade Populaconal é:: %0.2f \n", densidadepopu2);


    printf (" ===== BEM VINDO AO JOGO ===== \n");
    printf (" *******escolha uma opcao para comparar ******** \n");
    printf("1 - POPULACAO\n");
    printf("2 - AREA DE KM \n");
    printf("3 - PIB \n");
    printf("4 - Densidade \n");

    scanf("%d", &atributo1);
    

    switch (atributo1)
    {
    case 1 :
   // case '1':
        printf("voce escolheu Populacao para comparar \n");
       resultado1 = populacao > populacao2? 1 : 0;
        break;
    case 2:
   // case '2':
      printf("voce escolheu AREA DE KM para comparar \n");
      resultado1= areadekm > areadekm2 ? 1 : 0;
        break;
    case 3:
   // case '3':
      printf("voce escolheu PIB para comparar \n ");
       resultado1 =  pib > pib2 ? 1: 0;
        break;
    case 4:
   // case '4':
      printf("voce escolheu densidade Populacional para comparar \n ");
       resultado1 =  densidadepopu < densidadepopu2 ? 1: 0;
        break;
    default:
     printf("opcao ivalida, jogue novamente");
     break;
    }

   
    printf (" *******SEGUNDA OPCAO********\n");
    printf("1 - POPULACAO \n");
    printf("2 - AREA KM \n");
    printf("3 - PIB \n");
    printf("4 - Densidade \n");

    scanf("%d", &atributo2);
   

    if (atributo1 == atributo2){
       printf("voce escolheu a msm opcao, jogue novamente");
    }else{

 switch (atributo2)
    {
    case 1:
   // case '1':
       printf ("voce escolheu Populacao para comparar \n");
       resultado2 = populacao2> populacao? 1 : 0;
        break;
    case 2:
    //case '2':
      printf("voce escolheu AREA DE KM para comparar\n ");
      resultado2= areadekm2 > areadekm ? 1 : 0;
        break;
    case 3:
   // case '3':
      printf("voce escolheu PIB para comparar\n");
       resultado2 =  pib2 > pib ? 1: 0;
        break;
    case 4:
   // case '4':
      printf("voce escolheu densidade Populacional para comparar \n ");
       resultado1 =  densidadepopu2 < densidadepopu ? 1: 0;
        break;
      default:
     printf("opcao ivalida, jogue novamente");
break;
    }      
    if(resultado1 && resultado2){
      printf("O PAIS  %s GANHOU\n", estado);

    }else if(resultado1 != resultado2){
      printf("OS DOIS PAISES EMPATARAM\n");

    }else{
      printf("O PAIS %s GANHOU", estado2);
    }
  }
    return 0;
        

}
