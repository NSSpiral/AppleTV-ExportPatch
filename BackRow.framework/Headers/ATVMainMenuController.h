/* Runtime dump - ATVMainMenuController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol BREventDelegate;

@class ATVMainMenuButton, ATVMainMenuButtonGrid, BRControl, BRCursorControl, BREvent, BRGridControl, BRImageControl, BRShimmerControl, BRTopShelfView;
@interface ATVMainMenuController : BRViewController <BREventDelegate>
{
    BRControl * _containerView;
    BRControl * _containerViewFocusedControl;
    <BRTopShelfController> * _shelfController;
    BRImageControl * _shelfBackground;
    BRImageControl * _appsBackground;
    BRImageControl * _appsBackgroundShroud;
    BRTopShelfView * _topShelfView;
    ATVMainMenuButton * _savedFocusedInternetAppButton;
    char _shelfTransitionInFlight;
    char _needsUpdateImagesForChangedAppliances;
    char _isGridViewEditing;
    char _needsUpdateAppliances;
    char _suppressShelfReloadFromFocusedAppliance;
    ATVMainMenuButtonGrid * _mainApplicationsGrid;
    ATVMainMenuButtonGrid * _internetContentGrid;
    BRShimmerControl * _topDivider;
    BRControl * _bottomInternetContentFadeMask;
    BRControl * _topInternetContentFadeMask;
    BRControl * _internetContextualMenuOverlay;
    <ATVMainMenuControllerDelegate> * _delegate;
    NSTimer * _contextualMenuOverlayTimer;
    BRCursorControl * _cursor;
    <BRAppliance> * _focusedTopShelfAppliance;
    NSMutableDictionary * _shelfControllersByApplication;
    NSString * _uniqueIDForPlayPauseRegistration;
    ATVBackgroundTask * _topShelfRefreshTask;
    NSMutableArray * _changedAppliances;
    NSDictionary * _layoutInfo;
    NSMutableDictionary * _applianceIconCache;
    NSArray * _appliances;
    <BRAppliance> * _focusedGridAppliance;
    NSArray * _otherAppliances;
    NSArray * _topShelfAppliances;
}

@property (readonly, nonatomic) <BRAppliance> * focusedTopShelfAppliance;
@property (retain, nonatomic) <BRAppliance> * focusedGridAppliance;
@property (nonatomic) <ATVMainMenuControllerDelegate> * delegate;
@property (copy, nonatomic) NSArray * otherAppliances;
@property (copy, nonatomic) NSArray * topShelfAppliances;
@property (copy, nonatomic) NSArray * appliances;

+ (ATVMainMenuController *)mainMenu;
+ (char)automaticallyNotifiesObserversOfOtherAppliances;
+ (char)automaticallyNotifiesObserversOfTopShelfAppliances;

- (NSArray *)accessibilityScreenContent;
- (void)controlWasActivated;
- (void)grid:(BRGridControl *)arg0 didSelectItemAtIndex:(long)arg1;
- (void)grid:(BRGridControl *)arg0 didPlayItemAtIndex:(long)arg1;
- (void)gridViewDidBeginEditing:(id)arg0;
- (void)gridViewDidEndEditing:(id)arg0;
- (void)_handleWindowMaxBoundsChanged;
- (char)brEventAction:(BREvent *)arg0 withControl:(BRControl *)arg1;
- (void)_handleIconManagerImageUpdatedNotification:(NSNotification *)arg0;
- (void)merchantChanged:(NSNotification *)arg0;
- (void)_refreshTopShelfControllers;
- (NSArray *)appliances;
- (id)AvailableAppliancesBinding;
- (void)updateBoundAvailableAppliances;
- (void)_updateAppliancesIfNeeded;
- (void)setAppliances:(NSArray *)arg0;
- (void)_updateCachedApplianceImages;
- (<BRAppliance> *)focusedGridAppliance;
- (<BRAppliance> *)focusedTopShelfAppliance;
- (NSArray *)_arrangeAppliances:(id)arg0;
- (void)setOtherAppliances:(NSArray *)arg0;
- (void)setTopShelfAppliances:(NSArray *)arg0;
- (void)setFocusedGridAppliance:(<BRAppliance> *)arg0;
- (void)setFocusedTopShelfAppliance:(<BRAppliance> *)arg0;
- (id)FocusedContainerControlBinding;
- (void)updateBoundFocusedControlOfContainerView;
- (void)_scrollApplicationsToVisible;
- (NSArray *)otherAppliances;
- (void)_scrollShelfToVisible;
- (void)_pushControllerForAppliance:(id)arg0;
- (void)_reloadTopShelfWithoutAnimating;
- (id)_newBackgroundWithImageNamed:(id)arg0;
- (id)_newMainApplicationsGrid;
- (id)_newInternetContentGrid;
- (void)handleInternetGridWillScroll;
- (id)topShelfControllerForApp:(id)arg0;
- (id)_newBackgroundWithImageNamed:(id)arg0 asContents:(char)arg1;
- (id)_iconForAppliance:(id)arg0;
- (void)_installOrRemoveEdgeFadeMasksAsNecessary;
- (void)_animateContainerViewToPosition:(struct CGPoint)arg0;
- (void)_installBottomEdgeFadeMask;
- (void)_removeBottomEdgeFadeMask;
- (void)_installTopEdgeFadeMask;
- (void)_removeTopEdgeFadeMask;
- (void)_installEdgeFadeMask:(NSObject *)arg0;
- (void)_removeEdgeFadeMask:(NSObject *)arg0;
- (void)_setupTopShelfView;
- (NSArray *)topShelfAppliances;
- (void)_setNeedsUpdateApplianceImages;
- (char)_handleTouchEvent:(NSObject *)arg0;
- (char)_handleRemoteEvent:(NSObject *)arg0;
- (void)_displayOneTimeGridEditHint;
- (void)_reloadTopShelf;
- (void)_parentalControlsPINSuccessfullyEntered:(id)arg0;
- (void)_parentalControlsPINCancelled:(id)arg0;
- (void)_hideInternetApplianceWithMerchantIdentifier:(NSString *)arg0;
- (char)_applianceCanBeHidden:(id)arg0;
- (void)_contextMenuOverlayTimerExpired:(id)arg0;
- (void)_removeContextMenuOverlayIfNecessaryWithFadeDuation:(double)arg0;
- (void)_displayContextMenuForMerchant:(id)arg0;
- (void)_installContextMenuOverlayIfNecessary;
- (void)_removeContextMenuOverlayIfNecessary;
- (char)brKeyEvent:(BREvent *)arg0 withControl:(BRControl *)arg1;
- (void)bindAvailableAppliancesBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)bindFocusedContainerControlBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)focusApplianceWithIdentifier:(NSString *)arg0;
- (char)canBeRemovedFromStack;
- (id)didBeginEditingVoiceOverStringForGrid:(id)arg0;
- (void)_coalescedUpdateImagesForChangedAppliances;
- (void)_layoutViews;
- (void)dealloc;
- (void)setDelegate:(<ATVMainMenuControllerDelegate> *)arg0;
- (ATVMainMenuController *)init;
- (<ATVMainMenuControllerDelegate> *)delegate;
- (BRControl *)view;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (NSString *)accessibilityLabel;
- (void)_layoutContainerView;
- (void).cxx_destruct;
- (void)_reload;

@end
