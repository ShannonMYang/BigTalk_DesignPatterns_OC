//
//  Operation.m
//  MXUDesignPatterns
//
//  Created by yxk on 2022/3/21.
//

#import "Operation.h"

@implementation Operation

- (CGFloat)getResult {
    /**
     断言方法
     如果继承了抽象类的子类，没有重写抽象类的这个方法，就会走抽象类的这个方法，然后，就会依据断言，进而报错
     
     NSAssert () 是一个宏，用于开发阶段调试程序中的 Bug，通过为 NSAssert () 传递条件表达式来断定是否属于 Bug，满足条件返回真值，程序继续运行，如果返回假值，则抛出异常，并且可以自定义异常描述。
     NSAssert () 是这样定义的：
     #define NSAssert(condition, desc)

     condition 是条件表达式，值为 YES 或 NO；desc 为异常描述，通常为 NSString。当 conditon 为 YES 时程序继续运行，为 NO 时，则抛出带有 desc 描述的异常信息。NSAssert () 可以出现在程序的任何一个位置。

     NSAssert 和 assert 区别
     NSAssert 和 assert 都是断言，主要的差别是 assert 在断言失败的时候只是简单的终止程序，而 NSAssert 会报告出错误信息并且打印出来。所以只使用 NSAssert 就好，可以不去使用 assert。
     */
    NSAssert(NO, @"%s must be overridden by subclasses", __func__);
    return 0;
}

@end
