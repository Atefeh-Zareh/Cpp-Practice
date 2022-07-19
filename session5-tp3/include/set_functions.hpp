#ifndef __SET_FUNCTIONS__
#define __SET_FUNCTIONS__

#include <vector>

inline void set_intersection_nt(std::vector<int>::const_iterator a_begin, 
                         std::vector<int>::const_iterator a_end, 
                         std::vector<int>::const_iterator b_begin, 
                         std::vector<int>::const_iterator b_end,
                         std::back_insert_iterator<std::vector<int>> c_begin)
{
    for(auto a = a_begin ; a< a_end; a++){
        for(auto b = b_begin ; b< b_end; b++){
            if(*a == *b){
                c_begin = *a;
            }
        }
    }

}


inline void set_union_nt(std::vector<int>::const_iterator a_begin, 
                  std::vector<int>::const_iterator a_end, 
                  std::vector<int>::const_iterator b_begin, 
                  std::vector<int>::const_iterator b_end,
                  std::back_insert_iterator<std::vector<int>> c_begin)
{
    for(auto a = a_begin ; a< a_end; a++){
        c_begin = *a;
    }

    for(auto b = b_begin ; b< b_end; b++){
        bool exist = false;
        for(auto a = a_begin ; a< a_end; a++){
            if(*a == *b){
                exist = true;
                break;
            }
        }
        if(!exist){
            c_begin = *b;
        }
    }
}

// Écrire les fonctions set_intersect_t() et set_union_t() ici
template<class T, class O>
 void set_intersection_t(T a_begin,
                               T a_end,
                               T b_begin,
                               T b_end,
                               O c_begin)
{
    for(auto a = a_begin ; a< a_end; a++){
        for(auto b = b_begin ; b< b_end; b++){
            if(*a == *b){
                c_begin = *a;
            }
        }
    }

}

template<class T, class O>
void set_union_t(T a_begin,
                        T a_end,
                        T b_begin,
                        T b_end,
                        O c_begin)
{
    for(auto a = a_begin ; a< a_end; a++){
        c_begin = *a;
    }

    for(auto b = b_begin ; b< b_end; b++){
        bool exist = false;
        for(auto a = a_begin ; a< a_end; a++){
            if(*a == *b){
                exist = true;
                break;
            }
        }
        if(!exist){
            c_begin = *b;
        }
    }
}


#endif
