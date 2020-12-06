
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
    
    cout << strCharB_ << endl;
    
    cout <<sizeof(strCharB_) << endl;
    return 0;

}

#include <cstring>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<unsigned char> vecData_ = {65, 66, 67};
    // for (size_t i = 0; i < 10; i++)
    // {
    //     /* code */
    //     vecData_.push_back((unsigned char) i + 65);
    //     cout << vecData_[i] << endl;
    // }

    //vector<char>-->char*转换
    unsigned char *strCharB_ = &vecData_[0];

    cout << strlen((const char *)strCharB_) << endl;

    return 0;
}

cl_program clCreateProgramWithBinary(cl_context context,
                                     cl_uint num_devices,
                                     const cl_device_id *device_list,
                                     const size_t *lengths,
                                     const unsigned char **binaries,
                                     cl_int *binary_status,
                                     cl_int *errcode_ret) {

    auto func::mindspore::lite::opencl::clCreateProgramWithBinary;
    MS_ASSERT(func != nullptr);
    return func(context, num_devices, device_list, lengths, binaries, binary_status, errcode_ret);
}





// cl_int ret = CL_SUCCESS;
// size_t binary_size = sizeof(binaries);
// cl::Program program = clCreateProgramWithBinary(context(), 1, device(), &binarySize, (const unsigned char **)&binary, NULL, ret)
// if (ret != CL_SUCCESS) {
//     #TODO error code
// }
// #TODO buildprogram


class MyCLProgram public cl::program
{
    MyCLProgram(const Context &context,
                const Device &devices,
                const unsigned char *binary)
    {
        cl_int error;
        size_t binary_size = strlen((const char *)binaries);
        object_ = ::clCreateProgramWithBinary(context(), 1, device(), &binarySize, (const unsigned char **)&binary, NULL, &error)

        detail::errHandler(error, __CREATE_PROGRAM_WITH_BINARY_ERR);
        if (err != NULL)
        {
            *err = error;
        }
    }
}


cl::Program OpenCLRuntime::CreateProgramFromBinary(const unsigned char* binary)
{
    MyCLProgram program = MyCLProgram(*context_, *device_, binary);
    bool status = BuildProgram(default_build_opts_, program);
    if (!status)
    {
        MS_LOG(ERROR) << "Build program with binary failed!";
    }
    return program;
}


const unsigned char* ProgramMap::GetBinary(std::string key) {
    // TODO find
    return Map.at(i)
}
