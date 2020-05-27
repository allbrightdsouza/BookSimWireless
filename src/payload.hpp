#include <iostream>
#include <stack>

#include "booksim.hpp"
#include "outputset.hpp"
#include "booksim.hpp"
#include "flit.hpp"
#include <vector>

class Payload {
    public:
        vector<Flit *> _flits;
        bool watch;
        int id;

        void AddFlits(Flit * f);
};