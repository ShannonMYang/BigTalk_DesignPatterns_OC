//
//  FactoryMethodTests.m
//  MXUDesignPatternsTests
//
//  Created by 木熹鱼 on 2022/3/26.
//

#import <XCTest/XCTest.h>

#import "ILeiFeng.h"
#import "ILeiFengFactory.h"
#import "UndergraduateFactory.h"
#import "VolunteerFactory.h"

@interface FactoryMethodTests : XCTestCase

@end

@implementation FactoryMethodTests

- (void)testFactoryMethod {
    id<ILeiFengFactory> leiFengFactory = [[UndergraduateFactory alloc] init];
//    id<ILeiFengFactory> leiFengFactory = [[VolunteerFactory alloc] init];
    
    id<ILeiFeng> studentA = [leiFengFactory createLeiFeng];
    [studentA sweep];
    [studentA wash];
    [studentA bugRice];
    
    id<ILeiFeng> studentB = [leiFengFactory createLeiFeng];
    [studentB sweep];
    [studentB wash];
    [studentB bugRice];
    
    id<ILeiFeng> studentC = [leiFengFactory createLeiFeng];
    [studentC sweep];
    [studentC wash];
    [studentC bugRice];
}

@end
