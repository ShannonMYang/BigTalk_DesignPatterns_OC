//
//  CashSuper.h
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/21.
//

// MARK: 策略模式

#import <Foundation/Foundation.h>

@protocol CashSuper <NSObject>

/**
 收取现金
 
 @param cash 原价
 
 @return 当前价
 */
- (CGFloat)acceptCash:(CGFloat)cash;

@end
