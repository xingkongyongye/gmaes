#include <bits/stdc++.h>
#include <iostream>
#include "work.h"
using namespace std;
/*
int choice;
int login=0;
int signnum=0;
*/

int main()
{

    while(1)
    {
        printf("========================================================================================================\n");
        printf("\n");
        printf("1.userlogin    2.user_sign_in  3.admin_login   4.exit\n");
        printf("\n");
        printf("========================================================================================================\n");
        printf("please_scanf_number:");
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
        if(choice==4)
        break;
    }
    return 0;
}
