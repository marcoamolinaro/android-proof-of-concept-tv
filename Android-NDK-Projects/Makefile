all:
	@echo "all #1" && \
	cd AstroTV_Android && \
	/home/mirakulo/Projects/Android-NDK/android-ndk-r20/ndk-build all  && \
	cd -
	@echo
	@echo "all #2" && \
	cd AstroTV_DTV_Connector && \
	/home/mirakulo/Projects/Android-NDK/android-ndk-r20/ndk-build all  && \
	cd -
	@echo

clean:
	@echo "clean #1" && \
	cd AstroTV_Android && \
	/home/mirakulo/Projects/Android-NDK/android-ndk-r20/ndk-build clean && \
	cd -
	@echo
	@echo "clean #2" && \
	cd AstroTV_DTV_Connector && \
	/home/mirakulo/Projects/Android-NDK/android-ndk-r20/ndk-build clean && \
	cd -
	@echo

install:
	cp -pv   ./AstroTV_DTV_Connector/obj/local/arm64-v8a/libAstroTV_DTV_Connector.so \
		../android-studio-projects/AstroTV_DTV_Connector/app/libs/arm64-v8a/
	cp -pv   ./AstroTV_DTV_Connector/obj/local/armeabi-v7a/libAstroTV_DTV_Connector.so \
		../android-studio-projects/AstroTV_DTV_Connector/app/libs/armeabi-v7a/
	cp -pv   ./AstroTV_DTV_Connector/obj/local/x86_64/libAstroTV_DTV_Connector.so \
		../android-studio-projects/AstroTV_DTV_Connector/app/libs/x86_64/
	cp -pv   ./AstroTV_DTV_Connector/obj/local/x86/libAstroTV_DTV_Connector.so \
		../android-studio-projects/AstroTV_DTV_Connector/app/libs/x86/

