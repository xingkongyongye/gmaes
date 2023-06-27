#include "work.h"
void admin_sold_goods()
{
    char a[100];
    int id;
    char b;
    cout<<"*************************************"<<endl;
    cout<<"请输入下架商品ID：";
    cin>>a;
    if(a[strlen(a)-2]=='0')
        id=atoi(a+strlen(a)-1);
    else
        id=atoi(a+strlen(a)-2);
    for(int i=0;i<goods_num;i++)
    {
        if(product[i].id==id&&product[i].ing=="销售中")
        {
            cout<<"*************************************"<<endl;
            cout<<"您确认要下架该商品吗？"<<endl<<endl;
            cout<<"*************************************"<<endl;
            printf("商品ID:U%05d\n商品名称：%s\n商品金额：%.1lf\n商品描述：%s\n",product[i].id,product[i].name.c_str(),product[i].price,product[i].describe.c_str());
            cout<<"*************************************"<<endl<<endl;
            cout<<"请选择(y/n)";
            cin>>b;
            if(b=='y')
            {
                product[i].ing="被管理员下架";
                cout<<"下架成功"<<endl;
            }
            else
            cout<<"下架失败"<<endl;

        }
    }
}
