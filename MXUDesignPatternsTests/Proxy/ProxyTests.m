//
//  ProxyTests.m
//  MXUDesignPatternsTests
//
//  Created by 木熹鱼 on 2022/3/24.
//

#import <XCTest/XCTest.h>

#import "SchoolGirl.h"
#import "Proxy.h"

@interface ProxyTests : XCTestCase

@end

@implementation ProxyTests

- (void)testProxy
{
    SchoolGirl *schoolGirl = [[SchoolGirl alloc] init];
    schoolGirl.name = @"娇娇";
    
    Proxy *proxy = [[Proxy alloc] initWithSchoolGirl:schoolGirl];
    [proxy giveDolls];
    [proxy giveFlowers];
    [proxy giveChocolate];
}

@end
