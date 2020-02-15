//
//  QDImagePickerExampleViewController.h
//  ZyQMUIKit
//
//  Created by 张钰营 on 2019/12/10.
//  Copyright © 2019 partTime_ios. All rights reserved.
//

#import "QDCommonGroupListViewController.h"
#import "QDSingleImagePickerPreviewViewController.h"
#import "QDCommonGroupListViewController.h"
#import "QDMultipleImagePickerPreviewViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface QDImagePickerExampleViewController : QDCommonGroupListViewController<QMUIAlbumViewControllerDelegate,QMUIImagePickerViewControllerDelegate,QDMultipleImagePickerPreviewViewControllerDelegate,QDSingleImagePickerPreviewViewControllerDelegate>

@end

NS_ASSUME_NONNULL_END
