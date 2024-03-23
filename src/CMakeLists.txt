add_executable(fireflies
  Firefly.cpp
  Firefly.hpp
  Game.cpp
  Game.hpp
  GlobalSettings.cpp
  GlobalSettings.hpp
  Network.cpp
  Network.hpp
  UiManager.cpp
  UiManager.hpp
  UiSettings.cpp
  UiSettings.hpp
  main.cpp
)

target_link_libraries(fireflies PRIVATE ImGui-SFML::ImGui-SFML)

# Copy DLLs needed for runtime on Windows
if(WIN32)
  if (BUILD_SHARED_LIBS)
    add_custom_command(TARGET fireflies POST_BUILD
      COMMAND ${CMAKE_COMMAND} -E copy_if_different
          $<TARGET_FILE:ImGui-SFML::ImGui-SFML>
          $<TARGET_FILE:sfml-graphics>
          $<TARGET_FILE:sfml-window>
          $<TARGET_FILE:sfml-system>
          $<TARGET_FILE_DIR:fireflies>)
  endif()
endif()
