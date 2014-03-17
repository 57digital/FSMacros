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

#define SYSTEM_VERSION_LESS_THAN_IOS7                   SYSTEM_VERSION_LESS_THAN(@"7.0")
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO_IOS7    SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"7.0")

#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#define APPLICATION_BUNDLE_ID                            [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleIdentifier"]
#define APPLICATION_BUNDLE_ID_EQUAL_TO(v)                [APPLICATION_BUNDLE_ID isEqualToString:v]
#define APPLICATION_BUNDLE_ID_CONTAINS(v)                [APPLICATION_BUNDLE_ID rangeOfString:v options:NSCaseInsensitiveSearch].location != NSNotFound
#define APPLICATION_VERSION                              [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]
#define APPLICATION_VERSION_EQUAL_TO(v)                  ([APPLICATION_VERSION compare:v options:NSNumericSearch] == NSOrderedSame)
#define APPLICATION_VERSION_GREATER_THAN(v)              ([APPLICATION_VERSION compare:v options:NSNumericSearch] == NSOrderedDescending)
#define APPLICATION_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([APPLICATION_VERSION compare:v options:NSNumericSearch] != NSOrderedAscending)
#define APPLICATION_VERSION_LESS_THAN(v)                 ([APPLICATION_VERSION compare:v options:NSNumericSearch] == NSOrderedAscending)
#define APPLICATION_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([APPLICATION_VERSION compare:v options:NSNumericSearch] != NSOrderedDescending)
#define IS_SIMULATOR                                     ([[[UIDevice currentDevice] model] containsSubstring:@"simulator" ignoreCase:YES])

#endif
