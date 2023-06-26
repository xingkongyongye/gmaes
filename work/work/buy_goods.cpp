#include "work.h"
void buy_goods()
{
    char a[100];
    int id;
    int x;
label_4:

    cout<<"请输入要购买的商品ID：";
    cin>>a;
    if(a[strlen(a)-2]=='0')
        id=atoi(a+strlen(a)-1);
    else
        id=atoi(a+strlen(a)-2);
    for(int i=0;i<goods_num;i++)
    {
        if(product[i].id==id)
        {

            if(product[i].ing=="销售中")
            {
                if(user[user_index].money>=product[i].price)
                {
                    user[user_index].money=user[user_index].money-product[i].price;
                    product[i].buy_id=user[user_index].id;
                    product[i].ing="已售出";
                    cout<<"**************************"<<endl;
                    cout<<"交易提醒！"<<endl<<"交易时间："<<product[i].year<<'-'<<product[i].month<<'-'<<product[i].day<<endl<<"交易金额：";
                    printf("%.1lf元",product[i].price);
                    cout<<endl<<"交易状态：交易成功"<<endl<<"余额";
                    printf("%.1lf元\n",user[user_index].money);
                    cout<<"**************************"<<endl;
                }
                else
                {
                    cout<<"    余额不足"<<endl;
                    cout<<"**************************"<<endl;
                    cout<<"交易提醒！"<<endl<<"交易时间："<<product[i].year<<'-'<<product[i].month<<'-'<<product[i].day<<endl<<"交易金额：";
                    printf("%.1lf元",product[i].price);
                    cout<<endl<<"交易状态：交易失败"<<endl<<"余额：";
                    printf("%.1lf元\n",user[user_index].money);
                    cout<<"**************************"<<endl;
                }
            }
        }
        else
        {
label_5:
            cout<<"ID不存在请重新输入或返回(1.重新输入 2.返回)：";
            cin>>x;
            if(x==1)
            {
                goto label_4;
            }
            else if(x==2)
            {
                return;
            }
            else
            {
                goto label_5;
            }
        }
    }
}
