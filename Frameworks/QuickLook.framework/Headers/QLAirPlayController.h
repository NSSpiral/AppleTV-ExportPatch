/* Runtime dump - QLAirPlayController
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLAirPlayController : NSObject
{
    int _mode;
    UIScreen * _screen;
    _UIHostedWindow * _airPlayWindow;
    UISnapshotView * _snapshotView;
    QLPreviewViewController * _previewViewController;
    NSTimer * _refreshTimer;
}

@property (retain) QLPreviewViewController * previewViewController;
@property (retain) UIScreen * screen;
@property int mode;

- (void)updateGeometryForPreviewViewController:(BRController *)arg0;
- (QLAirPlayController *)initWithScreen:(UIScreen *)arg0;
- (QLPreviewViewController *)previewViewController;
- (void)setPreviewViewController:(QLPreviewViewController *)arg0;
- (void)refreshSnapshot;
- (void)_stopUsingPreviewController;
- (void)_startUsingPreviewController;
- (void)_updateWindowSize;
- (void)_createAirPlayWindowIfNeeded;
- (void)_removeAirPlayWindow;
- (float)_screenAspectRatioForPreviewViewController:(BRController *)arg0;
- (float)_screenScaleFactorForPreviewViewController:(BRController *)arg0;
- (void)dealloc;
- (void)invalidate;
- (UIScreen *)screen;
- (void)setScreen:(UIScreen *)arg0;
- (void)setMode:(int)arg0;
- (int)mode;
- (void)update;

@end
