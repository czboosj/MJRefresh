//
//  MJRefreshBackNormalFooter.h
//  MJRefreshExample
//
//  Created by MJ Lee on 15/4/24.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#import "MJRefreshBackStateFooter.h"

NS_ASSUME_NONNULL_BEGIN

@interface MJRefreshBackNormalFooter : MJRefreshBackStateFooter
/// 闲置状态隐藏箭头, 配合settitle 处理XR 上闲置状态 显示问题
@property (assign, nonatomic) BOOL isIdleHiddenArrowView;
@property (weak, nonatomic, readonly) UIImageView *arrowView;
@property (weak, nonatomic, readonly) UIActivityIndicatorView *loadingView;

/** 菊花的样式 */
@property (assign, nonatomic) UIActivityIndicatorViewStyle activityIndicatorViewStyle MJRefreshDeprecated("first deprecated in 3.2.2 - Use `loadingView` property");
@end

NS_ASSUME_NONNULL_END
