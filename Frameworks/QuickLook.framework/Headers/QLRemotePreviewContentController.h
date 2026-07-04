/* Runtime dump - QLRemotePreviewContentController
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLRemotePreviewContentController : _UIRemoteViewController <QLPreviewContentControllerProtocol, QLPrintPageRendererDataSource>
{
    QLPreviewController * _previewController;
    <QLPreviewContentDataSource> * _dataSource;
    <QLPreviewContentDelegate> * _delegate;
    int _currentPreviewItemIndex;
    int _numberOfPreviewItems;
    NSMapTable * _previewItemsForProxys;
    NSMapTable * _proxysForPreviewItems;
    QLPrintPageRenderer * _printPageRenderer;
    _UIRemoteView * _fullScreenView;
    char _statusBarWasHidden;
    char _isHostingFullScreenWindow;
}

@property QLPreviewController * previewController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property <QLPreviewContentDataSource> * dataSource;
@property <QLPreviewContentDelegate> * delegate;
@property int previewMode;

+ (QLRemotePreviewContentController *)serviceViewControllerInterface;
+ (NSXPCInterface *)exportedInterface;

- (void)beginScrubbing;
- (void)endScrubbing;
- (void)setLoadingTextForMissingFiles:(NSString *)arg0;
- (void)setTransitioning:(char)arg0 synchronizedWithBlock:(id /* block */)arg1;
- (int)currentPreviewItemIndex;
- (void)setCurrentPreviewItemIndex:(int)arg0;
- (void)checkCurrentPreviewItem;
- (void)refreshCurrentPreviewItem;
- (int)numberOfPreviewItems;
- (void)setPreviewController:(QLPreviewController *)arg0;
- (void)stopLoadingCurrentPreviewItem;
- (void)enterBackground;
- (void)becomeForeground;
- (void)setOverlayHidden:(char)arg0 duration:(double)arg1;
- (void)configureWithParameters:(NSDictionary *)arg0;
- (void)willChangeContentFrame;
- (void)setContentFrame:(struct CGRect)arg0;
- (void)forceResignFirstResponder;
- (void)togglePlayState;
- (<QLRemotePrintPageHelper> *)printPageHelper;
- (void)scrubToValue:(double)arg0;
- (int)numberOfPagesInPrintPageRenderer:(NSObject *)arg0;
- (void)printPageRenderer:(QLPrintPageRenderer *)arg0 prepareForDrawingPages:(struct _NSRange)arg1;
- (NSObject *)printPageRenderer:(QLPrintPageRenderer *)arg0 pdfDataForPageAtIndex:(int)arg1 printingDone:(char *)arg2;
- (void)_previewContentControllerGetPreviewItemAtIndex:(int)arg0 sourceUUID:(int)arg1 handler:(id /* block */)arg2;
- (void)_previewContentControllerWillShowOverlayWithDuration:(double)arg0;
- (void)_previewContentControllerWillHideOverlayWithDuration:(double)arg0;
- (void)_contentWasTappedInPreviewContentController;
- (void)_overlayWasTappedInPreviewContentController;
- (void)_showContentsWasTappedInPreviewContentController;
- (void)_previewContentControllerWillMoveToItemAtIndex:(int)arg0;
- (void)_previewContentControllerDidMoveToItemAtIndex:(int)arg0;
- (void)_previewContentControllerReceivedTapOnURL:(NSURL *)arg0;
- (void)_previewContentControllerDidLoadItem:(NSObject *)arg0 atIndex:(int)arg1 withError:(NSError *)arg2;
- (void)_setAVState:(NSObject *)arg0 forPreviewItem:(NSObject *)arg1;
- (void)_willEnterFullScreenWithContext:(NSObject *)arg0;
- (void)_didExitFullScreen;
- (void)_updateNavigationBarVerticalOffset;
- (void)setNumberOfPreviewItems:(int)arg0;
- (NSObject *)_proxyForPreviewItem:(NSObject *)arg0;
- (NSObject *)_previewItemFromProxy:(NSObject *)arg0;
- (void)dealloc;
- (void)setDataSource:(<QLPreviewContentDataSource> *)arg0;
- (void)setDelegate:(<QLPreviewContentDelegate> *)arg0;
- (<QLPreviewContentDataSource> *)dataSource;
- (<QLPreviewContentDelegate> *)delegate;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg0 withTransitionCoordinator:(NSObject *)arg1;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (char)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewServiceDidTerminateWithError:(NSError *)arg0;
- (QLPreviewController *)previewController;
- (void)setBlockRemoteImages:(char)arg0;
- (QLPrintPageRenderer *)printPageRenderer;
- (void)setPreviewMode:(int)arg0;
- (int)previewMode;

@end
