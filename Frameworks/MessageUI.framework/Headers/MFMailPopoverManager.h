/* Runtime dump - MFMailPopoverManager
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailPopoverManager : NSObject <UIPopoverPresentationControllerDelegate, UIActionSheetDelegate>
{
    id _delegate;
    id _actionSheetDelegate;
    NSArray * _explicitPassthroughViews;
    UIActionSheet * _actionSheet;
    MFPopoverController * _popoverController;
    UIBarButtonItem * _currentBarButtonItem;
    UIView * _currentView;
    struct CGRect _currentRect;
    NSMutableArray * _passThroughContexts;
    unsigned int _currentArrowDirections;
    double _popoverDismissalEnd;
    char _popoverBeingHiddenDuringRotation;
    char _isHandlingActionSheetClick;
    char _popoverDismissalIsDelayed;
    char _popoverDismissalShouldBeAnimated;
}

@property (nonatomic) char popoverBeingHiddenDuringRotation;
@property (nonatomic) char rasterizePopoverLayer;
@property (retain, nonatomic) MFPopoverController * popoverController;
@property (retain, nonatomic) UIActionSheet * actionSheet;
@property (retain, nonatomic) UIBarButtonItem * currentBarButtonItem;
@property (retain, nonatomic) UIView * currentView;
@property (nonatomic) struct CGRect currentRect;
@property (nonatomic) unsigned int currentArrowDirections;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MFMailPopoverManager *)managerForWindow:(NSObject *)arg0 createIfNeeded:(char)arg1;
+ (void)enumerateManagersUsingBlock:(id /* block */)arg0;
+ (void)dismissPopover:(id)arg0 animated:(char)arg1;

- (void)presentPopover:(id)arg0 fromRect:(struct CGRect)arg1 inView:(struct CGSize)arg2 direction:(TDThemeDirection *)arg3 allowInteractionWithViews:(id)arg4 withDelegate:(unsigned int)arg5 animated:(char)arg6;
- (char)popoverBeingHiddenDuringRotation;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg0 isUserAction:(char)arg1;
- (char)popoverShowing;
- (char)_isEquivalentToCurrentPopover:(id)arg0;
- (void)_cleanupCurrentPopover;
- (void)setCurrentBarButtonItem:(UIBarButtonItem *)arg0;
- (void)setActionSheet:(UIActionSheet *)arg0;
- (void)_willPresentPopover:(id)arg0;
- (id)_allPassthroughViewsIncludingViews:(id)arg0 excludingViews:(id)arg1;
- (void)setCurrentView:(UIView *)arg0;
- (void)_configureDelegate:(NSObject *)arg0 forPopoverController:(BRController *)arg1;
- (void)setCurrentArrowDirections:(unsigned int)arg0;
- (UIBarButtonItem *)currentBarButtonItem;
- (unsigned int)currentArrowDirections;
- (void)setCurrentRect:(struct CGRect)arg0;
- (UIView *)currentView;
- (struct CGRect)currentRect;
- (UIActionSheet *)actionSheet;
- (void)_dismissPopoverNow;
- (void)_popoverDismissalDidFinish;
- (NSArray *)_currentPassthroughProviders;
- (char)_delegateSupportsRotation;
- (void)setPopoverBeingHiddenDuringRotation:(char)arg0;
- (void)presentPopover:(id)arg0 fromBarButtonItem:(NSObject *)arg1 animated:(char)arg2;
- (void)presentPopover:(id)arg0 fromView:(UIView *)arg1 animated:(char)arg2;
- (void)presentPopover:(id)arg0 fromBarButtonItem:(NSObject *)arg1 withDelegate:(NSObject *)arg2 animated:(char)arg3;
- (void)dismissPopoverAfterDelay:(double)arg0 animated:(char)arg1;
- (char)popoverDismissalIsDelayed;
- (double)delayUntilPopoverFinishesDismissing;
- (void)addPassthroughViewProvider:(NSObject *)arg0;
- (void)removePassthroughViewProvider:(NSObject *)arg0;
- (void)beginModalPassthroughContext;
- (void)endModalPassthroughContext;
- (void)addPassthroughView:(NSObject *)arg0;
- (void)removePassthroughView:(NSObject *)arg0;
- (char)rasterizePopoverLayer;
- (void)setRasterizePopoverLayer:(char)arg0;
- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (MFMailPopoverManager *)init;
- (MFMailPopoverManager *)_init;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)actionSheet:(UIActionSheet *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)actionSheetCancel:(UIActionSheet *)arg0;
- (void)willPresentActionSheet:(NSObject *)arg0;
- (void)didPresentActionSheet:(NSObject *)arg0;
- (void)actionSheet:(UIActionSheet *)arg0 willDismissWithButtonIndex:(int)arg1;
- (void)actionSheet:(UIActionSheet *)arg0 didDismissWithButtonIndex:(int)arg1;
- (int)adaptivePresentationStyleForPresentationController:(BRController *)arg0;
- (void)dismissPopoverAnimated:(char)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void)willRotate;
- (void)didRotate;
- (void)setPopoverController:(MFPopoverController *)arg0;
- (MFPopoverController *)popoverController;
- (WKSelectPopover *)popover;

@end
