#include <stdio.h>

int main()
{
    FILE *fp;
    int error = fopen_s(&fp,"write.txt","w+");
    if (error != 0) {
        // 处理错误情况
        //fprintf(stderr, "Error opening file.\n");
        perror("fp");
        return 1;
    }
    char str[100];
    printf("Enter result: ");
    scanf("%s",str);
    fprintf(fp,"%s",str);
    fclose(fp);
    return 0;
}