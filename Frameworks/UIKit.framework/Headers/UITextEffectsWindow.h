/* Runtime dump - UITextEffectsWindow
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UIScreenBasedObject>
{
    char _inDealloc;
    unsigned int _activeEffectsCount;
    unsigned int _hostedUseCount;
    float _defaultWindowLevel;
    struct CGPoint _hostedWindowOffset;
    NSDictionary * _perScreenOptions;
    unsigned int _activeRemoteViewCount;
    unsigned int _windowLevelCount;
    id _windowLevelStack;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) UIScreen * _intendedScreen;
@property (readonly) NSDictionary * _options;
@property (nonatomic) char useHostedInstance;
@property (readonly) unsigned int contextID;
@property (nonatomic) float defaultWindowLevel;
@property (nonatomic) struct CGPoint hostedWindowOffset;
@property (readonly, nonatomic) struct CGRect hostedFrame;

+ (char)_isSystemWindow;
+ (NSObject *)activeTextEffectsWindowForScreen:(NSObject *)arg0;
+ (UITextEffectsWindow *)sharedTextEffectsWindowForScreen:(NSObject *)arg0;
+ (NSObject *)_sharedTextEffectsWindowforScreen:(NSObject *)arg0 aboveStatusBar:(char)arg1 allowHosted:(char)arg2 matchesStatusBarOrientationOnAccess:(char)arg3;
+ (UITextEffectsWindow *)sharedTextEffectsWindow;
+ (UITextEffectsWindow *)sharedTextEffectsWindowAboveStatusBar;
+ (void)releaseSharedInstances;
+ (void)raiseTextEffectsWindowsForShowNotificationCenter;
+ (void)lowerTextEffectsWindowsForHideNotificationCenter;

- (UITextEffectsWindow *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (struct CGPoint)convertPoint:(struct CGPoint)arg0 fromView:(UIView *)arg1;
- (void)bringSubviewToFront:(id)arg0;
- (void)sendSubviewToBack:(id)arg0;
- (int)interfaceOrientation;
- (struct CGRect)convertRect:(NSObject *)arg0 toView:(SEL)arg1;
- (char)_isTextEffectsWindow;
- (struct CGRect)_sceneReferenceBounds;
- (char)_shouldTintStatusBar;
- (char)_canActAsKeyWindowForScreen:(NSObject *)arg0;
- (char)_shouldParticipateInVirtualResizing;
- (struct CGPoint)convertPoint:(struct CGPoint)arg0 fromWindow:(NSObject *)arg1;
- (struct CGRect)_sceneBounds;
- (struct CGRect)convertRect:(NSObject *)arg0 fromWindow:(SEL)arg1;
- (char)_canAffectStatusBarAppearance;
- (struct CGRect)convertRect:(NSObject *)arg0 fromView:(SEL)arg1;
- (char)isInternalWindow;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (void)_updateTransformLayerForClassicPresentation;
- (void)_configureContextOptions:(NSDictionary *)arg0;
- (struct CGPoint)convertPoint:(struct CGPoint)arg0 toWindow:(NSObject *)arg1;
- (struct CGRect)convertRect:(NSObject *)arg0 toWindow:(SEL)arg1;
- (char)_shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)_handleStatusBarOrientationChange:(NSDictionary *)arg0;
- (void)handleStatusBarChangeFromHeight:(float)arg0 toHeight:(float)arg1;
- (char)_shouldResizeWithScene;
- (char)_disableViewScaling;
- (struct CGPoint)convertPoint:(struct CGPoint)arg0 toView:(UIView *)arg1;
- (void)didAddSubview:(_UIVisualEffectSubview *)arg0;
- (void)_didRemoveSubview:(_UIVisualEffectSubview *)arg0;
- (NSDictionary *)_options;
- (struct CGPoint)hostedWindowOffset;
- (char)useHostedInstance;
- (void)_matchDeviceOrientation;
- (NSObject *)_basicInitWithScreen:(NSObject *)arg0 options:(NSDictionary *)arg1;
- (void)setDefaultWindowLevel:(float)arg0;
- (float)defaultWindowLevel;
- (NSObject *)_initWithScreen:(NSObject *)arg0 options:(NSDictionary *)arg1;
- (char)_matchingOptions:(NSDictionary *)arg0;
- (UIScreen *)_intendedScreen;
- (void)applicationWindowRotated:(id)arg0;
- (struct CGPoint)_adjustPointForHostedDisplay:(struct CGPoint)arg0 hasTarget:(char)arg1 inset:(char)arg2;
- (void)delayHideWindow;
- (void)sortSubviews;
- (void)updateForOrientation:(int)arg0;
- (void)updateForOrientation:(int)arg0 forceResetTransform:(char)arg1;
- (UIWindow *)aboveStatusBarWindow;
- (void)setUseHostedInstance:(char)arg0;
- (unsigned int)contextID;
- (void)_setWindowLevel:(float)arg0;
- (void)_restoreWindowLevel;
- (struct CGRect)hostedFrame;
- (struct CGPoint)classicWindowPointForPoint:(struct CGPoint)arg0;
- (struct CGPoint)magnifierScreenPointForPoint:(struct CGPoint)arg0 targetWindow:(NSObject *)arg1;
- (void)resetTransform;
- (void)updateSubviewOrdering;
- (UIWindow *)nonHostedWindow;
- (void)setHostedWindowOffset:(struct CGPoint)arg0;

@end
