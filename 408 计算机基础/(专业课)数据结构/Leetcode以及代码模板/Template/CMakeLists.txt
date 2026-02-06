message(STATUS ">>> Template CMAKE LOADED <<<")
get_property(allTargets DIRECTORY PROPERTY BUILDSYSTEM_TARGETS)


add_subdirectory(Chap5_Tree)

message(STATUS "ROOT targets = ${allTargets}")
message(STATUS "*** Exiting 1-level folder: Chap5树")