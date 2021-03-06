#Define sdk plugin building macro
macro(BUILD_SDK_PLUGIN_MACRO project_name dep_libs)
    if(UNIX)
        #Set rpath
        SET(CMAKE_INSTALL_RPATH "./lib/" "../lib/")
        SET(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
    endif(UNIX)

    set(new_dep_libs ${dep_libs} ${ARGN})
    
    aux_source_directory(. SDK_SRC)
    add_library(${project_name} SHARED ${SDK_SRC})
    add_dependencies(${project_name} ${new_dep_libs})
    set_target_properties(${project_name} PROPERTIES PREFIX "")
    set_target_properties(${project_name} PROPERTIES OUTPUT_NAME_DEBUG "${project_name}_d")
    set_target_properties(${project_name} PROPERTIES
        FOLDER "SDK"
        ARCHIVE_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR}
        RUNTIME_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR}
        LIBRARY_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR}
    )
    target_link_libraries(${project_name} ${new_dep_libs})
endmacro(BUILD_SDK_PLUGIN_MACRO)

###################################################################################################

add_subdirectory(Core)
add_subdirectory(Proto)
add_subdirectory(KernelPlugin)
add_subdirectory(BusPlugin)
add_subdirectory(NetPlugin)
add_subdirectory(UtilityPlugin)
