//
//  SCXCalculateClass.h
//  网易新闻
//
//  Created by JD－高 on 15/11/15.
//  Copyright © 2015年 JD－高. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SCXCalculateClass : NSObject
- (CGSize)boundingRectWithSize:(CGSize)size withText:(NSString *)str;
+(void)downLoadImage:(NewsModel *)model withImageView:(UIImageView *)imageView withString:(NSString *)str;
+(BOOL)examineNetworkingReachabilityWithUrlstring:(NSString *)urlString;
+(void)setAlertViewWithWarnString:(NSString *)warnString andViewController:(UIViewController *)viewController;
+(NSString *)path:(NSString *)databasePath;
+(NSString *)rand_orderNo:(int)length;
@end
