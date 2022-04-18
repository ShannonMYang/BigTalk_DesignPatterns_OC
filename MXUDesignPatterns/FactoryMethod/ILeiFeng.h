//
//  ILeiFeng.h
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/24.
//

// MARK: 工厂方法模式

#import <Foundation/Foundation.h>

// 雷锋接口
@protocol ILeiFeng <NSObject>

// 扫地
- (void)sweep;

// 洗衣
- (void)wash;

// 买米
- (void)bugRice;

@end
