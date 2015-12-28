file(GLOB TESTS "test_*.cpp")
foreach(T_FILE ${TESTS})
    get_filename_component(T_NAME ${T_FILE} NAME_WE)
    add_executable(${T_NAME} ${T_FILE})
    add_test(NAME ${T_NAME} COMMAND ${T_NAME})
    add_definitions(-DBOOST_TEST_DYN_LINK)
    set_property(TARGET ${T_NAME} PROPERTY CXX_STANDARD 11)
    set_property(TARGET ${T_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)
    target_link_libraries(${T_NAME} ${PROJECT_NAME} ${ADDITIONAL_LIBS})
endforeach(T_FILE ${TESTS})

#configure_file(xmltv.dtd ${CMAKE_CURRENT_BINARY_DIR}/xmltv.dtd COPYONLY)

