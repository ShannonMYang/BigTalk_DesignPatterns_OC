//
//  Finery.h
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/23.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

/**
 装饰抽象类
 因为没有“抽象的Component类”，本来是要继承子Component类的，现在是继承自ConcreteComponent类。
 */
@interface Finery : Person

- (instancetype)initWithDecorate:(Person *)component;

@end

NS_ASSUME_NONNULL_END
