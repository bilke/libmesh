cmake_minimum_required(VERSION 2.8.11)
project(libmesh)

include_directories(
	${CMAKE_SOURCE_DIR}/include
	${CMAKE_SOURCE_DIR}/contrib/eigen/eigen
)

if(NOT MSVC)
	add_definitions ("-Wno-c++11-extensions")
endif()

add_subdirectory(src)

add_subdirectory(examples/adaptivity/adaptivity_ex1)
add_subdirectory(examples/introduction/introduction_ex1)
