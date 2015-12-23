//
//  SCXMusicTableViewController.h
//  网易新闻
//
//  Created by JD－高 on 15/12/5.
//  Copyright © 2015年 JD－高. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JingRoundView.h"
@interface SCXMusicTableViewController : UIViewController
@property(nonatomic,strong)JingRoundView *roundView;
+(SCXMusicTableViewController *)sharedMusic;
@property(nonatomic,assign)BOOL isPlay;
 @property(nonatomic,strong) UIButton *playButton;
-(void)play;
-(void)previous:(UIButton *)button;
-(void)next:(UIButton *)button;
-(void)pause;
-(void)Play:(UIButton *)Button;
@end
