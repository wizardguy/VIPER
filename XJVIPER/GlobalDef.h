//
//  GlobalDef.h
//  VIPERTest
//
//  Created by Dennis on 27/4/16.
//  Copyright (c) 2016年 Dennis. All rights reserved.
//

#ifndef VIPERTest_GlobalDef_h
#define VIPERTest_GlobalDef_h


#define VIPER_DEBUG 1

#if VIPER_DEBUG
#define VIPERLOG(format, ...) NSLog(format, __VA_ARGS__)
#else
#define VIPERLOG(s)
#endif


#endif
