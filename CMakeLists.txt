cmake_minimum_required(VERSION 3.24)
project(C C)

set(CMAKE_C_STANDARD 11)

link_libraries(libeasyx.a)

file (GLOB files test/*.c)

foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.c\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()

file (GLOB files test/*.cpp)

foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()

