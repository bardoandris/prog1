#include <stdio.h>

void selector();
void prim_0();
int filter();
void primLista();
void prim_1(int input);

int main(){
    int option,i=1,N=10;
    while(i<=N){
        printf("Hello\n");
        i++;
    }
    
    printf("1: Szelekcio.\n2: Prim\n3: Primlista\n");
    scanf("%d", &option);
    switch(option)
    {
        case 1: selector(); break;
        case 2: prim_0(); break;
        case 3: primLista(); break;
        default: printf("Egyik sem.\n");
    }
    
    return 0;
}

void prim_1(int input){
    int i;
    for(i=2;i<input;i++){
        if(input%i==0){break;}
    }
    if(input==i){ printf("%d\n",input); }

}

void primLista(){
    int eleje,vege,i;
    eleje=filter();
    vege=filter();
    for(i=eleje;i<=vege;i++){
        prim_1(i);
    }
}

void selector(){
    int szam;
    printf("Szam: "); scanf("%d", &szam);
    if(szam < 0)
    {
        printf("Negativ\n");
    }else{
         printf("Nem negativ.\n");
         if(szam!=0)
         {
             printf("Amugy pozitiv.\n");

         }else{ printf("Amugy 0.\n"); }
         }
}

int filter()
{
    int x,limit=1;
    printf("Szam: ");
    do{
        scanf("%d",&x);
        if(x<=limit) { printf("%d-nel nagyobbat\n",limit); }
    }while(x<=limit);
    return x;
}

void prim_0(){
    int szam,i;
    szam=filter();
    for(i=2;i<szam;i++){
        if(szam%i==0){break;}
    }
    if(szam==i){ printf("%d\n",szam); }
}