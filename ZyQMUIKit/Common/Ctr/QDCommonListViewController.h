//
//  QDCommonListViewController.h
//  ZyQMUIKit
//
//  Created by 张钰营 on 2019/12/3.
//  Copyright © 2019 partTime_ios. All rights reserved.
//

#import "QDCommonTableViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface QDCommonListViewController : QDCommonTableViewController

@property(nonatomic, strong) NSArray<NSString *> *dataSource;
@property(nonatomic, strong) QMUIOrderedDictionary<NSString *, NSString *> *dataSourceWithDetailText;

@end

@interface QDCommonListViewController (UISubclassingHooks)

// 子类继承，可以不调super
- (void)initDataSource;
- (void)didSelectCellWithTitle:(NSString *)title;

@end

NS_ASSUME_NONNULL_END
