#include "work.h"
void see_my_sell_goods()
{
    cout<<endl<<endl;
    cout<<"您发布的商品清单如下!"<<endl;
    cout<<"*************************************************************************************************************"<<endl;
    cout<<"ID          名称      价格      上架时间                商品状态"<<endl;
    for(int i=0;i<goods_num;i++)
    {
        if(product[i].sell==user[user_index].name)
        {
            //printf("M0000%d     %s      %.1lf   %d-%d-%d %d:%d:%d       %s\n",product[i].id,product[i].name,product[i].price,product[i].year,product[i].month,product[i].day,product[i].hour,product[i].min,product[i].sec,product[i].describe);
            //printf("M0000%d     ",product[i].id);
            cout<<"M0000"<<product[i].id<<"       "<<product[i].name<<"       ";
            printf("%.1lf",product[i].price);
            cout<<"        "<<product[i].year<<'-'<<product[i].month<<'-'<<product[i].day<<" "<<product[i].hour<<':'<<product[i].min<<':'<<product[i].sec<<"      "<<product[i].ing<<endl;
        }
    }
    cout<<"*************************************************************************************************************"<<endl;
}
