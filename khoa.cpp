#include<iostream>
using namespace std;
bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                return false;
            }
            
        }
        
        
    }
    return true;
    
}
int main(){

    int n; cin >> n;
    int a[1000]; 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}