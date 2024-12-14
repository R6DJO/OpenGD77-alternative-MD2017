Pushd ..\..\MD2017_firmware\application\include\user_interface\languages\src
gcc -Wall -O2 -I../ -o languages_builder languages_builder.c
languages_builder.exe
popd

tar.exe -a -c -f ..\..\MD2017_firmware\MD2017_FW\OpenMD2017.zip -C ..\..\MD2017_firmware\MD2017_FW OpenMD2017.bin -C ..\..\MD2017_firmware\application\include\user_interface\languages\src\ *.gla

tar.exe -a -c -f ..\..\MD2017_firmware\JA_MD2017_FW\OpenMD2017_Japanese.zip -C ..\..\MD2017_firmware\JA_MD2017_FW OpenMD2017_Japanese.bin -C ..\..\MD2017_firmware\application\include\user_interface\languages\src\ *.gla

pause