/*
 * Copyright (c) 2014-2017 Cesanta Software Limited
 * All rights reserved
 */

/*
 * BM222 accelerometer API.
 *
 * See https://www.bosch-sensortec.com/bst/products/all_products/bma222e
 * for more information.
 */

#ifndef CS_MOS_LIBS_BM222_SRC_MGOS_BM222_H_
#define CS_MOS_LIBS_BM222_SRC_MGOS_BM222_H_

#include <stdbool.h>
#include <stdint.h>

#include "mgos_i2c.h"

#ifdef __cplusplus
extern "C" {
#endif

// Open BM222 sensor on a given I2C address.
// Return true on success, false on error.
bool bm222_init(struct mgos_i2c *i2c, uint8_t addr);

// Read sensor values. Return true on success, false on error.
bool bm222_read(struct mgos_i2c *i2c, uint8_t addr, int *x, int *y, int *z);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CS_MOS_LIBS_BM222_SRC_MGOS_BM222_H_ */
