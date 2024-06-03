cmake_minimum_required(VERSION 3.14)

project(MyBotBuilder LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

# Add the DPP library
include(FetchContent)
FetchContent_Declare(
  dpp
  GIT_REPOSITORY https://github.com/brainboxdotcc/DPP.git
  GIT_TAG        master
)
FetchContent_MakeAvailable(dpp)

FetchContent_Declare(
  pugixml
  GIT_REPOSITORY https://github.com/zeux/pugixml.git
  GIT_TAG        master
)
FetchContent_MakeAvailable(pugixml)

add_executable(MyBotBuilder
  main.cpp
  bot.h bot.cpp
  botfactory.h botfactory.cpp
  botdiscord.h botdiscord.cpp
  terminalmenu.h terminalmenu.cpp
  bottelegram.h bottelegram.cpp
  handlerio.h handlerio.cpp
  handlerxml.h handlerxml.cpp
)
target_link_libraries(MyBotBuilder Qt${QT_VERSION_MAJOR}::Core dpp pugixml)

include(GNUInstallDirs)
install(TARGETS MyBotBuilder
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
