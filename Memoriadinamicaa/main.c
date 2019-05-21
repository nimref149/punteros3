#include <stdio.h>
#include <stdlib.h>
#define T 5
int main()

{

    //pNumeros=(int*) malloc(sizeof(int)*5); pNu me va a devolver 4, le estoy pididendo 20 bytes en memoria de manera consecutiva en el hit.
    int* pNumeros;
    int i;
    int* aux;
    pNumeros=(int*) malloc(sizeof(int)*T);




    //4ta parte
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

        aux=(int*)realloc(pNumeros,sizeof(int)*(T+5));

        if(aux!=NULL)
        {
            pNumeros=aux;
            for(i=T; i<T+5; i++)
            {
                printf("Ingrese un numero: ");
                scanf("%d",pNumeros+i);
            }
            for(i=0; i<T+5; i++)
            {
                printf("%d\n",*(pNumeros+i));
            }
            pNumeros=(int*)realloc(pNumeros,sizeof(int)*4);//Lo achica los lugares de pnumeros hasta 4 y muestra valores basura despues del 4 lugar
            printf("Luego de achicar\n");//muestra todos los valores pero desdepues del cuarto lugar es basura
            for(i=0;i<T+5;i++){
                printf("%d\n",*(pNumeros+i));

            }
        }
        else
        {
            printf("no hay memoria suficiente!!!");
        }

    }



    /*

//3era parte, se puso el tamaño de pNumeros con constante T 5

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

        aux=(int*)realloc(pNumeros,sizeof(int)*(T+5));//COPIA LO QUE ESTA EN PNUMEROS a un auxiliar Y EXTIENDE EL LUGAR(SON 5) HASTA 10 LUGARES, EN CASO DE QUE NO PUEDA DAR 10 LUGARES LIBRES(EXTENDER 5 MAS) CONSECUTIVOS SE VUELVE NULL el auxiliar
        if(aux!=NULL)
        {
            pNumeros=aux;
            for(i=T;i<T+5;i++)
                {
            printf("Ingrese un numero: ");
            scanf("%d",pNumeros+i);
            }
            for(i=0;i<T+5;i++)
            {
                printf("%d\n",*(pNumeros+i));
            }

        }
        else
        {
            printf("no hay memoria suficiente!!!");
        }

    }

   */


//-------------


/*
//2nda parte
    int* pNumeros;
    int i;
    pNumeros = (int*) malloc(sizeof(int)*5);
    if(pNumeros!=NULL)
    {
        for(i=0; i<5; i++)
        {
            *(pNumeros+i)=i+1;
        }
        for(i=0; i<5; i++)
        {
            printf("%d\n",*(pNumeros+i));
        }
    }



*/




//------------

/*
//1era parte
    pNumero=(int*) malloc(sizeof(int));
    *pNumero=99;
    printf("Heap->:pNumero %d\n",pNumero);
    printf("&Stack->&pNumero: %d\n",&pNumero);


    if(pNumero!=NULL)
    {

        printf("Valor->*pNumero: %d\n",*pNumero);
        system("pause");
        printf("Luego de hacer un free: \n");
        free(pNumero);
        printf("Heap->pNumero: %d\n",pNumero);
        printf("Stack ->&pNumero: %d\n",&pNumero);
        printf("Valor->*pNumero: %d\n",*pNumero);
        */


    return 0;
}
