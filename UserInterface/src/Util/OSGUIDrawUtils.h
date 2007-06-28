#ifndef _OSG_UI_DRAW_UTILS_H_
#define _OSG_UI_DRAW_UTILS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGUserInterfaceConfig.h"
#include <OpenSG/OSGVector.h>

OSG_BEGIN_NAMESPACE

void OSG_USER_INTERFACE_FUNC_API convertTopLeftToCenteredLine(const Pnt2s& Point1, const Pnt2s& Point2, const UInt16 Width,Pnt2s& ResultPoint1, Pnt2s& ResultPoint2);
void OSG_USER_INTERFACE_FUNC_API convertTopRightToCenteredLine(const Pnt2s& Point1, const Pnt2s& Point2, const UInt16 Width,Pnt2s& ResultPoint1, Pnt2s& ResultPoint2);

OSG_END_NAMESPACE

#endif /* _OSG_UI_DRAW_UTILS_H_ */
