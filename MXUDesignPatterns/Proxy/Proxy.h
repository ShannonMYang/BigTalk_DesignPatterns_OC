//
//  Proxy.h
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/24.
//

#import <Foundation/Foundation.h>

#import "GiveGift.h"
#import "SchoolGirl.h"

NS_ASSUME_NONNULL_BEGIN

// 代理类
@interface Proxy : NSObject<GiveGift>

/**
 实例化方法
 
 @param schoolGirl 被追求者
 
 @return 实例对象
 */
- (instancetype)initWithSchoolGirl:(SchoolGirl *)schoolGirl;

@end

NS_ASSUME_NONNULL_END
