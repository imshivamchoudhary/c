fib_recursion(int n ){
   if (n==1 || n==2)
        return n;
    else
        return fib_recursion(n-1) +fib_recursion(n-2);
}