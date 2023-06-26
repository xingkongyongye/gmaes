#include "work.h"
void sold_out()
{
    string name;
    cout<<"请输入下架商品的名称：";
    cin>>name;
    //cout<<product[0].name<<endl<<product[0].sell;

    for(int i=0;i<goods_num;i++)
    {
        if(product[i].name==name&&product[i].sell==user[user_index].name&&product[i].ing=="销售中")
        {
            product[i].ing="已下架";
        }
    }
}
