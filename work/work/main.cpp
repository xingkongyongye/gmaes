#include <bits/stdc++.h>
#include "work.h"
using namespace std;
typedef struct u
{
    string name;
    string pwd;
    int type;//1-seller,2-buyer,3-admin
}User;
User user[100];
int main()
{
    int choice;
    int login=0;
    while(1)
    {
        printf("===========================================================================================================================================\n");
        printf("\n");
        printf("1.user_login    2.user_sign_in  3.admin_login   4.exit\n");
        printf("\n");
        printf("===========================================================================================================================================\n");
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
    }
    return 0;
}
