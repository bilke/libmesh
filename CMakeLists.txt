cmake_minimum_required(VERSION 2.8.11)
project(libmesh)

include_directories(
	${CMAKE_SOURCE_DIR}/include
	${CMAKE_SOURCE_DIR}/contrib/eigen/eigen
	${CMAKE_SOURCE_DIR}/contrib/eigen/3.2.5
	${CMAKE_SOURCE_DIR}/contrib/metis/GKlib
	${CMAKE_SOURCE_DIR}/contrib/metis/include
)

if(NOT MSVC)
	add_definitions ("-Wno-c++11-extensions")
endif()

add_subdirectory(src)
if(USE_METIS)
	add_subdirectory(contrib/metis/libmetis)
	add_subdirectory(contrib/metis/GKLib)
	add_definitions(-DLIBMESH_HAVE_METIS)
endif()

add_subdirectory(examples/adaptivity/adaptivity_ex1)
add_subdirectory(examples/introduction/introduction_ex1)
