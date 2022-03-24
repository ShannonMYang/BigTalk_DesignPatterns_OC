//
//  GiveGift.h
//  MXUDesignPatterns
//
//  Created by 木熹鱼 on 2022/3/24.
//

#import <Foundation/Foundation.h>

@protocol GiveGift <NSObject>

// 送洋娃娃
- (void)giveDolls;

// 送鲜花
- (void)giveFlowers;

// 送巧克力
- (void)giveChocolate;

@end
