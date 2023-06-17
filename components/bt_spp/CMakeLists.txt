idf_component_register(SRCS "bt_spp.c"
                    INCLUDE_DIRS "include" REQUIRES bt nokia_driver)
target_compile_options(${COMPONENT_LIB} PRIVATE "-Wno-format")