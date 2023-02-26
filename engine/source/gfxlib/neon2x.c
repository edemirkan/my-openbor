/*
 * OpenBOR - http://www.chronocrash.com
 * -----------------------------------------------------------------------
 * All rights reserved, see LICENSE in OpenBOR root for details.
 *
 * Copyright (c) 2004 - 2012 OpenBOR Team
 */

/**
 * Scales images by 2x using nearest neighbor filtering.  Replaces the old
 * "Simple 2x" filter used in OpenBOR before October 2012, which was licensed
 * under the GPL.
 */

#include "gfx.h"
#include "types.h"
#include "scaler_neon.h"

void Neon2x(u8 *srcPtr, u32 srcPitch, u8 *deltaPtr, u8 *dstPtr, u32 dstPitch, int width, int height)
{
    scale2x2_n16((u8 *)srcPtr, (u8 *)dstPtr, width, height, srcPitch, dstPitch);
}

void Neon2x32(u8 *srcPtr, u32 srcPitch, u8 *deltaPtr, u8 *dstPtr, u32 dstPitch, int width, int height)
{
    scale2x2_n32((u8 *)srcPtr, (u8 *)dstPtr, width, height, srcPitch, dstPitch);
}
