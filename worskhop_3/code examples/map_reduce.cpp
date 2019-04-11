#include <algorithm>
#include <vector>
#include <iostream>
#include <functional>
#include <numeric>
#include <iterator>

using namespace std;

template<typename Iterator, typename Map, typename Reduce>
int map_reduce(Iterator first, Iterator last, Map m, Reduce r) {
    Iterator tmp = first;
    while(tmp != last) {
        *tmp = m(*tmp);
        tmp++;
    }
    return r(first, last);
}

template<typename Iterator, 
         typename r_type = typename std::iterator_traits<Iterator>::value_type>
r_type sum(Iterator first, Iterator last) {
    r_type res = *first;
    while(++first != last)
        res += *first;
    return res;
}

int main() {
    vector<int> v = {1,2,3,4,5};
    int res = map_reduce(begin(v), end(v), [](const int& i){
        return i*i;
    }, sum<vector<int>::iterator>);
    cout << res << endl;
}




