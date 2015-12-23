//
//  NewsViewModel.h
//  网易新闻
//
//  Created by JD－高 on 15/11/14.
//  Copyright © 2015年 JD－高. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NewsViewModel : NSObject
+(void)downLoadNews:(NSString *)urlString;
-(void)downLoadNewsSuccess:(NSArray *)array;
@property(nonatomic,strong)NSMutableArray *newsArray;
@property(nonatomic,strong)NSMutableArray *scrollArray;
@end
