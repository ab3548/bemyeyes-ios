//
//  BMEPointGraphView.h
//  BeMyEyes
//
//  Created by Simon Støvring on 04/04/14.
//  Copyright (c) 2014 Be My Eyes. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BMEPointGraphView : UIView

@property (assign, nonatomic) CGFloat strokeWidth;
@property (copy, nonatomic) UIColor *strokeColor;
@property (copy, nonatomic) UIColor *gradientStartColor;
@property (copy, nonatomic) UIColor *gradientEndColor;
@property (assign, nonatomic) NSUInteger minimum;
@property (assign, nonatomic) NSUInteger maximum;
@property (assign, nonatomic) BOOL calculatesMinimum;
@property (assign, nonatomic) BOOL calculatesMaximum;

- (void)addPoints:(NSUInteger)points atDate:(NSDate *)date;
- (void)draw;

@end