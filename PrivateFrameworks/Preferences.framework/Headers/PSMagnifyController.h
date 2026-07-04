/* Runtime dump - PSMagnifyController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSMagnifyController : PSListController <UIScrollViewDelegate, UIWebViewDelegate>
{
    PSMagnifyMode * _originalMagnifyMode;
    PSMagnifyMode * _selectedMagnifyMode;
    UISegmentedControl * _magnifyModePicker;
    UIScrollView * _previewsScroller;
    UIPageControl * _pageControl;
    UIView * _dividerLine;
    NSURL * _HTMLResourceBaseURL;
    NSMutableDictionary * _webViewsForMagnifyMode;
    NSObject<OS_dispatch_semaphore> * _firstLoadSemaphore;
    char _loaded;
    PSMagnifyMode * _initialMagnifyMode;
    char _doneButtonCommits;
    <PSMagnifyControllerDelegate> * _delegate;
}

@property (nonatomic) char doneButtonCommits;
@property (nonatomic) <PSMagnifyControllerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)commitMagnifyMode:(id)arg0 withRelaunchURL:(NSURL *)arg1;
+ (char)shouldShowMagnify;
+ (NSString *)localizedMagnifyModeName;
+ (PSMagnifyController *)currentMagnifyMode;
+ (void)commitMagnifyMode:(id)arg0;

- (void)updateNavigationButtons;
- (void)dealloc;
- (void)setDelegate:(<PSMagnifyControllerDelegate> *)arg0;
- (PSMagnifyController *)init;
- (void)scrollViewDidScroll:(UIScrollView *)arg0;
- (<PSMagnifyControllerDelegate> *)delegate;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg0 withTransitionCoordinator:(NSObject *)arg1;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)webViewDidFinishLoad:(UIWebView *)arg0;
- (NSArray *)specifiers;
- (PSMagnifyController *)initWithZoomedSelected:(char)arg0;
- (NSNumber *)arrayOfWebViewsWithCount:(unsigned int)arg0;
- (NSString *)localizedCSSStringFromUnlocalizedCSSString:(NSString *)arg0;
- (void)magnifyModeSelectionChanged:(NSNotification *)arg0;
- (void)setSelectedMagnifyMode:(PSMagnifyMode *)arg0;
- (NSSet *)currentWebViewSet;
- (char)doneButtonCommits;
- (void)magnifyModeConfirmed:(id)arg0;
- (void)finishDone:(id)arg0;
- (void)finishCancel:(id)arg0;
- (void)setDoneButtonCommits:(char)arg0;

@end
