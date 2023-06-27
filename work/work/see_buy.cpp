#include "work.h"
void see_buy()
{
    cout<<"****************历史订单****************************"<<endl;
    for(int i=0;i<goods_num;i++)
    {
        //cout<<"商品名称："<<product[i].name<<endl<<"成交价格："<<product[i].price<<endl<<"成交时间："<<product[i].year<<'-'<<product[i].month<<'-'<<product[i].day<<endl;
        if(product[i].buy_id==user[user_index].id&&product[i].ing=="已售出")
        {
            cout<<"商品名称："<<product[i].name<<endl<<"成交价格：";
            printf("%.1lf",product[i].price);
            cout<<"元"<<endl<<"成交时间："<<product[i].year<<'-'<<product[i].month<<'-'<<product[i].day<<endl;
            cout<<"卖家ID: M0000"<<product[i].sell_id<<endl;
            cout<<"======================================================"<<endl;

        }
    }
}
