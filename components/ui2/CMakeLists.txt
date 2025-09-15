# SPDX-FileCopyrightText: 2022 atanisoft (github.com/atanisoft)
#
# SPDX-License-Identifier: MIT
#

cmake_minimum_required(VERSION 3.20)

# 设置组件名称
set(COMPONENT_NAME ui2)

# 收集所有源文件（递归搜索）
file(GLOB_RECURSE SOURCES 
    "*.c"
    "guider_customer_fonts/*.c"
    "guider_fonts/*.c"
    "images/*.c"
)

# 设置包含目录
set(INCLUDE_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}                      # 当前目录
    ${CMAKE_CURRENT_SOURCE_DIR}/guider_customer_fonts  # 自定义字体目录
    ${CMAKE_CURRENT_SOURCE_DIR}/guider_fonts           # 字体目录
)

# 注册组件 - 修正REQUIRES参数格式
idf_component_register(
    SRCS ${SOURCES}  
    INCLUDE_DIRS ${INCLUDE_DIRS}  # 确保包含这个参数
    REQUIRES lvgl esp_timer freertos driver led_strip # 移除引号
)
