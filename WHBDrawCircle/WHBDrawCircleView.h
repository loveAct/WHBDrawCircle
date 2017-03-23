//
//  WHBDrawCircleView.h
//  WHBDrawCircle
//
//  Created by apple on 2017/3/23.
//  Copyright © 2017年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WHBDrawCircleView : UIView
//彩色和普通
@property (nonatomic, strong) UIBezierPath *colorPath;
@property (nonatomic, strong) UIBezierPath *normalPath;

//彩色弧长的属性
@property (nonatomic, strong) UIColor *colourFillColor;
@property (nonatomic, assign) CGFloat colourStartAngle;
@property (nonatomic, assign) CGFloat colourEndAngle;
@property (nonatomic, assign) CGPoint colourArcCenter;
@property (nonatomic, assign) CGFloat colourRadius;
//灰色弧长的属性
@property (nonatomic, strong) UIColor *normalFillColor;
@property (nonatomic, assign) CGFloat normalStartAngle;
@property (nonatomic, assign) CGFloat normalEndAngle;
@property (nonatomic, assign) CGPoint normalArcCenter;
@property (nonatomic, assign) CGFloat normalRadius;
/**
 *  类别（圆中的label）
 */
@property (nonatomic, strong) UILabel *cateLabel;
/**
 *  钱的数目
 */
@property (nonatomic, strong) UILabel *moneyNumLabel;


@end
