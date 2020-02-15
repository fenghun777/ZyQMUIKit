//
//  QDDialogViewController.m
//  ZyQMUIKit
//
//  Created by 张钰营 on 2020/2/7.
//  Copyright © 2020 partTime_ios. All rights reserved.
//

#import "QDDialogViewController.h"

@interface QDDialogViewController ()

@end

@implementation QDDialogViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    [self showNormalSelectionDialogViewController];
}


- (void)showNormalSelectionDialogViewController {
    QMUIDialogSelectionViewController *dialogViewController = [[QMUIDialogSelectionViewController alloc] init];
    dialogViewController.title = @"支持的语言";
    dialogViewController.items = @[@"简体中文", @"繁体中文", @"英语（美国）", @"英语（英国）"];
    dialogViewController.cellForItemBlock = ^(QMUIDialogSelectionViewController *aDialogViewController, QMUITableViewCell *cell, NSUInteger itemIndex) {
        cell.accessoryType = UITableViewCellAccessoryNone;// 移除点击时默认加上右边的checkbox
    };
    dialogViewController.heightForItemBlock = ^CGFloat (QMUIDialogSelectionViewController *aDialogViewController, NSUInteger itemIndex) {
        return 54;// 修改默认的行高，默认为 TableViewCellNormalHeight
    };
    dialogViewController.didSelectItemBlock = ^(QMUIDialogSelectionViewController *aDialogViewController, NSUInteger itemIndex) {
        [aDialogViewController hide];
    };
    [dialogViewController show];
}


@end
