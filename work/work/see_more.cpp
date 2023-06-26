#include "work.h"
void see_more()
{
    int id;
    char a[100];
    cout<<"请输入您想查看的商品ID：";
    cin>>a;
    if(a[strlen(a)-2]=='0')
        id=atoi(a+strlen(a)-1);
    else
        id=atoi(a+strlen(a)-2);
    for(int i=0;i<goods_num;i++)
    {
        if(product[i].id==id)
        {
            cout<<"*******************************************************************"<<endl;
            cout<<"名称："<<"      "<<product[i].name<<endl;
            cout<<"描述："<<"      "<<product[i].describe<<endl;
            cout<<"上架时间："<<"    "<<product[i].year<<'-'<<product[i].month<<'-'<<product[i].day<<endl;
            cout<<"卖家ID："<<"     M0000"<<product[i].sell_id<<endl;
            cout<<"商品状态："<<"      "<<product[i].ing<<endl;
            cout<<"*******************************************************************"<<endl;
        }
    }

}
