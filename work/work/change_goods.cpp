#include "work.h"

void change_goods()
{
    char a[100];
    char b;
    string des;
    int choice;
    double price;
    int index;
label_1:

    cout<<endl<<endl;
    cout<<"******************************************************************"<<endl;
label_3:

    cout<<"请输入修改商品ID:(或者退出0)";
    scanf("%s",a);
    if(!strcmp(a,"0"))
    return;
    if(a[strlen(a)-2]=='0')
        index=atoi(a+strlen(a)-1);
    else
        index=atoi(a+strlen(a)-2);
    if(index<0||index>=goods_id)
    {
        cout<<"无此ID :"<<index<<' '<<goods_num<<endl;
        goto label_3;
    }
    cout<<"请输入修改的属性(1.价格 2.描述)：";
    cin>>choice;
    if(choice!=1&&choice!=2)
    {
        cout<<"没有对应的商品属性，修改失败!"<<endl<<"******************************************************************"<<endl;

    }
    if(choice==1)
    {
        cout<<"请输入修改后的价格：";
        cin>>price;
        cout<<"请确认修改后的商品信息!"<<endl<<endl;
        cout<<"************************************"<<endl;
        cout<<"商品ID:"<<a<<endl<<"商品名称:"<<product[index-1].name<<endl<<"商品价格：";
        printf("%.1lf元\n",price);
        cout<<"商品描述:"<<product[index-1].describe<<endl;
        cout<<"************************************"<<endl;
    }
    if(choice==2)
    {
        cout<<"请输入修改后的描述：";
        cin>>des;
        cout<<"请确认修改后的商品信息!"<<endl<<endl;
        cout<<"************************************"<<endl;
        cout<<"商品ID:"<<a<<endl<<"商品名称:"<<product[index-1].name<<endl<<"商品价格：";
        printf("%.1lf元\n",product[index-1].price);
        cout<<"商品描述:"<<des<<endl;
        cout<<"************************************"<<endl;
    }
label_2:

    cout<<"确认修改?(y/n)";
    cin>>b;
    if(b=='y')
    {
        if(choice==1)
        {
            product[index-1].price=price;
        }
        if(choice==2)
        {
            product[index-1].describe=des;
        }
        save_goods();
        cout<<"修改成功!"<<endl;
        return;
    }
    else if(b=='n')
        goto label_1;
    else
        goto label_2;



}
