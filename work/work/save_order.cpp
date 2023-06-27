#include "work.h"
void save_order()
{
    FILE *f=fopen("order.txt","w");
    fprintf(f,"%s,%s,%s,%s,%s,%s\n","订单ID","商品ID", "交易金额","交易时间","卖家ID","买家ID");
    for(int i=0;i<goods_num;i++)
    {
        if(product[i].ing=="已售出")
        {

            fprintf(f,"T%05d,",product[i].tid);
            fprintf(f,"M%05d,",product[i].id);
            fprintf(f,"%.1lf,",product[i].price);
            fprintf(f,"%d-%d-%d,",product[i].year,product[i].month,product[i].day);
            fprintf(f,"U%05d,",product[i].sell_id);
            fprintf(f,"U%05d\n",product[i].buy_id);
        }
    }
    fclose(f);
}
