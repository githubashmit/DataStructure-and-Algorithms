/* Consider the recursive algorithm below, where the random(int n) spends one unit of time to return a random integer which is evenly distributed within the range [0,n][0,n]. If the average processing time isT(n) what is the value of T(6)? */
int random(int a){
    int i ;
    int num = (rand() % (a+1));
    return num;
}
int function(int n)
{
    int i;
    if (n<=0)
    {
        return 0;
    }
    else{
        i = random(n-1);
        printf("this\n");
        return function(i) + function (n-1-i);
    }
}
int main()
{
    function(6);
    return 0;
}