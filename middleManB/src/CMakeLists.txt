
add_library(middleManB_static STATIC
    source/blackMart.cpp)

set_property(TARGET middleManB_static
    PROPERTY CXX_STANDARD 11)

target_include_directories(middleManB_static
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE
    source)

target_link_libraries(middleManB_static treasure_static)
