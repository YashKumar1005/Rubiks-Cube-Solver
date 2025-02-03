cmake_minimum_required(VERSION 3.30)
project(RubiksCubeSolver)

set(CMAKE_CXX_STANDARD 20)

add_executable(RubiksCubeSolver
        Model/RubiksCube.h
        Model/RubiksCube.cpp
        Model/RubiksCube3DArray.cpp
        main.cpp
        Model/RubiksCube1DArray.cpp
        Model/RubiksCubeBitboard.cpp
        Solver/DFSSolver.h
        Solver/BFSSolver.h
        Solver/IDDFSSolver.h
        Solver/IDAstarSolver.h
        PatternDatabases/NibbleArray.h
        PatternDatabases/NibbleArray.cpp
        PatternDatabases/PatternDatabase.h
        PatternDatabases/PatternDatabase.cpp
        PatternDatabases/math.h
        PatternDatabases/math.cpp
        PatternDatabases/PermutationIndexer.h
        PatternDatabases/CornerPatternDatabase.h
        PatternDatabases/CornerPatternDatabase.cpp
        PatternDatabases/CornerDBMaker.h
        PatternDatabases/CornerDBMaker.cpp)

