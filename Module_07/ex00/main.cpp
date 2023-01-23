#include "whatever.hpp"

int main( void )
{
    int a = 2;
    int b = 3;
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}

// class Awesome
// {
//     public:
//         Awesome( void ) : _n(0) {}
//         Awesome( int n ) : _n(n) {}
//         bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
//         bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
//         bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
//         bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
//         bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
//         bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
//         int get( void ) const { return this->_n; }
//     private:
//         int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// int main(void)
// {
//     Awesome a(2), b(4), c(7);
//     // test the operators
//     if (a != c)
//         std::cout << "a != c" << std::endl;
//     a = c;
//     if (a == c)
//         std::cout << "a == c" << std::endl;
//     if (a > b)
//         std::cout << "a > b" << std::endl;
//     if (a < b)
//         std::cout << "a < b" << std::endl;
//     if (b >= a)
//         std::cout << "b >= a" << std::endl;
//     if (b <= a)
//         std::cout << "b <= a" << std::endl;
//     // test the swap
//     std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
//     swap(a, b);
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
//     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// }