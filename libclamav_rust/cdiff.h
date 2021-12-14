/* Copyright (C) 2021 Cisco Systems, Inc. and/or its affiliates. All rights reserved. */

#ifndef __RDIFF_H
#define __RDIFF_H

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

/**
 * # Safety
 *
 * This function is only meant to be called from sigtool.c
 * If sigtool is ever ported to rust, this function should be
 * rewritten.
 */
int32_t script2cdiff(const char *script, const char *builder, const char *server);

int32_t cdiff_apply(int32_t file_descriptor, uint16_t mode);

#endif /* __RDIFF_H */