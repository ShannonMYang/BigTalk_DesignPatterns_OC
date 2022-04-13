//
//  TemplateMethodTests.m
//  MXUDesignPatternsTests
//
//  Created by 木熹鱼 on 2022/4/13.
//

#import <XCTest/XCTest.h>

#import "TestPaper.h"
#import "TestPaperA.h"
#import "TestPaperB.h"

@interface TemplateMethodTests : XCTestCase

@end

@implementation TemplateMethodTests

- (void)testTemplateMethod {
    NSLog(@"学生甲抄的试卷：");
    TestPaper *studentA = [[TestPaperA alloc] init];
    [studentA testQuestion1];
    [studentA testQuestion2];
    [studentA testQuestion3];
    
    NSLog(@"学生乙抄的试卷：");
    TestPaper *studentB = [[TestPaperB alloc] init];
    [studentB testQuestion1];
    [studentB testQuestion2];
    [studentB testQuestion3];
}

@end
