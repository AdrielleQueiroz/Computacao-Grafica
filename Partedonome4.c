#include <stdio.h>
#include <stdlib.h>

int main(){
    int contador;


char imprimirnome[3][59]={

" +-+ +-+ +-+ +-+   +-+ +-+   +-+ +-+ +-+ +-+ +-+ +-+ +-+",
" |J| |O| |G| |O|   |D| |A|   |M| |E| |M| |O| |R| |I| |A|",
" +-+ +-+ +-+ +-+   +-+ +-+   +-+ +-+ +-+ +-+ +-+ +-+ +-+"};                                          
                                                                                               
for (contador = 0; contador < 3; contador++)
    {
        printf("%s\n", imprimirnome[contador]);
    }


return 0;

}