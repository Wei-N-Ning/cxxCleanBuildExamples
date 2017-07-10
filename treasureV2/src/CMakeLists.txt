
add_library(treasureV2_static STATIC
    source/goldEgg.cpp
    source/holyGrail.cpp)

target_include_directories(treasureV2_static
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE
    source
    )

set_property(TARGET treasureV2_static
    PROPERTY CXX_STANDARD 11)

add_library(treasureV2_shared SHARED
    source/goldEgg.cpp
    source/holyGrail.cpp)

target_include_directories(treasureV2_shared
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE
    source
    )

set_property(TARGET treasureV2_shared
    PROPERTY CXX_STANDARD 11)