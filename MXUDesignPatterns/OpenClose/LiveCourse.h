//
//  LiveCourse.h
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/22.
//

#import "Course.h"

NS_ASSUME_NONNULL_BEGIN

// 直播地址类
@interface LiveCourse : Course

@property (nonatomic, copy) NSString *liveUrl;  // 直播地址

@end

NS_ASSUME_NONNULL_END
