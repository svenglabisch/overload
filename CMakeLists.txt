cmake_minimum_required (VERSION 2.6) 
project (proj) 

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")

set(PROJ_NAME "proj")



FILE(GLOB FILES_CPP "*.cpp")



SET_TARGET_PROPERTIES(${PROJ_NAME_FASTCGI} PROPERTIES COMPILE_FLAGS -DSAPI_FASTCGI)

add_executable (${PROJ_NAME}
    ${FILES_CPP}
)

