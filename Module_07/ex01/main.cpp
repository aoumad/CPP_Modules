#include "iter.hpp"

int main(void)
{
    std::string s[] = {"Thor", "Odin", "Ragnar", "Floki"};
    iter(s, 4, &arr_lem);

    int arr[] = {1, 2, 3, 4};
    iter(arr, 4, &arr_lem);

    return (0);
}