# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("Homework_18")

set(INCLUDE
	"inc/main.h"
)

set(SRC
	"src/main.cpp"
)

add_executable (Homework_18
	${INCLUDE} 
	${SRC}
 )

target_include_directories(Homework_18
        PUBLIC
        ./inc
        ./src
)
