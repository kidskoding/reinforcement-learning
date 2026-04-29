#include <iostream>
#include <torch/torch.h>

int main() {
    torch::Tensor tensor = torch::rand({2, 3});
    tensor.ones_like();
    std::cout << tensor << "\n";
}
