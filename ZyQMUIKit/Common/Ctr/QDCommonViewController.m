//
//  QDCommonViewController.m
//  ZyQMUIKit
//
//  Created by 张钰营 on 2019/12/1.
//  Copyright © 2019 partTime_ios. All rights reserved.
//

#import "QDCommonViewController.h"

@interface QDCommonViewController ()

@end

@implementation QDCommonViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    if (IsUITest) {
        self.view.accessibilityLabel = [NSString stringWithFormat:@"viewController-%@", self.title];
    }
}

- (void)setTitle:(NSString *)title {
    [super setTitle:title];
    if (IsUITest && self.isViewLoaded) {
        self.view.accessibilityLabel = [NSString stringWithFormat:@"viewController-%@", self.title];
    }
}

- (BOOL)shouldCustomizeNavigationBarTransitionIfHideable {
    return YES;
}


@end
