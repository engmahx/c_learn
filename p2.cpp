//--------- MAHX ----------------------------
#include<iostream>
#include<tuple>
#include<vector>
using namespace std;

struct p2
{
    vector<tuple<int,float,char,bool>> arr1;
    string t;
};


auto func()
{
    p2 PP;
    
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
    PP.arr1 = arr_tuple;
    PP.t = " - Mahx - ";
    return PP;
}

int main()
{
    {
    auto&& func_out = func();
    std::cout << "in main - " << "get<float>(func_out[4]): " <<  get<float>(func_out.arr1[4]) << endl << endl;
    }
    //---------------
    {
    auto[func_out_arr,func_out_string] = func();
    std::cout << "in main - " << "get<float>(func_out[4]): " <<  get<float>(func_out_arr[4]) << endl << endl;
    }
    //---------------
    char arr_c[6] = {'c','g','y','t','q','u'};

    for(auto& i:arr_c)
    {
        printf("printf  ---  i is'%c' witch is 0x%X - %d\n",i,(int)i,(int)i);
    }

    return 0;
}