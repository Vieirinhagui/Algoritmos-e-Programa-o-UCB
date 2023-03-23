#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    printf("Qual a sua idade?");
    scanf("%d", &idade);

    if (idade>=70){
        printf("Velho");
    }else if(idade>=21){
        printf("Adulto");
    }else if (idade<=20){
        printf("Jovem");
    }
    

}
