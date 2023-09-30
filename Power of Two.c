bool isPowerOfTwo(int n){
    double p=log2(n);
    return (p-(int)p==0) ? true : false;
}