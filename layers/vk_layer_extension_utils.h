/* Copyright (c) 2015-2016 The Khronos Group Inc.
 * Copyright (c) 2015-2016 Valve Corporation
 * Copyright (c) 2015-2016 LunarG, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and/or associated documentation files (the "Materials"), to
 * deal in the Materials without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Materials, and to permit persons to whom the Materials
 * are furnished to do so, subject to the following conditions:
 *
 * The above copyright notice(s) and this permission notice shall be included
 * in all copies or substantial portions of the Materials.
 *
 * THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 *
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE MATERIALS OR THE
 * USE OR OTHER DEALINGS IN THE MATERIALS
 *
 * Author: Courtney Goeltzenleuchter <courtney@LunarG.com>
 *
 */

#include "vulkan/vk_layer.h"

#ifndef LAYER_EXTENSION_UTILS_H
#define LAYER_EXTENSION_UTILS_H

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

/*
 * This file contains static functions for the generated layers
 */
extern "C" {

VkResult util_GetExtensionProperties(
        const uint32_t count,
        const VkExtensionProperties *layer_extensions,
        uint32_t* pCount,
        VkExtensionProperties* pProperties);

VkResult util_GetLayerProperties(
        const uint32_t count,
        const VkLayerProperties *layer_properties,
        uint32_t* pCount,
        VkLayerProperties* pProperties);

} // extern "C"
#endif // LAYER_EXTENSION_UTILS_H

