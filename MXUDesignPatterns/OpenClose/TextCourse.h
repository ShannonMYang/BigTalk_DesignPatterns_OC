//
//  TextCourse.h
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/22.
//

#import "Course.h"

NS_ASSUME_NONNULL_BEGIN

// 文字课程类
@interface TextCourse : Course

@property (nonatomic, copy) NSString *content;  // 文字内容

@end

NS_ASSUME_NONNULL_END
