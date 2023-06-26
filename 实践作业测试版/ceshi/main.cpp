#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main() {
    FILE *file;
    char buffer[1024];
    int flag=0;
    string d;
    // 打开文件
    file = fopen("use_data.txt", "w");
    if (file == NULL) {
        printf("无法打开文件\n");
        return 1;
    }
    fprintf(file,"你手机辐射法术的舒服\n回复就是不服就");
    fclose(file);
    file = fopen("use_data.txt", "r");
    // 逐行读取文件内容

    while (fgets(buffer, sizeof(buffer), file)) {
        // 输出读取的中文内容
        flag++;
        //printf("%c\n",buffer[3]);
        printf("%s\n",buffer);
        d=buffer;
        cout<<d[2]<<endl;
        cout<<flag<<endl;
    }

    // 关闭文件
    fclose(file);

    return 0;
}
