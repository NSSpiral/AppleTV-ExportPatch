/* Runtime dump - DeferredCAMCameraRollSpec
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface DeferredCAMCameraRollSpec : CAMCameraRollSpec
{
    char _isPad;
    CAMCameraRollSpec * _spec;
    DeferredFrameworkLoader * _loader;
}

@property (retain, nonatomic) CAMCameraRollSpec * spec;
@property (retain, nonatomic) DeferredFrameworkLoader * loader;
@property (nonatomic) char isPad;

- (void)dealloc;
- (void).cxx_destruct;
- (CAMCameraRollSpec *)spec;
- (id)newAlbumNavigationControllerForAssetCollection:(id)arg0 fetchResultContainingAssetCollection:(id)arg1 inApplicationViewController:(BRController *)arg2;
- (void)prepareAlbumViewControllerForReuse:(id)arg0 withAssetCollection:(PHAssetCollection *)arg1 inApplicationViewController:(BRController *)arg2;
- (void)reloadAlbumViewController:(BRController *)arg0 withAssetCollection:(PHAssetCollection *)arg1 fetchResultContainingAssetCollection:(id)arg2;
- (DeferredCAMCameraRollSpec *)initWithDeferredLoader:(DeferredFrameworkLoader *)arg0 isPad:(char)arg1;
- (void)setSpec:(CAMCameraRollSpec *)arg0;
- (void)setLoader:(DeferredFrameworkLoader *)arg0;
- (void)ensureCAMCameraRollSpec;
- (void)setIsPad:(char)arg0;
- (DeferredFrameworkLoader *)loader;
- (char)isPad;

@end
