//
//  SimpleFactoryTests.m
//  MXUDesignPatternsTests
//
//  Created by yxk on 2022/3/21.
//

#import <XCTest/XCTest.h>
#import "Operation.h"
#import "OperationFactory.h"

@interface SimpleFactoryTests : XCTestCase

@end

@implementation SimpleFactoryTests

- (void)testSimpleFactory {
    Operation *operation = [OperationFactory createOperation:OperationTypeAdd];
    operation.numberA = 100;
    operation.numberB = 25;
    CGFloat result0 = 125;
    // XCTAssertTrue (expression, format...) 当 expression 求值为 TRUE 时通过；
    XCTAssertTrue([operation getResult] == result0);
    
    operation = [OperationFactory createOperation:OperationTypeSub];
    operation.numberA = 100;
    operation.numberB = 25;
    CGFloat result1 = 75;
    XCTAssertTrue([operation getResult] == result1);
    
    operation = [OperationFactory createOperation:OperationTypeMul];
    operation.numberA = 100;
    operation.numberB = 25;
    CGFloat result2 = 2500;
    XCTAssertTrue([operation getResult] == result2);
    
    operation = [OperationFactory createOperation:OperationTypeDiv];
    operation.numberA = 100;
    operation.numberB = 25;
    CGFloat result3 = 4;
    XCTAssertTrue([operation getResult] == result3);
}

@end
