
add_library(treasureV1_static STATIC
    source/goldEgg.cpp
    source/holyGrail.cpp)

target_include_directories(treasureV1_static
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE
    source
    )

set_property(TARGET treasureV1_static
    PROPERTY CXX_STANDARD 11)

set_property(TARGET treasureV1_static
    PROPERTY POSITION_INDEPENDENT_CODE ON)

add_library(treasureV1_shared SHARED
    source/goldEgg.cpp
    source/holyGrail.cpp)

target_include_directories(treasureV1_shared
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE
    source
    )

set_property(TARGET treasureV1_shared
    PROPERTY CXX_STANDARD 11)