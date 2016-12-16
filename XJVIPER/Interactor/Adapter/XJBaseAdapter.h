//
//  XJBaseAdapter.h
//  VIPERTest
//
//  Created by Dennis on 26/4/16.
//  Copyright (c) 2016年 Dennis. All rights reserved.
//

#import <Foundation/Foundation.h>

#define XJBASEADAPTER_DEFAULTMAPPING_FILENAME @"adapterDefaultMapping"

@interface XJBaseAdapter : NSObject

- (id)initWithSettingFile:(NSString *)file;
- (id)initWithDefaultSetting;

- (NSDictionary *)mapping;
- (void)reloadSetting;
- (void)loadSettingWithFile:(NSString *)file;

@end


@protocol XJAdataperProtocol <NSObject>

- (void)createDataWithKey:(NSString *)key parameters:(id)parameters identity:(NSString *)identity waitUntilDone:(BOOL)wait response:(id __autoreleasing *)data;

- (void)readDataWithKey:(NSString *)key parameters:(id)parameters identity:(NSString *)identity waitUntilDone:(BOOL)wait response:(id __autoreleasing *)data;

- (void)updateDataWithKey:(NSString *)key parameters:(id)parameters identiy:(NSString *)identity waitUntilDone:(BOOL)wait response:(id __autoreleasing *)data;

- (void)deleteDataWithKey:(NSString *)key parameters:(id)parameters identiy:(NSString *)identity waitUntilDone:(BOOL)wait response:(id __autoreleasing *)data;

@end