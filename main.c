#include <stdio.h>

char arr[1024];
int index = 0;

int main(){

    printf("xitong\n");


    while(1){
        printf("1---tianjia\n");
        printf("2---shanchu\n");
        printf("3---chakan\n");
        printf("4---tihuan\n");
        printf("5---tuichu\n");


        printf("xuanze\n");

        int code;
        scanf("%d",&code);

        if(code == 1){
            printf("tianjia\n");
            char m;
            scanf("%c",&m);
            scanf("%c",&m);

            arr[index] = m;
            index++;

            printf("chenggong,huiche\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if(code == 2){
             printf("shanchu\n");
            index--;

            printf("chenggong,huiche\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

            
        }
        if(code == 3){
            printf("ruxia：\n");

            for (int i = 0; i < index; i++)
            {
                printf("DI%dWEI%c\n", i + 1, arr[i]);
            }

            printf("chenggong,huiche\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
            
        }
        if(code == 4){
            
        }
        if(code == 5){
            printf("tuchu\n");
            break;
            
        }
    }

    return 0;

}