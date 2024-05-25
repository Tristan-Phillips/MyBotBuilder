cmake_minimum_required(VERSION 3.5)

project(MyBotBuilder VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

# Add the DPP library
include(FetchContent)
FetchContent_Declare(
  dpp
  GIT_REPOSITORY https://github.com/brainboxdotcc/DPP.git
  GIT_TAG        master
)
FetchContent_MakeAvailable(dpp)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(MyBotBuilder
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        bot.h bot.cpp
        discordbot.h discordbot.cpp
        telegrambot.h telegrambot.cpp
        botfactory.h botfactory.cpp
        commandhandler.h commandhandler.cpp
        config.h config.cpp
        user.h user.cpp
        logger.h logger.cpp
        scheduler.h scheduler.cpp
        discordconfig.h discordconfig.cpp
        telegramconfig.h telegramconfig.cpp
        Config/discord.json Config/telegram.json Config/user.json
        jsonhandler.h jsonhandler.cpp
        settingsui.h settingsui.cpp
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET MyBotBuilder APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(MyBotBuilder SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(MyBotBuilder
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(MyBotBuilder PRIVATE Qt${QT_VERSION_MAJOR}::Widgets dpp)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.MyBotBuilder)
endif()
set_target_properties(MyBotBuilder PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS MyBotBuilder
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(MyBotBuilder)
endif()
