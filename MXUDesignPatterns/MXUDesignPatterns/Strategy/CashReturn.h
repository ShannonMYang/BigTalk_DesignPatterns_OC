//
//  CashReturn.h
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/21.
//

#import <Foundation/Foundation.h>

#import "CashSuper.h"

NS_ASSUME_NONNULL_BEGIN

/**
 返利收费子类
 */
@interface CashReturn : NSObject<CashSuper>

/**
 初始化方法
 
 @param moneyCondition 返利条件
 @param moneyReturn 返利值
 
 @return 实例对象
 */
- (instancetype)initWithMoneyCondition:(CGFloat)moneyCondition
                           moneyReturn:(CGFloat)moneyReturn;

@end

NS_ASSUME_NONNULL_END
