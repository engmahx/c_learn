//--------- MAHX ----------------------------
#include<iostream>
#include<tuple>
using namespace std;

auto func = []()
{
    int x= 9;
    string s = "some string too";
    
    return tuple<int,string>(x,s);
};

int main()
{
    auto [x,s] = func();
    std::cout << "&func: " << &func << " - func: " << func << std::endl;
    std::cout << "VS code form windows, clang from wsl !!!!" << std::endl;
    std::cout << "x: " << "s : " << s << std::endl;
    return 0;
}
