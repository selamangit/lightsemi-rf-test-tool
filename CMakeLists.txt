cmake_minimum_required(VERSION 3.20)
project(lightsemi)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(CMAKE_PREFIX_PATH "D:/QT/Qt5.14.2/5.14.2/mingw73_64")

aux_source_directory(src/ SRC_FILES)
file(GLOB FILES RELATIVE ${PROJECT_SOURCE_DIR} include/*.h)

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED
        SerialPort
        )
include_directories(include/)
add_executable(lightsemi

        WIN32
        # 用于发行版时取消掉调试窗口
        ${SRC_FILES}
        ${FILES}
        )
target_link_libraries(lightsemi
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::SerialPort
        )

#if (WIN32)
#    set(DEBUG_SUFFIX)
#    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
#    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
#        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
#        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
#            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
#        endif ()
#    endif ()
#    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
#        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
#                COMMAND ${CMAKE_COMMAND} -E make_directory
#                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
#        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
#                COMMAND ${CMAKE_COMMAND} -E copy
#                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
#                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
#    endif ()
#    foreach (QT_LIB Core Gui Widgets SerialPort)
#        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
#                COMMAND ${CMAKE_COMMAND} -E copy
#                "${QT_INSTALL_PATH}/bin/Qt5${QT_LIB}${DEBUG_SUFFIX}.dll"
#                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
#    endforeach (QT_LIB)
#endif ()