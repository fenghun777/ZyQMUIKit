//
//  QDSingleImagePickerPreviewViewController.h
//  ZyQMUIKit
//
//  Created by 张钰营 on 2019/12/10.
//  Copyright © 2019 partTime_ios. All rights reserved.
//

@class QDSingleImagePickerPreviewViewController;

@protocol QDSingleImagePickerPreviewViewControllerDelegate <QMUIImagePickerPreviewViewControllerDelegate>

@required
- (void)imagePickerPreviewViewController:(QDSingleImagePickerPreviewViewController *)imagePickerPreviewViewController didSelectImageWithImagesAsset:(QMUIAsset *)imageAsset;

@end

#import "QMUIImagePickerPreviewViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface QDSingleImagePickerPreviewViewController : QMUIImagePickerPreviewViewController

@property(nonatomic, weak) id<QDSingleImagePickerPreviewViewControllerDelegate> delegate;
@property(nonatomic, strong) QMUIAssetsGroup *assetsGroup;

@end


NS_ASSUME_NONNULL_END
