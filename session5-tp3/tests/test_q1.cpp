#include "catch.hpp"

#include <vector>
#include <algorithm>
#include "set_functions.hpp"

using namespace std;

TEST_CASE("intersection", "[Q1]")
{
    vector<int> v1 = {1,2,3,4,5,6,7};
    vector<int> v2 = {5, 6, 7, 8, 9, 10};
    vector<int> r;
    vector<int> oracle = {5, 6, 7};

    set_intersection_nt(begin(v1), end(v1), begin(v2), end(v2), back_inserter(r));

    REQUIRE(r == oracle);
}

TEST_CASE("union", "[Q1]")
{
    vector<int> v1 = {1,2,3,4,5,6,7};
    vector<int> v2 = {5, 6, 7, 8, 9, 10};
    vector<int> r;
    vector<int> oracle = {1,2,3,4,5,6,7,8,9,10};

    set_union_nt(begin(v1), end(v1), begin(v2), end(v2), back_inserter(r));
    sort(begin(r), end(r));
    
    REQUIRE(r == oracle);
}

// ajoutez des tests pour verifier l'intersection avec vecteur vide
// et l'union avec vecteur vide


TEST_CASE("intersection - Template", "[Q1]")
{
    vector<int> v1 = {1,2,3,4,5,6,7};
    vector<int> v2 = {5, 6, 7, 8, 9, 10};
    vector<int> r;
    vector<int> oracle = {5, 6, 7};

    set_intersection_t (begin(v1), end(v1), begin(v2), end(v2), back_inserter(r));

    REQUIRE(r == oracle);
}

TEST_CASE("union - Template", "[Q1]")
{
    vector<int> v1 = {1,2,3,4,5,6,7};
    vector<int> v2 = {5, 6, 7, 8, 9, 10};
    vector<int> r;
    vector<int> oracle = {1,2,3,4,5,6,7,8,9,10};

    set_union_nt(begin(v1), end(v1), begin(v2), end(v2), back_inserter(r));
    sort(begin(r), end(r));

    REQUIRE(r == oracle);
}
