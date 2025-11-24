cmake_minimum_required(VERSION 3.16)

project(AquarianProject LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets )
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets )


add_executable(AquarianProject
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow_ui.h
    engine.h
    engine.cpp
    engine_setting.h
    engine_timeline.h
    engine_controller.h
    engine_handle.h engine_handle.cpp
)
target_link_libraries(AquarianProject
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Widgets
)
include(GNUInstallDirs)
install(TARGETS AquarianProject
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
