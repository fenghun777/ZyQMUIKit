//
//  QDCommonTableViewController.m
//  ZyQMUIKit
//
//  Created by 张钰营 on 2019/12/3.
//  Copyright © 2019 partTime_ios. All rights reserved.
//

#import "QDCommonTableViewController.h"

@interface QDCommonTableViewController ()

@end

@implementation QDCommonTableViewController

- (void)initTableView {
    [super initTableView];
    if (IsUITest) {
        self.tableView.accessibilityLabel = [NSString stringWithFormat:@"viewController-%@", self.title];
    }
}

- (void)setTitle:(NSString *)title {
    [super setTitle:title];
    if (IsUITest && self.isViewLoaded) {
        self.tableView.accessibilityLabel = [NSString stringWithFormat:@"viewController-%@", self.title];
    }
}

- (BOOL)shouldCustomizeNavigationBarTransitionIfHideable {
    return YES;
}

//- (void)qmui_themeDidChangeByManager:(QMUIThemeManager *)manager identifier:(__kindof NSObject<NSCopying> *)identifier theme:(__kindof NSObject *)theme {
//    [super qmui_themeDidChangeByManager:manager identifier:identifier theme:theme];
//    [self.tableView reloadData];
//}



@end
