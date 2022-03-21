//
//  CashContext.h
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/21.
//

#import <Foundation/Foundation.h>

#import "CashSuper.h"

NS_ASSUME_NONNULL_BEGIN

@interface CashContext : NSObject

/**
 初始化方法
 
 @param cashSuper 实现CashSuper协议的对象
 
 @return 实例对象
 */
- (instancetype)initWithCashSuper:(id<CashSuper>)cashSuper;

/**
 获取计算结果
 
 @param money 原价
 
 @return 计算结果
 */
- (CGFloat)getResult:(CGFloat)money;

@end

NS_ASSUME_NONNULL_END
