project(VEngine-Launcher)

include_directories(
	${CMAKE_SOURCE_DIR}/external/shiftutil/include
)

file(GLOB PROJECT_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES
	OUTPUT_NAME "VEngineLauncher"
)