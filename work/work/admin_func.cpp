#include "work.h"
void admin_func()
{
    int choice;
    while(1)
    {
        cout<<"====================================================================================================="<<endl;
        cout<<"1.查看所有商品     2.搜索商品      3.查看所有订单    4.查看所有用户    5.删除用户  6.下架商品  7.注销"<<endl;
        cout<<"====================================================================================================="<<endl;
        cout<<"请输入操作：";
        cin>>choice;
        if(choice==1)
        {
            admin_see_goods();
        }
        if(choice==2)
        {
            admin_search();
        }
        if(choice==3)
        {
            admin_order();
        }
        if(choice==4)
        {
            admin_see_user();
        }
        if(choice==5)
        {
            del_user();
            save_goods();
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
        if(choice==6)
        {
            admin_sold_goods();
            save_goods();
        }
        if(choice==7)
        {
            return;
        }
    }
}
