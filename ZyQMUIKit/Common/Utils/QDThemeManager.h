//
//  QDThemeManager.h
//  ZyQMUIKit
//
//  Created by 张钰营 on 2019/12/1.
//  Copyright © 2019 partTime_ios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QDThemeProtocol.h"

NS_ASSUME_NONNULL_BEGIN
/// 简单对 QMUIThemeManager 做一层业务的封装，省去类型转换的工作量
@interface QDThemeManager : NSObject

@property(class, nonatomic, readonly, nullable) NSObject<QDThemeProtocol> *currentTheme;
@end

@interface UIColor (QDTheme)

@property(class, nonatomic, strong, readonly) UIColor *qd_backgroundColor;
@property(class, nonatomic, strong, readonly) UIColor *qd_backgroundColorLighten;
@property(class, nonatomic, strong, readonly) UIColor *qd_backgroundColorHighlighted;
@property(class, nonatomic, strong, readonly) UIColor *qd_tintColor;
@property(class, nonatomic, strong, readonly) UIColor *qd_titleTextColor;
@property(class, nonatomic, strong, readonly) UIColor *qd_mainTextColor;
@property(class, nonatomic, strong, readonly) UIColor *qd_descriptionTextColor;
@property(class, nonatomic, strong, readonly) UIColor *qd_placeholderColor;
@property(class, nonatomic, strong, readonly) UIColor *qd_codeColor;
@property(class, nonatomic, strong, readonly) UIColor *qd_separatorColor;
@property(class, nonatomic, strong, readonly) UIColor *qd_gridItemTintColor;
@end

@interface UIImage (QDTheme)

@property(class, nonatomic, strong, readonly) UIImage *qd_searchBarTextFieldBackgroundImage;
@property(class, nonatomic, strong, readonly) UIImage *qd_searchBarBackgroundImage;
@end

@interface UIVisualEffect (QDTheme)

@property(class, nonatomic, strong, readonly) UIVisualEffect *qd_standardBlurEffect;
@end


NS_ASSUME_NONNULL_END
