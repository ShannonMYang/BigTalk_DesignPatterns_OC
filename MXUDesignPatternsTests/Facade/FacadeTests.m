//
//  FacadeTests.m
//  MXUDesignPatternsTests
//
//  Created by 木熹鱼 on 2022/4/19.
//

#import <XCTest/XCTest.h>

#import "Fund.h"

@interface FacadeTests : XCTestCase

@end

@implementation FacadeTests

- (void)testFacade {
    Fund *fund = [[Fund alloc] init];
    // 基金购买
    [fund buyFund];
    // 基金赎回
    [fund sellFund];
}

@end
