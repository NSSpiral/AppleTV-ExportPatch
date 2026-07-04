/* Runtime dump - QLServicePreviewContentController
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLServicePreviewContentController : UIViewController <QLRemotePreviewContentControllerProtocol, QLPreviewContentDataSource, QLPreviewContentDelegate>
{
    NSMutableDictionary * _previewItemCache;
    int _sourceUUID;
    QLPreviewContentController * _previewContentController;
    int _numberOfPreviewItems;
    int _previewMode;
    char _remoteInstantiationFinished;
    char _blockRemoteImages;
    <QLRemotePrintPageHelper> * _printPageHelper;
    struct CGSize _clientSize;
    _UIHostedWindow * _hostedWindow;
}

@property (readonly) int sourceUUID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property <QLPreviewContentDataSource> * dataSource;
@property <QLPreviewContentDelegate> * delegate;
@property int previewMode;

+ (NSXPCInterface *)_exportedInterface;
+ (QLServicePreviewContentController *)_remoteViewControllerInterface;

- (void)beginScrubbing;
- (void)endScrubbing;
- (void)purgeCache;
- (void)setLoadingTextForMissingFiles:(NSString *)arg0;
- (void)setTransitioning:(char)arg0 synchronizedWithBlock:(id /* block */)arg1;
- (int)currentPreviewItemIndex;
- (void)setCurrentPreviewItemIndex:(int)arg0;
- (void)checkCurrentPreviewItem;
- (void)refreshCurrentPreviewItem;
- (int)numberOfPreviewItems;
- (void)stopLoadingCurrentPreviewItem;
- (void)enterBackground;
- (void)becomeForeground;
- (void)setOverlayHidden:(char)arg0 duration:(double)arg1;
- (void)configureWithParameters:(NSDictionary *)arg0;
- (void)willChangeContentFrame;
- (void)setContentFrame:(struct CGRect)arg0;
- (void)forceResignFirstResponder;
- (void)togglePlayState;
- (int)currentSourceUUIDForPreviewContentController:(BRController *)arg0;
- (int)numberOfPreviewItemsInPreviewContentController:(BRController *)arg0;
- (NSObject *)previewContentController:(QLPreviewContentController *)arg0 previewItemAtIndex:(int)arg1;
- (void)previewContentController:(QLPreviewContentController *)arg0 previewItemAtIndex:(int)arg1 completionBlock:(id /* block */)arg2;
- (void)previewContentController:(QLPreviewContentController *)arg0 willMoveToItemAtIndex:(int)arg1;
- (void)previewContentController:(QLPreviewContentController *)arg0 didMoveToItem:(NSObject *)arg1 atIndex:(int)arg2;
- (void)previewContentController:(QLPreviewContentController *)arg0 didLoadItem:(NSObject *)arg1 atIndex:(int)arg2 withError:(NSError *)arg3;
- (void)previewContentController:(QLPreviewContentController *)arg0 didFailWithError:(char)arg1;
- (void)previewContentController:(QLPreviewContentController *)arg0 willShowOverlayWithDuration:(double)arg1;
- (void)previewContentController:(QLPreviewContentController *)arg0 willHideOverlayWithDuration:(double)arg1;
- (void)contentWasTappedInPreviewContentController:(BRController *)arg0;
- (void)showContentsWasTappedInPreviewContentController:(BRController *)arg0;
- (void)overlayWasTappedInPreviewContentController:(BRController *)arg0;
- (void)previewContentController:(QLPreviewContentController *)arg0 receivedTapOnURL:(NSURL *)arg1;
- (<QLRemotePrintPageHelper> *)printPageHelper;
- (void)scrubToValue:(double)arg0;
- (void)previewContentController:(QLPreviewContentController *)arg0 setAVState:(NSObject *)arg1 forPreviewItem:(NSObject *)arg2;
- (void)previewContentController:(QLPreviewContentController *)arg0 willEnterFullScreenWithHostedWindow:(_UIHostedWindow *)arg1;
- (void)previewContentControllerDidExitFullScreen:(NSObject *)arg0;
- (NSObject *)clientProcessAlertViewForPreviewContentController:(BRController *)arg0;
- (void)_willTransitionToSize:(struct CGSize)arg0;
- (void)_setNavigationBarVerticalOffset:(float)arg0;
- (void)_setNumberOfPreviewItems:(int)arg0;
- (void)_setTransitioning:(char)arg0;
- (void)_getNumberOfPagesForSize:(struct CGSize)arg0 withHandler:(id /* block */)arg1;
- (void)_prepareForDrawingPages:(struct _NSRange)arg0 withSize:(struct CGSize)arg1;
- (void)_getPDFPageAtIndex:(int)arg0 handler:(id /* block */)arg1;
- (int)sourceUUID;
- (void)_updateHostedWindowFrame;
- (NSObject *)_remotePreviewItemAtIndex:(int)arg0;
- (void)dealloc;
- (void)setDataSource:(<QLPreviewContentDataSource> *)arg0;
- (void)setDelegate:(<QLPreviewContentDelegate> *)arg0;
- (QLServicePreviewContentController *)init;
- (<QLPreviewContentDataSource> *)dataSource;
- (<QLPreviewContentDelegate> *)delegate;
- (void)setBlockRemoteImages:(char)arg0;
- (UIPrintPageRenderer *)printPageRenderer;
- (void)_willAppearInRemoteViewController;
- (void)setPreviewMode:(int)arg0;
- (int)previewMode;

@end
