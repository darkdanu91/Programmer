@ echo off
title Program 1 - Tukar Dua Bilangan

::masukkan
set /p x="Masukkan bilangan X: "
set /p y="Masukkan bilangan Y: "

::logika
set /a temp

set temp=%x%
set x=%y%
set y=%temp%

::keluaran
echo.
echo Bilangan X sekarang: %x%
echo Bilangan Y sekarang: %y%

pause>nul
