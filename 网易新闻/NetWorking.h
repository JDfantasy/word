//
//  NetWorking.h
//  网易新闻
//
//  Created by JD－高 on 15/11/14.
//  Copyright © 2015年 JD－高. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface NetWorking : NSObject
+(void)downLoadNewsUseGet:(NSString *)urlString;
+(NSData *)downloadImage:(NSString *)imageUrlString;
@end
