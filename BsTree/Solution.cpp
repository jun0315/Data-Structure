//
// Created by lenovo on 2019/6/12.
//

#include "Solution.h"
Solution::Solution(){
    Input();
    GetResult();
    Output();
}

void Solution::Input() {
    cout<<"input the array:"<<endl;
    while (1)
    {
        int t ;
        cin>>t;
        array.push_back(t);
        if(cin.get()=="\n")
            break;
    }
}

int Solution::GetResult(){
    BSTree t;
    int cnt;
    for(int i = 0 ; i <array.size();i++)
    {
        t.insert(array[i],i);
    }
    for(int i = 0 ;i<array.size();i++)
    {
        cnt+=t.findNeedNumber(t,key,i);
    }
    return cnt;
}

void Solution::Output() {
    cout<<"the answer is:"<<endl;
    cout<<GetResult()<<endl;
}