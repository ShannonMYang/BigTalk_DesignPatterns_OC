//
//  Person.h
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/23.
//

// MARK: 装饰模式

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol Component <NSObject>

- (void)show;

@end

/**
 "没有抽象类Component"
 Person 类，即是ConcreteComponent类，用于定义具体的对象
 */
@interface Person : NSObject<Component>

- (instancetype)initWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
