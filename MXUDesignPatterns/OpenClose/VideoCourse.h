//
//  VideoCourse.h
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/22.
//

#import "Course.h"

NS_ASSUME_NONNULL_BEGIN

// 视频课程类
@interface VideoCourse : Course

@property (nonatomic, copy) NSString *videoUrl;  // 视频地址

@end

NS_ASSUME_NONNULL_END
