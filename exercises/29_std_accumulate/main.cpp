#include "../exercise.h"
#include <numeric>

// READ: `std::accumulate` <https://zh.cppreference.com/w/cpp/algorithm/accumulate>

int main(int argc, char **argv) {
    using DataType = float;
    int shape[]{1, 3, 224, 224};
    // TODO: 调用 `std::accumulate` 计算：
    //       - 数据类型为 float；
    //       - 形状为 shape；
    //       - 连续存储；
    //       的张量占用的字节数
    // int size = 
    // 计算张量的元素个数
    int num_elements = std::accumulate(shape, shape + 4, 1, std::multiplies<int>());

    // 计算每个元素的字节数
    int element_size = sizeof(DataType);

    // 计算张量占用的总字节数
    int size = num_elements * element_size;
    ASSERT(size == 602112, "4x1x3x224x224 = 602112");
    return 0;
}
