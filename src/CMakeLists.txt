add_subdirectory(game)
add_subdirectory(engine)

if(VENGINE_DEDICATED)
	add_subdirectory(dedicated)
else()
	add_subdirectory(launcher)
endif()