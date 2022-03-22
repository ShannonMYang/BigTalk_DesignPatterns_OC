//
//  CashRebate.h
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/21.
//

#import <Foundation/Foundation.h>

#import "CashSuper.h"

NS_ASSUME_NONNULL_BEGIN

/**
 折扣收费子类
 */
@interface CashRebate : NSObject<CashSuper>

/**
 初始化方法
 
 @param moneyRebate 折扣率
 
 @return 实例对象
 */
- (instancetype)initWithMoneyWithRebate:(CGFloat)moneyRebate;

@end

NS_ASSUME_NONNULL_END
