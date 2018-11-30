cmake_minimum_required (VERSION 3.5.1)

set(PROJECT_NAME  Project_libs)
project (${PROJECT_NAME})

# Put here comilated libraries
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)

set(LIBRARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib)

# static library
set(LIBSWAP_PATH
    ${CMAKE_CURRENT_SOURCE_DIR}/swap
    )
set(LIBSWAP_SOURCE_FILES
    ${LIBSWAP_PATH}/swap.c
    )
#add_library(libswap STATIC ${LIBSWAP_SOURCE_FILES})

# shared library
set(LIBSHOW_PATH
    ${CMAKE_CURRENT_SOURCE_DIR}/show
    )
set(LIBSHOW_SOURCE_FILES
    ${LIBSHOW_PATH}/show.c
    )
#add_library(libshow SHARED ${LIBSHOW_SOURCE_FILES})

find_library(SWAP_LIB NAME liblibswap.a  PATHS ${LIBRARY_DIR})
find_library(SHOW_LIB NAME liblibshow.so PATHS ${LIBRARY_DIR})

set(LINK_LIBRARIES)
list(APPEND LINK_LIBRARIES -Bstatic)
#list(APPEND LINK_LIBRARIES ${LIBRARY_DIR}/liblibswap.a)
list(APPEND LINK_LIBRARIES ${SWAP_LIB})
list(APPEND LINK_LIBRARIES -Bdynamic)
#list(APPEND LINK_LIBRARIES ${LIBRARY_DIR}/liblibshow.so)
list(APPEND LINK_LIBRARIES ${SHOW_LIB})

set(SOURCE_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.c
    )

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src
                    ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME} ${SOURCE_FILES}) 
target_link_libraries(${PROJECT_NAME} ${LINK_LIBRARIES})
#target_include_directories(${PROJECT_NAME} PUBLIC ${LIBRARY_DIR})
#target_include_directories(${PROJECT_NAME} PUBLIC ${SWAP_LIB} ${SHOW_LIB})
#target_include_directories(${PROJECT_NAME} PUBLIC libshow libswap)
#add_dependencies(${PROJECT_NAME} ${SWAP_LIB} ${SHOW_LIB})
