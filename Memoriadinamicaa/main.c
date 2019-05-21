#include <stdio.h>
#include <stdlib.h>
#define T 5
int main()

{

    //pNumeros=(int*) malloc(sizeof(int)*5); pNu me va a devolver 4, le estoy pididendo 20 bytes en memoria de manera consecutiva en el hit.
    int* pNumeros;
    int i;
    int* pAux;

    pAux=(int*) malloc(sizeof(int)*(T+5));
    pNumeros=(int*) malloc(sizeof(int)*T);

    if(pNumeros!=NULL)
    {
        for(i=0; i<T; i++)
        {
            *(pNumeros+i)=i+1;
            printf("Ingrese un numero: ");
            scanf("%d",pNumeros+i);
        }
        for(i=0; i<T; i++)
        {
            printf("%d\n",*(pNumeros+i));
        }



    }

    pAux=(int*)realloc(pNumeros,sizeof(int)*(T+5));

    if(pAux!=NULL){

        for(i=0; i<T+5; i++)
        {
            printf("%d\n",*(pAux+i));
        }

    }







/*

int* pNumeros;
        int i;
        pNumeros = (int*) malloc(sizeof(int)*5);
        if(pNumeros!=NULL)
        {
            for(i=0;i<5;i++)
            {
                *(pNumeros+i)=i+1;
            }
            for(i=0;i<5;i++)
            {
                printf("%d\n",*(pNumeros+i));
            }
        }



*/





//-_-_-_--_-_-_--_-_-_--_-_-_--_-_-_--_-_-_--_-_-_--_-_-_--_-_-_--_-_-_-

/*

    pNumero=(int*) malloc(sizeof(int));
    *pNumero=99;
    printf("Heap->:pNumero %d\n",pNumero);
    printf("&Stack->&pNumero: %d\n",&pNumero);


    if(pNumero!=NULL){

    printf("Valor->*pNumero: %d\n",*pNumero);
    system("pause");
    printf("Luego de hacer un free: \n");
    free(pNumero);
    printf("Heap->pNumero: %d\n",pNumero);
    printf("Stack ->&pNumero: %d\n",&pNumero);
    printf("Valor->*pNumero: %d\n",*pNumero);
*/
//-_-_-_--_-_-_--_-_-_--_-_-_--_-_-_--_-_-_--_-_-_--_-_-_--_-_-_--_-_-_--_-_-_-

    return 0;
}
