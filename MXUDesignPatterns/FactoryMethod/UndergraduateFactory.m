//
//  UndergraduateFactory.m
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/25.
//

#import "UndergraduateFactory.h"

#import "Undergraduate.h"

@implementation UndergraduateFactory

- (id<ILeiFeng>)createLeiFeng
{
    return [[Undergraduate alloc] init];
}

@end
