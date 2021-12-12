int mySqrt(int x){
    double i=1,j=x/2;
    int sqrt;
    int mid;
    if(x==1)
    return 1;
    while(i<=j)
    {
        mid=(j+i)/2;
        sqrt=x/mid;
        if(sqrt==mid)
        return mid;
        else if(sqrt>mid)
        i=mid+1;
        else if(sqrt<mid)
        j=mid-1;
    }
    return j;
}
