################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
captivate/BASE/%.obj: ../captivate/BASE/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccs1250/ccs/tools/compiler/ti-cgt-msp430_21.6.1.LTS/bin/cl430" -vmspx --code_model=large --data_model=large -O3 --opt_for_speed=0 --use_hw_mpy=F5 --include_path="C:/ti/ccs1250/ccs/ccs_base/msp430/include" --include_path="C:/Users/Abhinav Komanduri/workspace_v12/CapTest_Peripheral" --include_path="C:/Users/Abhinav Komanduri/workspace_v12/CapTest_Peripheral/driverlib" --include_path="C:/Users/Abhinav Komanduri/workspace_v12/CapTest_Peripheral/driverlib/MSP430FR2xx_4xx" --include_path="C:/Users/Abhinav Komanduri/workspace_v12/CapTest_Peripheral/mathlib" --include_path="C:/Users/Abhinav Komanduri/workspace_v12/CapTest_Peripheral/captivate" --include_path="C:/Users/Abhinav Komanduri/workspace_v12/CapTest_Peripheral/captivate/ADVANCED" --include_path="C:/Users/Abhinav Komanduri/workspace_v12/CapTest_Peripheral/captivate/BASE" --include_path="C:/Users/Abhinav Komanduri/workspace_v12/CapTest_Peripheral/captivate/COMM" --include_path="C:/Users/Abhinav Komanduri/workspace_v12/CapTest_Peripheral/captivate_app" --include_path="C:/Users/Abhinav Komanduri/workspace_v12/CapTest_Peripheral/captivate_config" --include_path="C:/ti/ccs1250/ccs/tools/compiler/ti-cgt-msp430_21.6.1.LTS/include" --advice:power="none" --advice:hw_config=all --define=__MSP430FR2676__ --define=_FRWP_ENABLE --define=_INFO_FRWP_ENABLE --define=TARGET_IS_MSP430FR2XX_4XX -g --gcc --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="captivate/BASE/$(basename $(<F)).d_raw" --obj_directory="captivate/BASE" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


