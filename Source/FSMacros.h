//
//  FSMacros.h
//
//  Created by Luke Dixon on 09/01/2014.
//  Copyright (c) 2014 57Digital. All rights reserved.
//

#ifndef FSMacros_h
#define FSMacros_h

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define UIColorFromHex(rgbValue) UIColorFromRGB(rgbValue)

#endif
