/* Runtime dump - QLDisplayBundle
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLDisplayBundle : UIViewController
{
    <QLPreviewItemInteractionDelegate> * _delegate;
    <QLPreviewItem> * _previewItem;
    char _overlayHidden;
    int _previewMode;
    char _loaded;
    char _loading;
    NSString * _password;
    NSTimer * _refreshTimer;
    float _navigationBarVerticalOffset;
    int _index;
    struct ? clientContext;
}

@property struct ? clientContext;
@property <QLPreviewItemInteractionDelegate> * delegate;
@property (retain) <QLPreviewItem> * previewItem;
@property int previewMode;
@property int index;
@property char loaded;
@property char loading;
@property (retain) NSString * password;
@property (readonly) int airPlayMode;
@property (readonly) UIView * accessoryView;
@property (readonly) UIView * airplayView;
@property (readonly) struct CGRect contentFrame;
@property float navigationBarVerticalOffset;

+ (double)allowedLoadingDelay;
+ (char)needsAVControls;

- (void)beginScrubbing;
- (void)endScrubbing;
- (<QLPreviewItem> *)previewItem;
- (void)setPreviewItem:(<QLPreviewItem> *)arg0;
- (void)enterBackground;
- (void)setOverlayHidden:(char)arg0 duration:(double)arg1;
- (void)togglePlayState;
- (void)loadWithHints:(NSDictionary *)arg0;
- (void)_performCancelLoad;
- (void)loadIfNeededWithHints:(NSDictionary *)arg0;
- (void)updateContentOffsetAnimated:(char)arg0;
- (void)didLoad;
- (void)_notifyDidLoadWithError:(NSError *)arg0;
- (UIView *)airplayView;
- (void)viewDidUpdate;
- (char)needsContentInset;
- (char)overlayIsHidden;
- (char)needsContentInsetEvenIfNavigationBarIsHidden;
- (float)navigationBarVerticalOffset;
- (char)canBeCached;
- (void)cancelLoadIfNeeded;
- (void)didFailLoadingWithError:(NSError *)arg0;
- (void)requiresDisplayBundle:(NSObject *)arg0 withHints:(NSDictionary *)arg1;
- (char)acceptControllerTouch:(id)arg0 fromGestureRecognizer:(NSObject *)arg1;
- (char)adaptativeHeight;
- (char)canCopyToPasteboard;
- (int)airPlayMode;
- (void)beginTrackingViewUpdates;
- (void)endTrackingViewUpdates;
- (void)setupAirPlayView;
- (void)discardAirPlayView;
- (NSData *)pdfPreviewData;
- (<QLRemotePrintPageHelper> *)printPageHelper;
- (void)scrubToValue:(double)arg0;
- (NSMutableSet *)gestureRecognizersForFullScreenDisplay;
- (struct ?)clientContext;
- (void)setClientContext:(struct ?)arg0;
- (void)setNavigationBarVerticalOffset:(float)arg0;
- (void)dealloc;
- (void)setDelegate:(<QLPreviewItemInteractionDelegate> *)arg0;
- (QLDisplayBundle *)init;
- (NSString *)description;
- (<QLPreviewItemInteractionDelegate> *)delegate;
- (void)didReceiveMemoryWarning;
- (int)modalPresentationStyle;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (UIScrollView *)scrollView;
- (int)index;
- (UIView *)accessoryView;
- (UIPrintPageRenderer *)printPageRenderer;
- (void)setIndex:(int)arg0;
- (char)loading;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (void)setLoaded:(char)arg0;
- (void)setPreviewMode:(int)arg0;
- (int)previewMode;
- (void)setLoading:(char)arg0;
- (void)cancelLoad;
- (char)loaded;
- (struct CGRect)contentFrame;

@end
