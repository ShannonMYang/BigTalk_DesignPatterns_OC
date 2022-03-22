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
 通过创建了两个分别专门处理薪水和晋升的部门，会计部门和人事部门的类：AccountantDepartment 和 HRDepartment，把两个任务（责任）分离了出去，让本该处理这些职责的类来处理这些职责。
 这样，不仅仅在此次新需求中满足了单一职责原则，以后如果还要增加人事部门和会计部门处理的任务，就可以直接在这两个类里面添加即可。
 */

@end

NS_ASSUME_NONNULL_END
