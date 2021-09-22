//--------- MAHX ----------------------------
#include<iostream>
#include<tuple>
using namespace std;

auto func()
{
    int x= 9;
    string s = "some string too";

    tuple<int,string> k(x,s);

    int g = get<0>(k);
    cout << "g :"<<  g << "\n";
    auto [y,r] = k;
    cout << "r :"<<  r << "\n";
    
    return k;
};

int main()
{
    auto [x,s] = func();
    //std::cout << "&func: " << &func << " - func: " << func << std::endl;
    std::cout << "VS code form windows, clang from wsl !!!!" << std::endl;
    std::cout << "x: " << x << " s : " << s << std::endl;
    return 0;
}
