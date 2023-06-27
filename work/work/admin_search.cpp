#include "work.h"
void admin_search()
{
    string name;
    int flag=0;
    cout<<"请输入商品名称:";
    cin>>name;
    cout<<"**********************************************************************"<<endl;
    cout<<"ID        名称      价格       上架时间         卖家ID        商品状态"<<endl;
    for(int i=0;i<goods_num;i++)
    {
        if(product[i].name.find(name,0)<product[i].name.size()&&product[i].name.find(name,0)>=0)
        {
            flag=1;
            printf("M%05d    %s         %.1lf    %d-%02d-%d %02d:%d:%d  U%05d          %s\n",product[i].id,product[i].name.c_str(),product[i].price,product[i].year,product[i].month,product[i].day,product[i].hour,product[i].min,product[i].sec,product[i].sell_id,product[i].ing.c_str());
        }
    }
    if(flag==0)
    cout<<"没有找到商品！"<<endl;
    cout<<"**********************************************************************"<<endl;
}
