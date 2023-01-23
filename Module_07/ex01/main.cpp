#include "iter.hpp"

// int main(void)
// {
//     int array[5] = {1, 2, 3, 4, 5};
//     iter(array, 5, print);
//     return (0);
// }

class Awesome
{
    public:
        Awesome( void ) : _n( 42 ) { return; }
        int get( void ) const { return this->_n; }
    private:
        int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main(void)
{
    int tab[] = {0, 1, 2, 3, 4};
    Awesome tab2[5];
    iter(tab, 5, print);
    iter(tab2, 5, print);

    return (0);
}