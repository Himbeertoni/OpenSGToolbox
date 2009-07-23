# Set directory paths
SET(TOOLBOX_BASE_DIR "/Users/dtnaylor/Documents/Work/opensgtoolbox")
SET(TOOLBOX_INSTALL_DIR "/Users/dtnaylor/Documents/Work/opensgtoolbox/trunk/Builds/Apple")
SET(OPENSG_BASE_DIR "/Users/dtnaylor/Documents/Work/OpenSGInstall")
SET(BOOST_BASE_DIR "/Users/dtnaylor/Documents/Work/Boost")
SET(ODE_BASE_DIR "/Users/dtnaylor/Documents/Work/ode-0.11.1/Apple_INSTALL")
SET(INSTALLER_BASE_DIR "/Users/dtnaylor/Documents/Work/opensgtoolbox/trunk/Release/Installer_Full")

# Check directory paths
IF(NOT EXISTS ${TOOLBOX_BASE_DIR})
   MESSAGE("ERROR (TOOLBOX_BASE_DIR):  \"${TOOLBOX_BASE_DIR}\"  is not a valid directory.")
ENDIF(NOT EXISTS ${TOOLBOX_BASE_DIR})

IF(NOT EXISTS ${TOOLBOX_INSTALL_DIR})
   MESSAGE("ERROR (TOOLBOX_INSTALL_DIR):  \"${TOOLBOX_INSTALL_DIR}\"  is not a valid directory.")
ENDIF(NOT EXISTS ${TOOLBOX_INSTALL_DIR})

IF(NOT EXISTS ${OPENSG_BASE_DIR})
   MESSAGE("ERROR (OPENSG_BASE_DIR):  \"${OPENSG_BASE_DIR}\"  is not a valid directory.")
ENDIF(NOT EXISTS ${OPENSG_BASE_DIR})

IF(NOT EXISTS ${BOOST_BASE_DIR})
   MESSAGE("ERROR (BOOST_BASE_DIR):  \"${BOOST_BASE_DIR}\"  is not a valid directory.")
ENDIF(NOT EXISTS ${BOOST_BASE_DIR})

IF(NOT EXISTS ${ODE_BASE_DIR})
   MESSAGE("ERROR (ODE_BASE_DIR):  \"${ODE_BASE_DIR}\"  is not a valid directory.")
ENDIF(NOT EXISTS ${ODE_BASE_DIR})

IF(NOT EXISTS ${INSTALLER_BASE_DIR})
   MESSAGE("ERROR (INSTALLER_BASE_DIR):  \"${INSTALLER_BASE_DIR}\"  is not a valid directory.")
ENDIF(NOT EXISTS ${INSTALLER_BASE_DIR})


# Get revision number
FIND_PACKAGE(Subversion)
IF(Subversion_FOUND)
   Subversion_WC_INFO(${TOOLBOX_BASE_DIR}/trunk Project)
   MESSAGE("Current revision is ${Project_WC_REVISION}")
ENDIF(Subversion_FOUND)

# Get Apple architecture
EXEC_PROGRAM(uname ARGS -m OUTPUT_VARIABLE _CMAKE_OSX_MACHINE)
IF("${_CMAKE_OSX_MACHINE}" MATCHES "Power")
  SET(_CMAKE_OSX_MACHINE ppc)
ELSE("${_CMAKE_OSX_MACHINE}" MATCHES "Power")
  SET(_CMAKE_OSX_MACHINE intel)
ENDIF("${_CMAKE_OSX_MACHINE}" MATCHES "Power")
MESSAGE("Apple Architecture: ${_CMAKE_OSX_MACHINE}")

# Name and version
FILE(STRINGS ${TOOLBOX_BASE_DIR}/trunk/VERSION VersionFile)
STRING(REGEX MATCH "([0-9]+)\\.([0-9]+)\\.([0-9]+)" VersionMatch ${VersionFile})
SET(CPACK_PACKAGE_VERSION ${CMAKE_MATCH_0})
SET(CPACK_PACKAGE_VERSION_MAJOR ${CMAKE_MATCH_1})
SET(CPACK_PACKAGE_VERSION_MINOR ${CMAKE_MATCH_2})
SET(CPACK_PACKAGE_VERSION_PATCH ${CMAKE_MATCH_3})
MESSAGE("Version: ${CMAKE_MATCH_0}")
SET(CPACK_PACKAGE_FILE_NAME "OpenSGToolbox-${CPACK_PACKAGE_VERSION}-${Project_WC_REVISION}-OSX-${_CMAKE_OSX_MACHINE}")
SET(CPACK_PACKAGE_NAME "OpenSGToolbox")
SET(CPACK_PACKAGE_VENDOR "VRAC")


# Resource files
SET(CPACK_RESOURCE_FILE_LICENSE "${INSTALLER_BASE_DIR}/../../LICENSE.txt")
SET(CPACK_RESOURCE_FILE_README "${INSTALLER_BASE_DIR}/../../README.txt")
SET(CPACK_PACKAGE_DESCRIPTION_FILE "${INSTALLER_BASE_DIR}/DESCRIPTION.txt")
SET(CPACK_RESOURCE_FILE_WELCOME "${INSTALLER_BASE_DIR}/WELCOME.txt")


# Set up install files directories
SET(INCLUDE_INSTALL_FILES_DIR "${INSTALLER_BASE_DIR}/Install_Files/include")
SET(LIB_INSTALL_FILES_DIR "${INSTALLER_BASE_DIR}/Install_Files/lib")
SET(TUTORIAL_INSTALL_FILES_DIR "${INSTALLER_BASE_DIR}/Install_Files/share/OpenSGToolbox")

IF(EXISTS ${INSTALLER_BASE_DIR}/Install_Files)
	SET(CPACK_INSTALL_COMMANDS "rm -r ${INSTALLER_BASE_DIR}/Install_Files" "mkdir ${INSTALLER_BASE_DIR}/Install_Files")
ELSE(EXISTS ${INSTALLER_BASE_DIR}/Install_Files)
	SET(CPACK_INSTALL_COMMANDS "mkdir ${INSTALLER_BASE_DIR}/Install_Files")
ENDIF(EXISTS ${INSTALLER_BASE_DIR}/Install_Files)

SET(CPACK_INSTALL_COMMANDS ${CPACK_INSTALL_COMMANDS} "mkdir ${INCLUDE_INSTALL_FILES_DIR}" "mkdir ${LIB_INSTALL_FILES_DIR}" "mkdir ${INSTALLER_BASE_DIR}/Install_Files/share" "mkdir ${TUTORIAL_INSTALL_FILES_DIR}")


# Save revision number
SET(CPACK_INSTALL_COMMANDS ${CPACK_INSTALL_COMMANDS} "touch ${TUTORIAL_INSTALL_FILES_DIR}/Revision${Project_WC_REVISION}")


# Process files to install
MACRO(PROCESS_LIBRARY LIBRARY_DIR)

	MESSAGE("Processing files for: ${LIBRARY_DIR}")

	SET(CPACK_INSTALL_COMMANDS ${CPACK_INSTALL_COMMANDS} "cp -r ${LIBRARY_DIR}/include/ ${INCLUDE_INSTALL_FILES_DIR}" "cp -r ${LIBRARY_DIR}/lib/ ${LIB_INSTALL_FILES_DIR}")

ENDMACRO(PROCESS_LIBRARY)




MACRO(PROCESS_TUTORIAL TUTORIAL_LIBRARY_NAME)

	MESSAGE("Processing files for: ${TUTORIAL_LIBRARY_NAME}")

	SET(CPACK_INSTALL_COMMANDS ${CPACK_INSTALL_COMMANDS} "mkdir ${TUTORIAL_INSTALL_FILES_DIR}/${TUTORIAL_LIBRARY_NAME}") 

	FILE(GLOB SOURCE_FILES "${TOOLBOX_BASE_DIR}/trunk/${TUTORIAL_LIBRARY_NAME}/Tutorials/[0-9][0-9]*.cpp")
	FOREACH(FILENAME ${SOURCE_FILES})
  		STRING(LENGTH ${FILENAME} SOURCE_PATH_LENGTH)
   	MATH(EXPR SOURCE_PATH_LENGTH '${SOURCE_PATH_LENGTH}-4')
   	STRING(SUBSTRING ${FILENAME} 0 ${SOURCE_PATH_LENGTH} FILENAME_EXE_PATH )
		SET(FILENAME_EXE_PATH "${FILENAME_EXE_PATH}${CMAKE_EXECUTABLE_SUFFIX}")

		# Copy the .cpp file
		SET(CPACK_INSTALL_COMMANDS ${CPACK_INSTALL_COMMANDS} "cp ${FILENAME} ${TUTORIAL_INSTALL_FILES_DIR}/${TUTORIAL_LIBRARY_NAME}")

		# Copy the executable, if it exists
		IF(EXISTS ${FILENAME_EXE_PATH})
			SET(CPACK_INSTALL_COMMANDS ${CPACK_INSTALL_COMMANDS} "cp ${FILENAME_EXE_PATH} ${TUTORIAL_INSTALL_FILES_DIR}/${TUTORIAL_LIBRARY_NAME}")
		ENDIF(EXISTS ${FILENAME_EXE_PATH})
	ENDFOREACH(FILENAME ${SOURCE_FILES})

	# Copy the CMakeLists.txt file
	IF(EXISTS ${TOOLBOX_BASE_DIR}/trunk/${TUTORIAL_LIBRARY_NAME}/Tutorials/CMakeLists.txt)
		SET(CPACK_INSTALL_COMMANDS ${CPACK_INSTALL_COMMANDS} "cp ${TOOLBOX_BASE_DIR}/trunk/${TUTORIAL_LIBRARY_NAME}/Tutorials/CMakeLists.txt ${TUTORIAL_INSTALL_FILES_DIR}/${TUTORIAL_LIBRARY_NAME}/CMakeLists.txt")
	ENDIF(EXISTS ${TOOLBOX_BASE_DIR}/trunk/${TUTORIAL_LIBRARY_NAME}/Tutorials/CMakeLists.txt)

	# Copy the data folder
	IF(EXISTS ${TOOLBOX_BASE_DIR}/trunk/${TUTORIAL_LIBRARY_NAME}/Tutorials/Data)
		SET(CPACK_INSTALL_COMMANDS ${CPACK_INSTALL_COMMANDS} "mkdir ${TUTORIAL_INSTALL_FILES_DIR}/${TUTORIAL_LIBRARY_NAME}/Data")
		FILE(GLOB DATA_FILES "${TOOLBOX_BASE_DIR}/trunk/${TUTORIAL_LIBRARY_NAME}/Tutorials/Data/*")
		FOREACH(DATAFILE ${DATA_FILES})
			IF(NOT ${DATAFILE} MATCHES ${TOOLBOX_BASE_DIR}/trunk/${TUTORIAL_LIBRARY_NAME}/Tutorials/Data/.svn)
				SET(CPACK_INSTALL_COMMANDS ${CPACK_INSTALL_COMMANDS} "cp ${DATAFILE} ${TUTORIAL_INSTALL_FILES_DIR}/${TUTORIAL_LIBRARY_NAME}/Data")
			ENDIF(NOT ${DATAFILE} MATCHES ${TOOLBOX_BASE_DIR}/trunk/${TUTORIAL_LIBRARY_NAME}/Tutorials/Data/.svn)
		ENDFOREACH(DATAFILE ${DATA_FILES})
	ENDIF(EXISTS ${TOOLBOX_BASE_DIR}/trunk/${TUTORIAL_LIBRARY_NAME}/Tutorials/Data)

ENDMACRO(PROCESS_TUTORIAL)


# Tell CPack where to look for library files
PROCESS_LIBRARY(${OPENSG_BASE_DIR})
PROCESS_LIBRARY(${BOOST_BASE_DIR})
PROCESS_LIBRARY(${ODE_BASE_DIR})
PROCESS_LIBRARY(${TOOLBOX_INSTALL_DIR})


# Tell CPack where to look for tutorial files
PROCESS_TUTORIAL("Animation")
PROCESS_TUTORIAL("Dynamics")
PROCESS_TUTORIAL("Game")
PROCESS_TUTORIAL("Input")
PROCESS_TUTORIAL("Metabolic")
PROCESS_TUTORIAL("ParticleSystem")
PROCESS_TUTORIAL("Physics")
PROCESS_TUTORIAL("Sound")
PROCESS_TUTORIAL("Toolbox")
PROCESS_TUTORIAL("UserInterface")
PROCESS_TUTORIAL("Video")




SET(CPACK_GENERATOR "PackageMaker")
SET(CPACK_PACKAGING_INSTALL_PREFIX "/")
SET(CPACK_PACKAGE_DEFAULT_LOCATION "/usr/local")
SET(CPACK_INSTALLED_DIRECTORIES ${INSTALLER_BASE_DIR}/Install_Files;.)
SET(CPACK_PACKAGE_RELOCATABLE "true")
#SET(CPACK_INSTALL_DIRECTORY "/usr/local")