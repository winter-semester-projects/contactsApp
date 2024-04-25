add_executable(Contacts_App ${SOURCES})

qt_add_executable(Contacts_App
                main.cpp
                mainwindow.cpp
                mainwindow.ui 
                 )

set_target_properties(Contacts_App PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)

target_link_libraries(Contacts_App PRIVATE Qt6::Widgets
    Qt6::Core
    Qt6::Gui
)