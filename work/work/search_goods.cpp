#include "work.h"
void search_goods()
{
    string name;
    cout<<"请输入商品名称:";
    cin>>name;
    cout<<"*********************************************"<<endl;
    cout<<"ID       名称      价格"<<endl;
    for(int i=0;i<goods_num;i++)
    {
        if(product[i].name.find(name,0)<product[i].name.size()&&product[i].name.find(name,0)>=0&&product[i].ing=="销售中")
        {
            cout<<"M0000"<<product[i].id<<"   "<<product[i].name<<"    ";
            printf("%.2lf\n",product[i].price);
        }
    }
}
