//
//  CashNormal.h
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/21.
//

#import <Foundation/Foundation.h>

#import "CashSuper.h"

NS_ASSUME_NONNULL_BEGIN

/**
 正常收费类
 通过协议，继承自抽象类，成为其子类
 */
@interface CashNormal : NSObject<CashSuper>

@end

NS_ASSUME_NONNULL_END
