#include "work.h"
#include <cstdio>
void admin_see_goods()
{
    cout<<"**********************************************************************"<<endl;
    cout<<"ID        名称      价格       上架时间         卖家ID        商品状态"<<endl;
    //cout<<"M00001    shujuku    20.0    2023-6-23 9:23:23  U00001          已售出"<<endl;
    //cout<<"商品数量"<<goods_num<<endl;
    for(int i=0;i<goods_num;i++)
    {
        printf("M%05d    %s    %.1lf    %d-%02d-%02d %02d:%02d:%02d  U%05d          %s\n",product[i].id,product[i].name.c_str(),product[i].price,product[i].year,product[i].month,product[i].day,product[i].hour,product[i].min,product[i].sec,product[i].sell_id,product[i].ing.c_str());
        //printf("M%05d    %s",product[i].id,product[i].name.c_str());

    }
    cout<<"**********************************************************************"<<endl;


}
