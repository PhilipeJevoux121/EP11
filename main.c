#include <stdio.h>

int main (void){
    int testes;
    scanf("%d", &testes);
    while(testes--){
        int enderecos, chaves, x, y;
        scanf("%d %d", &enderecos, &chaves);
        int listao[enderecos][chaves], ultimaColisao[enderecos];
        for(x = 0; x < enderecos; x++){
            ultimaColisao[x] = 0;
        }
        
        for(x = 0; x < chaves; x++){
            int tmp, tmp2;
            scanf("%d", &tmp);
            tmp2 = tmp%enderecos;
            listao[tmp2][ultimaColisao[tmp2]] = tmp;
            ultimaColisao[tmp2]++;
        }
        for(x = 0; x < enderecos; x++){
            printf("%d -> ", x);
            for(y = 0; y < ultimaColisao[x]; y++){
                printf("%d -> ", listao[x][y]);
            }
            printf("\\\n");
        }
        if(testes)
            printf("\n");
    }
    return 0;
}