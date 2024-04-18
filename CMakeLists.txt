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
    add_executable (${exe} ${file}
            预处理/宏定义.c
            预处理/宏定义.c
            C语言程序设计/C语言预测卷/不算偶数的阶乘.c
            "C语言程序设计/C语言预测卷/卷4/卷4-填空题 7.c"
            "C语言程序设计/C语言预测卷/卷4/卷4-填空题 2.c"
            "C语言程序设计/C语言预测卷/卷4/卷4-读程序写结果 16.c"
            "C语言程序设计/C语言预测卷/卷4/卷4-读程序写结果 17.c"
            "C语言程序设计/C语言预测卷/卷4/卷4-读程序写结果 18.c"
            "C语言程序设计/C语言预测卷/卷4/卷4-读程序写结果 19.c"
            "C语言程序设计/C语言预测卷/卷4/卷4-程序填空 21.c"
            "C语言程序设计/C语言预测卷/卷4/卷4-程序填空 22.c"
            "C语言程序设计/C语言预测卷/卷4/卷4-程序填空 23.c"
            "C语言程序设计/C语言预测卷/卷4/卷4-程序设计 24.c"
            "C语言程序设计/C语言预测卷/卷4/卷4-程序设计 25.c")
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()

