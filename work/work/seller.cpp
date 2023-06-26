#include "work.h"
void seller()
{
    int choice;
    while(1)
    {
        cout<<endl;
        cout<<endl;
        cout<<"==============================================================================================="<<endl;
        cout<<"1.发布商品   2.查看发布商品    3.修改商品信息    4.下架商品  5.查看历史订单    6.返回用户主界面"<<endl;
        cout<<"==============================================================================================="<<endl;
        cout<<"请输入操作：";
        cin>>choice;
        if(choice==1)
        {
            shelf_goods();
        }
        if(choice==2)
        {
            see_my_sell_goods();
        }
        if(choice==3)
        {
            change_goods();
        }
        if(choice==4)
        {
            sold_out();
        }
        if(choice==5)
        {
            see_history_sell_order();
        }
        if(choice==6)
        {
            return ;
        }
    }
}
