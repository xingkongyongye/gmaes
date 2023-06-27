#include "work.h"
void admin_see_user()
{
    cout<<"**********************************************************************"<<endl;
    //cout<<"用户ID     用户名     联系方式         地址                 钱包余额"<<endl;
    printf("%-8s%-20s%-20s%-20s%-20s\n","用户ID ","    用户名     ","联系方式   ","      地址  ","               钱包余额");
    for(int i=0;i<signnum;i++)
    {
        if(user[i].ing==1)
        {
            printf("U%05d       %-20s%-20s%-20s%-20.1lf\n",user[i].id,user[i].name.c_str(),user[i].number.c_str(),user[i].site.c_str(),user[i].money);
        }
    }
    cout<<"**********************************************************************"<<endl;
}
