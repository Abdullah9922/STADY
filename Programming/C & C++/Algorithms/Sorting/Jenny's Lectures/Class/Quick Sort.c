#include<stdio.h>

partion(a,lb,ub)
{
    int privot = a[lb];
    int start = lb;
    int end = ub;

    while(start<end){

        while(a[start]<=privot) start++;

        while(a[end] > a[privot]) end --;

        if(start<end) swap(a[start],a[end])
    }
    swap(s[lb],a[end]);
    return end;
}

Quick_sort(a,lb,ub)
{
    if(lb<ub){
        loc = partion(a,lb,ub);
        Quick_sort(a,lb,loc-1);
        Quick_sort(a,loc+1,ub);
    }
}
