#ifndef DFS_SOLVER_H
#define DFS_SOLVER_H

#include<bits/stdc++.h>
#include "../Model/RubiksCube.h"

template<typename T, typename H>

class DFSSolver {
private:
    vector<RubiksCube::MOVE> moves;
    int max_search_depth;

    bool dfs(int dep) {
        if (rubikscube.isSolved()) return true;
        if (dep > max_search_depth) return false;
        for (int i=0;i<18;i++) {
            rubikscube.move(RubiksCube::MOVE(i));
            moves.push_back(RubiksCube::MOVE(i));
            if (dfs(dep+1)) return true;
            moves.pop_back();
            rubikscube.invert(RubiksCube::MOVE(i));
        }
        return false;
    }

public:
    T rubikscube;

    DFSSolver(T _rubiksCube,int _max_search_depth=8) {
        rubikscube = _rubiksCube;
        max_search_depth = _max_search_depth;
    }

    vector<RubiksCube::MOVE> solve() {
        dfs(1);
        return moves;
    }
};

#endif