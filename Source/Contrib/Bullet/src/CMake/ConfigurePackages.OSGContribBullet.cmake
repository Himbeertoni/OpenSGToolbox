MACRO(OSG_CONFIGURE_BULLET)

    IF(OSG_USE_OSGSUPPORT_LIBS AND WIN32)

        #IF(EXISTS ${OSG_SUPPORT_ROOT}/inc/fmod.h)
            #SET(BULLET_INCLUDE_DIR ${OSG_SUPPORT_ROOT}/include CACHE PATH "" FORCE)
        #ENDIF()

        #IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/osgfmodex.lib)
            #SET(BULLET_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/osgode.lib)
        #ENDIF()
        #IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/osggdalD.lib)
            #SET(BULLET_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/osgodeD.lib)
        #ENDIF()

        #IF(BULLET_INCLUDE_DIR)
          #IF(BULLET_LIBRARY_DEBUG OR BULLET_LIBRARY_RELEASE)
            #SET(BULLET_FOUND TRUE)
          #ENDIF()
        #ENDIF()

        #IF(BULLET_FOUND)
          #OSG_ADD_IMPORT_LIB(OSG_BULLET_TARGETS BULLET_LIBRARY)
          #SET(BULLET_LIBRARIES ${OSG_BULLET_TARGETS} CACHE STRING "" FORCE)
        #ENDIF(BULLET_FOUND)

    ENDIF(OSG_USE_OSGSUPPORT_LIBS AND WIN32)

    SET(BULLET_COMPONENTS Dynamics Collision LinearMath SoftBody)
    IF(NOT OSG_USE_OSGSUPPORT_LIBS OR NOT BULLET_FOUND)
        FIND_PACKAGE(Bullet REQUIRED COMPONENTS ${BULLET_COMPONENTS})
    ENDIF(NOT OSG_USE_OSGSUPPORT_LIBS OR NOT BULLET_FOUND)

    IF(BULLET_FOUND)
        OSG_SET(OSG_WITH_BULLET 1)
    ENDIF(BULLET_FOUND)

ENDMACRO(OSG_CONFIGURE_BULLET)
