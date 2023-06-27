#include "work.h"
void admin_order()
{
    int flag=0;
    cout<<"**************************************************************************"<<endl;
    printf("%s    %s    %s    %s    %s    %s\n","订单ID","商品ID", "交易金额","交易时间","卖家ID","买家ID");
    for(int i=0;i<goods_num;i++)
    {
        if(product[i].ing=="已售出")
        {
            flag=1;
            printf("T%05d   ",product[i].tid);
            printf("M%05d        ",product[i].id);
            printf("%.1lf   ",product[i].price);
            printf("%d-%d-%d   ",product[i].year,product[i].month,product[i].day);
            printf("U%05d  ",product[i].sell_id);
            printf("U%05d  \n",product[i].buy_id);
        }
    }
    if(flag==1)
    cout<<"**************************************************************************"<<endl;
    if(flag==0)
    {
        cout<<"没有订单信息"<<endl;
        cout<<"**************************************************************************"<<endl;
    }
}
