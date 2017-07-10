
add_library(treasure_static STATIC
    source/goldEgg.cpp
    source/holyGrail.cpp)

target_include_directories(treasure_static
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE
    source
    )

set_property(TARGET treasure_static
    PROPERTY CXX_STANDARD 11)

add_library(treasure_shared SHARED
    source/goldEgg.cpp
    source/holyGrail.cpp)

target_include_directories(treasure_shared
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE
    source
    )

set_property(TARGET treasure_shared
    PROPERTY CXX_STANDARD 11)