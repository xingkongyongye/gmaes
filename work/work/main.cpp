#include <bits/stdc++.h>
#include <iostream>
#include "work.h"
using namespace std;

int main()
{

    while(1)
    {
        printf("========================================================================================================\n");
        printf("\n");
        printf("1.用户登录    2.用户注册  3.管理员登录   4.退出\n");
        printf("\n");
        printf("========================================================================================================\n");
        printf("输入操作:");
        cin>>choice;
        if(choice==1)
        {
            if(login==1)
                printf("You_have_alread_login\n");
            else
                user_login();
        }
        if(choice==2)
        {
            user_sign_in();

        }
        if(choice==3)
        {
            admin_sign();
        }
        if(choice==4)
        break;


    }
    return 0;
}
