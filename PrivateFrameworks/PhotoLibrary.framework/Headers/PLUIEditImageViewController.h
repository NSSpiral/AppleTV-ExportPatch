/* Runtime dump - PLUIEditImageViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUIEditImageViewController : PLUIImageViewController
{
    id _delegate;
    int _saveOptions;
    int _mode;
}

@property (nonatomic) id delegate;
@property (nonatomic) int mode;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (void)setMode:(int)arg0;
- (int)mode;
- (PLManagedAsset *)photo;
- (PLPhotoTileViewController *)imageTile;
- (void)cropOverlayWasCancelled:(id)arg0;
- (void)cropOverlayWasOKed:(id)arg0;
- (int)cropOverlayMode;
- (unsigned int)_contentAutoresizingMask;
- (unsigned int)_tileAutoresizingMask;
- (PLUIEditImageViewController *)initWithPhoto:(UIImage *)arg0;
- (void)cropOverlay:(PLCropOverlay *)arg0 didFinishSaving:(id)arg1;
- (void)setImageSavingOptions:(int)arg0;
- (int)saveOptions;
- (int)imageFormat;

@end
