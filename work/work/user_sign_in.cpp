#include "work.h"
#include <cstdio>
using namespace std;
void user_sign_in()
{
    std::string name;
    std::string pass;
    std::string number;
    std::string site;
    //string id;
    int flag=0;
    printf("请输入用户名\n");
    printf("%d\n",signnum);
    while(1)
    {
        flag=0;
        cin>>name;
        for(int i=0;i<signnum;i++)
        {
            if(user[i].name==name)
            {
                printf("用户名已存在请重新输入\n");
                flag=1;
                break;
            }
        }
        if(flag==1)
        {continue;}
        if(flag==0)
        {
            printf("请输入密码\n");
            cin>>pass;
            user[signnum].name=name;
            user[signnum].pwd=pass;
            user[signnum].id=signnum;
            user[signnum].money=0;
            signnum++;
            printf("注册成功\n");
            printf("\n");
            break;
        }

    }
    FILE *f=fopen("user_data.txt","w");
    fprintf(f,"%-21s%-21s%-11s\n","用户ID","用户名", "密码");


        for(int i=0;i<signnum;i++)
        {
            if(user[i].id<10)
            {
                fprintf(f,"%s","U0000");
                fprintf(f,"%-11d",user[i].id);
                fprintf(f," %-11s,",user[i].name.c_str());
                fprintf(f," %-21s\n",user[i].pwd.c_str());

            }
            else
            {
                fprintf(f,"%s","U000");
                fprintf(f,"%-10d",user[i].id);
                fprintf(f," %-11s,",user[i].name.c_str());
                fprintf(f," %-21s\n",user[i].pwd.c_str());

            }
        }


}
