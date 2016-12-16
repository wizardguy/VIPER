//
//  XJBaseInteractor.m
//  VIPERTest
//
//  Created by Dennis on 21/4/16.
//  Copyright (c) 2016年 Dennis. All rights reserved.
//

#import "XJBaseInteractor.h"

@interface XJBaseInteractor ()

@property (strong, readwrite) id<XJAdataperProtocol> adapter;
@property (weak, readwrite) id<XJBaseInteractorProtcol> delegate;


@end


@implementation XJBaseInteractor

- (id)initWithDelegate:(id)delegate adapter:(id<XJAdataperProtocol>)adapter
{
    return nil;
}


@end
