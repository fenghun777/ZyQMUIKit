//
//  QDCommonGroupListViewController.h
//  ZyQMUIKit
//
//  Created by 张钰营 on 2019/12/10.
//  Copyright © 2019 partTime_ios. All rights reserved.
//

#import "QDCommonTableViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface QDCommonGroupListViewController : QDCommonTableViewController

@property(nonatomic, strong) QMUIOrderedDictionary *dataSource;

- (NSString *)titleForSection:(NSInteger)section;
- (NSString *)keyNameAtIndexPath:(NSIndexPath *)indexPath;

@end


@interface QDCommonGroupListViewController (UISubclassingHooks)

// 子类继承，可以不调 super
- (void)initDataSource;
- (void)didSelectCellWithTitle:(NSString *)title;

@end

NS_ASSUME_NONNULL_END
