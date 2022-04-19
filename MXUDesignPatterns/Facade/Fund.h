//
//  Fund.h
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/4/18.
//

// MARK: 外观者模式
 
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Fund : NSObject

/**
 购买基金
 */
- (void)buyFund;

/**
 赎回基金
 */
- (void)sellFund;

@end

NS_ASSUME_NONNULL_END
