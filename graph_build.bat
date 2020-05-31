call vcvarsall.bat

cl.exe /EHsc %1 /link /ltcg /nodefaultlib:libcmt glfwbgi_vs2015.lib "kernel32.lib" "user32.lib" "gdi32.lib" "winspool.lib" "comdlg32.lib" "advapi32.lib" "shell32.lib" "ole32.lib" "oleaut32.lib" "uuid.lib" "odbc32.lib" "odbccp32.lib" "opengl32.lib" "msvcrt.lib"
