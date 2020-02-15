//
//  QDMultipleImagePickerPreviewViewController.h
//  ZyQMUIKit
//
//  Created by 张钰营 on 2019/12/10.
//  Copyright © 2019 partTime_ios. All rights reserved.
//

@class QDMultipleImagePickerPreviewViewController;

@protocol QDMultipleImagePickerPreviewViewControllerDelegate <QMUIImagePickerPreviewViewControllerDelegate>

@required
- (void)imagePickerPreviewViewController:(QDMultipleImagePickerPreviewViewController *)imagePickerPreviewViewController sendImageWithImagesAssetArray:(NSMutableArray<QMUIAsset *> *)imagesAssetArray;

@end

#import "QMUIImagePickerPreviewViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface QDMultipleImagePickerPreviewViewController : QMUIImagePickerPreviewViewController

@property(nonatomic, weak) id<QDMultipleImagePickerPreviewViewControllerDelegate> delegate;
@property(nonatomic, strong) QMUILabel *imageCountLabel;
@property(nonatomic, strong) QMUIAssetsGroup *assetsGroup;
@property(nonatomic, assign) BOOL shouldUseOriginImage;

@end

NS_ASSUME_NONNULL_END
