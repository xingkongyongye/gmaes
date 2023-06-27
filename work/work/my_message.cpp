#include "work.h"
void my_message()
{
    int choice;
    while(1)
    {
        cout<<"======================================================="<<endl;
        cout<<"1.返回用户主页面    2.修改信息  3.查看信息  4.充值"<<endl;
        cout<<"======================================================="<<endl;
        cout<<"请输入操作：";
        cin>>choice;
        if(choice==1)
        {
            return;
        }
        if(choice==2)
        {
            change_messgae();
        }
        if(choice==3)
        {
            see_my_message();
        }
        if(choice==4)
        {
            chongzhi();
        }
        FILE *f=fopen("user_data.txt","w");
        fprintf(f,"%-18s%-18s%-18s%-18s%-18s%-18s\n","用户ID","用户名", "密码","联系方式","地址","钱包余额");
        for(int i=0;i<signnum;i++)
        {
            if(user[i].id<10&&user[i].ing==1)
            {
                fprintf(f,"%s","U0000");
                fprintf(f,"%-11d,",user[i].id);
                fprintf(f,"%-11s,",user[i].name.c_str());
                fprintf(f,"%-21s,",user[i].pwd.c_str());
                fprintf(f,"%-21s,",user[i].number.c_str());
                fprintf(f,"%-21s,",user[i].site.c_str());
                fprintf(f,"%-21.1lf\n",user[i].money);


            }
            if(user[i].id>=10&&user[i].ing==1)
            {
                fprintf(f,"%s","U000");
                fprintf(f,"%-10d",user[i].id);
                fprintf(f,"%-11s,",user[i].name.c_str());
                fprintf(f,"%-21s,",user[i].pwd.c_str());
                fprintf(f,"%-21s,",user[i].number.c_str());
                fprintf(f,"%-21s,",user[i].site.c_str());
                fprintf(f,"%-21.1lf\n",user[i].money);

            }
        }
        fclose(f);
    }
}
