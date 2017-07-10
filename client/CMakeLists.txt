
add_executable(client
    main.cpp)

set_property(TARGET client
    PROPERTY CXX_STANDARD 11)

target_link_libraries(client middleManA_shared middleManB_shared)

install(TARGETS client
    LIBRARY DESTINATION ${CMAKE_BINARY_DIR}/test
    RUNTIME DESTINATION ${CMAKE_BINARY_DIR}/test)