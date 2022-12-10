cmake_minimum_required(VERSION 3.24)

add_executable(dr_web
        main.cpp
        ${HEADERS_DIR}/IDictionary.hpp
        ${HEADERS_DIR}/Map.hpp
        ${HEADERS_DIR}/Tree.hpp
        ${HEADERS_DIR}/Inot_found_exception.hpp
        ${HEADERS_DIR}/NotFoundExc.hpp)

target_include_directories(dr_web PUBLIC ${HEADERS_DIR})