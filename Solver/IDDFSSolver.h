#ifndef IDDFSSOLVER_H
#define IDDFSSOLVER_H

#include<bits/stdc++.h>
#include "../Model/RubiksCube.h"
#include "DFSSolver.h"

template<typename T, typename H>
class IDDFSSolver {
private:
    int max_search_depth;
    vector<RubiksCube::MOVE> moves;
public:
    T rubikscube;

    IDDFSSolver(T _rubikscube,int _max_search_depth) {
        rubikscube = _rubikscube;
        max_search_depth = _max_search_depth;
    }

    vector<RubiksCube::MOVE> solve() {
        for (int i=1;i<=max_search_depth;i++) {
            DFSSolver<T, H> dfsSolver(rubikscube,i);
            moves=dfsSolver.solve();
            if (dfsSolver.rubikscube.isSolved()) {
                rubikscube = dfsSolver.rubikscube;
                break;
            }
        }
        return moves;
    }
};



#endif //IDDFSSOLVER_H
