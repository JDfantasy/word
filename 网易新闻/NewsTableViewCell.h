//
//  NewsTableViewCell.h
//  网易新闻
//
//  Created by JD－高 on 15/11/14.
//  Copyright © 2015年 JD－高. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NewsTableViewCell : UITableViewCell
-(void)setUpData:(NewsModel *)model;
@property(nonatomic,assign)NSInteger count;
@end
