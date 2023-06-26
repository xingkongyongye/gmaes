#include "work.h"

void user_main_menu()
{
    int choice;

    while(1)
    {
        cout<<endl;
        cout<<endl;
        cout<<"======================================================"<<endl;
        cout<<"1.注销登录   2.我是买家  3.我是卖家  4.个人信息管理"<<endl;
        cout<<"======================================================"<<endl;
        cout<<"请输入操作：";
        cin>>choice;
        if(choice==1)
        {
            return;
        }
        if(choice==2)
        {
            buyer();
        }
        if(choice==3)
        {
            seller();
        }
    }
}
