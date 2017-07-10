
add_library(middleManA_static STATIC
    source/store.cpp)

set_property(TARGET middleManA_static
    PROPERTY CXX_STANDARD 11)

target_include_directories(middleManA_static
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE
    source)

target_link_libraries(middleManA_static treasure_static)
