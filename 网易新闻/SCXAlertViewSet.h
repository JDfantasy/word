//
//  SCXAlertViewSet.h
//  网易新闻
//
//  Created by JD－高 on 15/12/5.
//  Copyright © 2015年 JD－高. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SCXAlertViewSet : NSObject
+(void)setAlertViewWithViewController:(UIViewController *)viewController andMessage:(NSString *)msg;
+(void)setUpPayAlert:(UIViewController *)viewController andMessage:(NSString *)msg;
@end
