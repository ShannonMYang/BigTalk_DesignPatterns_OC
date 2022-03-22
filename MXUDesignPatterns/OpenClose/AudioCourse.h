//
//  AudioCourse.h
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/22.
//

#import "Course.h"

NS_ASSUME_NONNULL_BEGIN

// 音频课程类
@interface AudioCourse : Course

@property (nonatomic, copy) NSString *audioUrl;  // 音频地址

@end

NS_ASSUME_NONNULL_END
