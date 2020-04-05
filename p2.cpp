//--------- MAHX ----------------------------
#include<iostream>
#include<tuple>
#include<vector>
using namespace std;



auto func()
{
    tuple<int,string,float> m1_tuple = {34,"string inside tuple",8.9};
    vector<tuple<int,float,char,bool>> arr_tuple;

    for(const auto& i:{4,1,5,0,13})
    {
        arr_tuple.push_back({i*2+1,(float)(i*2.6+0.7),(char)(i+0x49),(bool)i});
    }
    std::cout << "get<0>(m1_tuple) : " << get<0>(m1_tuple) << endl;

    for(const auto& i:arr_tuple)
    {
        std::cout << "get<0> : " << get<0>(i) << " get<1> : " << get<1>(i) << " get<2> : " 
                                 << get<2>(i) << " get<3> : " << get<bool>(i) << endl;
    }
    return arr_tuple;
}

int main()
{
    auto&& func_out = func();

    std::cout << "in main - " << "get<float>(func_out[4]): " <<  get<float>(func_out[4]) << endl;

}