//
//  QDCommonGridViewController.h
//  ZyQMUIKit
//
//  Created by 张钰营 on 2019/12/1.
//  Copyright © 2019 partTime_ios. All rights reserved.
//

#import "QDCommonViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface QDCommonGridViewController : QDCommonViewController

@property(nonatomic, strong) QMUIOrderedDictionary<NSString *, UIImage *> *dataSource;
@property(nonatomic, strong, readonly) UIScrollView *scrollView;
@property(nonatomic, strong, readonly) QMUIGridView *gridView;

@end

@interface QDCommonGridViewController (UISubclassingHooks)

// 子类继承，可以不调super
- (void)initDataSource;
- (void)didSelectCellWithTitle:(NSString *)title;
@end

NS_ASSUME_NONNULL_END
