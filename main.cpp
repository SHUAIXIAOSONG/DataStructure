#include <iostream>

//using namespace std;

//void swap(int & x,int & y)
//{
//    int temp = x;
//    x = y; y = temp;
//}

template <typename T>
T count(const T *start,const T *last)
{
    int n = 0;
    while (start != last)
    {
        start++;
        n++;
    }
    return n;
}
int main()
{
    std::cout << "Hello World!" << std::endl;
//    int a=20,b=5;
//    swap(a,b);
//    std::cout << a << b << std::endl;

    int a[] = { 0,1,2,3,4,5,6,7,8,9};
    std::cout << count(std::begin(a), std::end(a)) << std::endl;  //这里是STL函数
    return 0;
}

