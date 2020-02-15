//
//  QDButtonViewController.m
//  ZyQMUIKit
//
//  Created by 张钰营 on 2019/12/8.
//  Copyright © 2019 partTime_ios. All rights reserved.
//

#import "QDButtonViewController.h"

@interface QDButtonViewController ()

@end

@implementation QDButtonViewController

- (void)initDataSource {
    self.dataSource = @[@"QMUIButton",
                        @"QMUILinkButton",
                        @"QMUIGhostButton",
                        @"QMUIFillButton",
                        @"QMUINavigationButton",
                        @"QMUIToolbarButton"];
}

//- (void)didSelectCellWithTitle:(NSString *)title {
//    UIViewController *viewController = nil;
//    if ([title isEqualToString:@"QMUIButton"]) {
//        viewController = [[QDNormalButtonViewController alloc] init];
//    } else if ([title isEqualToString:@"QMUILinkButton"]) {
//        viewController = [[QDLinkButtonViewController alloc] init];
//    } else if ([title isEqualToString:@"QMUIGhostButton"]) {
//        viewController = [[QDGhostButtonViewController alloc] init];
//    } else if ([title isEqualToString:@"QMUIFillButton"]) {
//        viewController = [[QDFillButtonViewController alloc] init];
//    } else if ([title isEqualToString:@"QMUINavigationButton"]) {
//        viewController = [[QDNavigationButtonViewController alloc] init];
//    } else if ([title isEqualToString:@"QMUIToolbarButton"]) {
//        viewController = [[QDToolBarButtonViewController alloc] init];
//    }
//    viewController.title = title;
//    [self.navigationController pushViewController:viewController animated:YES];
//}

- (BOOL)canBecomeFirstResponder {
    return YES;
}

- (void)motionEnded:(UIEventSubtype)motion withEvent:(UIEvent *)event {
//    if (motion == UIEventSubtypeMotionShake) {
//        QDButtonEdgeInsetsViewController *viewController = [[QDButtonEdgeInsetsViewController alloc] init];
//        QDNavigationController *navController = [[QDNavigationController alloc] initWithRootViewController:viewController];
//        [self presentViewController:navController animated:YES completion:NULL];
//    }
}

@end
