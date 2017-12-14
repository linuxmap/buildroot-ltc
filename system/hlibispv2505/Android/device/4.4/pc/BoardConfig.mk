include device/generic/x86/BoardConfig.mk

TARGET_ARCH_VARIANT := x86

TARGET_NO_RADIOIMAGE := true

TARGET_BOARD_PLATFORM := pc

TARGET_BOOTLOADER_BOARD_NAME := pc

TARGET_USERIMAGES_USE_EXT4 := true
TARGET_USERIMAGES_SPARSE_EXT_DISABLED := true
BOARD_SYSTEMIMAGE_PARTITION_SIZE := 536870912
BOARD_USERDATAIMAGE_PARTITION_SIZE := 33554432
BOARD_FLASH_BLOCK_SIZE := 4096

USE_CAMERA_STUB := true
BOARD_USES_GENERIC_AUDIO := true

BOARD_SEPOLICY_DIRS := device/img/pc/selinux
BOARD_SEPOLICY_UNION := file_contexts pvr.te
#ADDED BY JIM
USE_OPENGL_RENDERER := false


MAX_EGL_CACHE_SIZE := 1048576

-include device/img/pc/extras/BoardConfig.mk