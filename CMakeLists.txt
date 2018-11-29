cmake_minimum_required (VERSION 2.6)

set(PROJECT_NAME  Project1)
project (${PROJECT_NAME})

set(LIBSWAP_SOURCE_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/swap/swap.c
    #${CMAKE_CURRENT_SOURCE_DIR}/swap/swap.h
    )

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)
#add_library(libswap STATIC ${LIBSWAP_SOURCE_FILES})
add_library(libswap SHARED ${LIBSWAP_SOURCE_FILES})

set(SOURCE_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.c
    )

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(${PROJECT_NAME} ${SOURCE_FILES}) 
target_link_libraries(${PROJECT_NAME} PUBLIC libswap)
add_dependencies(${PROJECT_NAME} libswap)
