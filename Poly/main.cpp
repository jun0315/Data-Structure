#include <iostream>
#include <stdio.h>
#include "linkedlist.h"
using namespace std;

typedef LNode PNode;
typedef LinkList Polynomial;

int GetNum(Polynomial P)
{
    int n=0 ;
    Polynomial p;
    p = new PNode;
    p = P->next;
    while(p)
    {
        n++;
        p = p->next;
    }
    return n;
}


void printPolyn(Polynomial P)
{
    int n = GetNum(P);
    for(int i = 1 ; i<=n ;i++)
    {
        ElemType e;
        if(GetElem(P,i,e))
        {
            printf("%.0lf倍的x的%d次方",e.coef,e.expn);
            if(i!=n)
                printf("+");
        }
    }
    printf("\n");
}

void CreatePolyn(Polynomial &P)
{
    P = new PNode;
    P->next = NULL;
    int n ;
    cout <<"请输入该多项式的项数";
    cin  >>n ;
    for(int i = 1 ;i <= n ;i++)
    {
        Polynomial s;
        Polynomial pre;
        s = new PNode;
        pre = new PNode;

        pre = P;

        Polynomial q;
        q = P->next;

        cout <<"请输入系数：";
        cin  >>s->e.coef ;

        cout <<"请输入指数：";
        cin  >>s->e.expn ;

        while(q&&q->e.expn<s->e.expn)
        {
            pre = q;
            q = q->next;
        }
        s->next = q;
        pre->next = s;
    }
    cout <<"创造完成！"<<endl;
}

void AddPolyn(Polynomial &Pa,Polynomial &Pb)
{
    Polynomial p1,p2,p3;
    p1 = new PNode;
    p2 = new PNode;
    p3 = new PNode;

    p1 = Pa->next , p2 = Pb->next;
    p3 = Pa;
    while(p1&&p2)
    {
        if(p1->e.expn==p2->e.expn)
        {
            Polynomial r;
            r = new PNode;

            float sum = p1->e.coef + p2->e.coef;

            if(sum==0)
            {
                r=p1;p1=p1->next;delete r;
                r=p2;p2=p2->next;delete r;
            }
            else
            {
                p1->e.coef = sum;
                p3->next = p1;
                p3 = p1;
                p1 = p1->next;
                r = p2;
                p2 = p2->next;
                delete r;
            }
        }
        else if(p1->e.expn<p2->e.expn)
        {
            p3->next = p1 ;
            p3 = p1 ;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2 ;
            p3 = p2 ;
            p2 = p2->next;
        }
    }
    p3->next = p1?p1:p2;
    delete Pb;
}

void test();
int main()
{
//    Polynomial P1,P2;
//    CreatePolyn(P1);
//    printPolyn(P1);
//    CreatePolyn(P2);
//    printPolyn(P2);
//    AddPolyn(P1,P2);
//    printf("最后两式子相加之和为：");
//    printPolyn(P1);
//多项式的相加暂时注释了，只保留下方的test函数，用来测试链式表的操作
    test();

}
