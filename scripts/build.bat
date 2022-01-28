cd "%~dp0/../build"

cmake "%~dp0/../"
if %errorlevel% neq 0 exit /b %errorlevel%

cmake --build "%~dp0/../build"
if %errorlevel% neq 0 exit /b %errorlevel%

"%~dp0/../build/Debug/test.exe"
if %errorlevel% neq 0 exit /b %errorlevel%