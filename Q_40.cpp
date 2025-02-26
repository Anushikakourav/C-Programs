//QUESTION 40
# include <iostream>
using namespace std; 
int main()
{
    int num, i, sum=0;
    cout << "Enter a number : ";
    cin>> num;
    while(num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    cout << "The sum of "<< num << "is =" << sum << endl ; 
    return 0;
}
