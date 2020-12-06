
#include <cstring>
#include <vector>
#include <iostream>
 
using namespace std;
 
int main(int argc, char *argv[])
{
    vector<char>vecData_;
    char const *strCharA_ = "1234";
 
    //char*-->vector<char>转换
    vecData_.insert(vecData_.end(), strCharA_, strCharA_ + strlen(strCharA_));
 
    for (size_t i = 0; i < 4; i++)
    {
        /* code */
        cout << vecData_[i] << endl;
    }
    
    //vector<char>-->char*转换
    char *strCharB_ = &vecData_[0];
    
    cout << strCharB_ << endl;;
    
    return 0;

}
