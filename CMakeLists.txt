cmake_minimum_required( VERSION 2.8 )
project(learnC)

set( CMAKE_BUILD_TYPE "Debug" )
set( CMAKE_CXX_FLAGS "-std=c++11 -O3" )

include_directories(
        ${PROJECT_SOURCE_DIR}
        ${PROJECT_SOURCE_DIR}/include
)

#add_library(SRC_LIB SHARED
#        design_patterns/factory/factory.cpp
#        design_patterns/factory/product.cpp

#        design_patterns/abstract_factory/abstract_product.cpp
#        design_patterns/abstract_factory/abstract_factory.cpp

#        design_patterns/singleton/singleton.cpp

#        design_patterns/builder/builder.cpp
#        design_patterns/builder/director.cpp
#        design_patterns/prototype/prototype.cpp
#        )

#add_executable(test_map test/test_map.cpp)
#target_link_libraries(test_map)
#
#add_executable(test_vector test/test_vector.cpp)
#target_link_libraries(test_vector)

add_executable(
#        test_factory design_patterns/factory/test_factory.cpp
#        test_factory design_patterns/abstract_factory/test_abstract_factory.cpp
#        test_factory design_patterns/singleton/test_singleton.cpp
#        test_factory design_patterns/builder/test_builder.cpp
#        test_factory design_patterns/prototype/test_prototype.cpp
#        design_patterns/factory/factory.cpp
#        design_patterns/factory/product.cpp
#         test_effective_cpp test/test_effective_cpp.cc
#         test_str2int test/test_str2int.cc
        quick_sort algorithm_exercise/quick_sort.cc
        )
target_link_libraries(quick_sort
#        SRC_LIB
        )

add_executable(
        linked_list algorithm_exercise/linked_list.cc
)
target_link_libraries(linked_list
)

add_executable(two_stack_to_queue
        algorithm_exercise/two_stack_to_queue.cc
        algorithm_exercise/two_stack_to_queue.h
)
target_link_libraries(two_stack_to_queue
)