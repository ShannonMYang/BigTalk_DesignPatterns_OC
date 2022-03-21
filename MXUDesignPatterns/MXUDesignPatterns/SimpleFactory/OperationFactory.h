//
//  OperationFactory.h
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/21.
//

#import <Foundation/Foundation.h>
#import "Operation.h"

//NS_ASSUME_NONNULL_BEGIN

// 简单工厂类
@interface OperationFactory : NSObject

/**
 简单工厂方法，创建运算实例对象
 
 @param operationType 运算类型
 
 @return 运算实例对象
 */
+ (Operation *)createOperation:(OperationType)operationType;

@end

//NS_ASSUME_NONNULL_END
