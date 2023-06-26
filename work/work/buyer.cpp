#include "work.h"
void buyer()
{
    int choice;
    while(1)
    {
        cout<<endl;
        cout<<endl;
        cout<<"=================================================================================================================="<<endl;
        cout<<"1.查看商品列表     2.购买商品      3.搜索商品      4.查看历史订单        5.查看商品详细信息      6.返回用户主界面"<<endl;
        cout<<"=================================================================================================================="<<endl;
        cout<<"请输入操作：";
        cin>>choice;
        if(choice ==1)
        {
            see_product();
        }
        if(choice==2)
        {
            buy_goods();
        }
        if(choice==3)
        {
            search_goods();
        }
        if(choice==4)
        {
            see_buy();
        }
        if(choice==5)
        {
            see_more();
        }
        if(choice==6)
        {
            return ;
        }
    }
}
