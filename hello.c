#include "stdio.h"

int main(int argc, char *argv[])
{
    int i=0;
    if(argc < 1){
        printf("主函数参数缺失，执行错误\n");
        return -1;
    }

    for(i=0; i<argc; i++){
        printf("参数[%d]: %s\n",i,argv[i]);
    }

    printf("hello world\n");
    return 0;
}

