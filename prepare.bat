@echo OFF

if exist MD2017_firmware\application\source\linkerdata (
	if exist MD2017_firmware\tools\codec_cleaner.exe (
		cd MD2017_firmware\application\source\linkerdata && ..\..\..\tools\codec_cleaner.exe -C
		cd ..\..\..\..
	) else (
		@echo Error: The required tools are not installed in MD2017_firmware/tools, the process cannot be completed.
		exit /b 1
	)
) else (
	@echo Error: Your source tree is incomplete, please fix this.
	exit /b 1
)

exit /b 0
