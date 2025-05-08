

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

class Span {
    private:
        unsigned int _n;
        std::vector<int> _v;
        
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &copy);
        ~Span();
        Span &operator=(const Span &copy);
        void addNumber(int n);
        long long shortestSpan();
        long long longestSpan();
        void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};
                    
#endif