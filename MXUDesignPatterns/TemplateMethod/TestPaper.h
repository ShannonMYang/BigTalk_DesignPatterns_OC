//
//  TestPaper.h
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/4/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TestPaper : NSObject

// 试题1
- (void)testQuestion1;

/**
 答案1
 
 @return 答案1
 */
- (NSString *)answer1;

// 试题2
- (void)testQuestion2;

/**
 答案2
 
 @return 答案2
 */
- (NSString *)answer2;

// 试题3
- (void)testQuestion3;

/**
 答案3
 
 @return 答案3
 */
- (NSString *)answer3;

@end

NS_ASSUME_NONNULL_END
