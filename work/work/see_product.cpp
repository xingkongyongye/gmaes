#include "work.h"
void see_product()
{
    cout<<endl<<endl;
    cout<<"已发布的商品清单如下!"<<endl;
    cout<<"*************************************************************************************************************"<<endl;
    cout<<"ID          名称      价格      上架时间                卖家ID"<<endl;
    for(int i=0;i<goods_num;i++)
    {
        if(product[i].ing=="销售中")
        {
            cout<<"M0000"<<product[i].id<<"       "<<product[i].name<<"       ";
            printf("%.1lf",product[i].price);
            cout<<"        "<<product[i].year<<'-'<<product[i].month<<'-'<<product[i].day<<"- "<<product[i].hour<<':'<<product[i].min<<':'<<product[i].sec<<"      "<<"M0000"<<product[i].sell_id<<endl;
        }

    }
    cout<<"*************************************************************************************************************"<<endl;


}
