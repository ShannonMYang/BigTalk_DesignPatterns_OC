//
//  AccountantDepartment.h
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/22.
//

#import <Foundation/Foundation.h>

#import "Employee.h"

NS_ASSUME_NONNULL_BEGIN

// 会计部门类
@interface AccountantDepartment : NSObject

// 计算员工工资
- (double)calculateSalary:(Employee *)employee;

@end

NS_ASSUME_NONNULL_END
