//
//  Course.h
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 课程父类（声明一些共有特征的数据）
@interface Course : NSObject

@property (nonatomic, copy) NSString *courseTitle;  // 课程名称
@property (nonatomic, copy) NSString *courseIntroduction;  // 课程介绍
@property (nonatomic, copy) NSString *teacherName;  // 任课教师姓名

/**
 开闭原则
 开放扩展、关闭修改，类似于OC中的类扩展（Category）
 例如：此处的课程父类，就是声明一些共用属性，其余的特有属性，可以在各自的子类进行扩展，但不可以放开修改父类的权限.
 随着课程类型的增加，不需要反复修改最初的父类（Course），只需要新建一个继承于它的子类并在子类中添加仅属于该子类的数据（或行为）即可。
 因为各种课程独有的数据（或行为）都被分散到了不同的课程子类里，所以每个子类的数据（或行为）没有任何冗余。
 */

@end

NS_ASSUME_NONNULL_END
