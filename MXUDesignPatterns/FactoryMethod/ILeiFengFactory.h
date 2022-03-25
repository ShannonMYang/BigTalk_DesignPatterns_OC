//
//  ILeiFengFactory.h
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/25.
//

#import "ILeiFeng.h"

// 雷锋工厂接口
@protocol ILeiFengFactory <NSObject>

/**
 工厂方法，用于创建雷锋实例
 
 @return 雷锋实例
 */
- (id<ILeiFeng>)createLeiFeng;

@end
