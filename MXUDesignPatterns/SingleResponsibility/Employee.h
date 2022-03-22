//
//  Employee.h
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 员工类
@interface Employee : NSObject

// 初始需求
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *employeeID;

/**
 类 要遵循单一设计原则
 函数(方法)也要遵循单一设计原则
 */

@end

NS_ASSUME_NONNULL_END
