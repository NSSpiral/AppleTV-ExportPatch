/* Runtime dump - UIInputViewTransition
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewTransition : NSObject
{
    UIInputViewSet * oldSet;
    UIInputViewSet * newSet;
    UIInputViewAnimationStyle * animationStyle;
    char cancelled;
    int animationState;
    double animationStartTime;
    char skipNotifications;
    char skipFencing;
    struct CGRect beginFrame;
    struct CGRect endFrame;
    struct CGRect beginFrameScreen;
    struct CGRect endFrameScreen;
    struct CGRect beginFloatingFrame;
    struct CGRect endFloatingFrame;
    struct CGRect beginFloatingFrameScreen;
    struct CGRect endFloatingFrameScreen;
    UISnapshotView * snapshotView;
    int activeClippingModes;
    struct CGRect snapshotViewBeginFrame;
    struct CGRect snapshotViewEndFrame;
}

@property (retain, nonatomic) UIInputViewSet * oldSet;
@property (retain, nonatomic) UISnapshotView * snapshotView;
@property (nonatomic) struct CGRect snapshotViewBeginFrame;
@property (nonatomic) struct CGRect snapshotViewEndFrame;
@property (retain, nonatomic) UIInputViewAnimationStyle * animationStyle;
@property (nonatomic) char cancelled;
@property (nonatomic) int animationState;
@property (nonatomic) double animationStartTime;
@property (nonatomic) char skipNotifications;
@property (nonatomic) char skipFencing;
@property (nonatomic) struct CGRect beginFrame;
@property (nonatomic) struct CGRect endFrame;
@property (nonatomic) struct CGRect beginFrameScreen;
@property (nonatomic) struct CGRect endFrameScreen;
@property (nonatomic) struct CGRect beginFloatingFrame;
@property (nonatomic) struct CGRect endFloatingFrame;
@property (nonatomic) struct CGRect beginFloatingFrameScreen;
@property (nonatomic) struct CGRect endFloatingFrameScreen;
@property (readonly, nonatomic) char ignoreFrameChanges;
@property (nonatomic) int activeClippingModes;
@property (readonly, nonatomic) int beginState;
@property (readonly, nonatomic) int transitioningState;
@property (readonly, nonatomic) int endState;
@property (readonly, nonatomic) int cancelState;
@property (readonly, nonatomic) struct CGRect deprecatedBounds;
@property (readonly, nonatomic) struct CGPoint deprecatedCenterBegin;
@property (readonly, nonatomic) struct CGPoint deprecatedCenterEnd;

- (void)dealloc;
- (NSString *)description;
- (UISnapshotView *)snapshotView;
- (void)setAnimationStartTime:(double)arg0;
- (char)cancelled;
- (void)setCancelled:(char)arg0;
- (void)setEndFrame:(struct CGRect)arg0;
- (struct CGRect)endFrame;
- (char)isOnScreen;
- (char)shouldCompleteOnSuspend;
- (UIInputViewAnimationStyle *)animationStyle;
- (char)skipFencing;
- (char)ignoreFrameChanges;
- (struct CGRect)endFrameScreen;
- (int)animationState;
- (char)shouldRecomputeEndFrame;
- (UIInputViewSet *)oldSet;
- (UIInputViewSet *)newSet;
- (void)setEndFrameScreen:(struct CGRect)arg0;
- (struct CGRect)beginFrame;
- (struct CGRect)snapshotViewBeginFrame;
- (struct CGRect)snapshotViewEndFrame;
- (int)activeClippingModes;
- (char)fadeAccessoryView;
- (char)requiresAutomaticAppearanceEnabled;
- (int)endState;
- (char)subsumesTransition:(NSObject *)arg0;
- (void)postNotificationsForTransitionEnd;
- (void)postNotificationsForTransitionStart;
- (void)setActiveClippingModes:(int)arg0;
- (void)setAnimationState:(int)arg0;
- (int)transitioningState;
- (int)cancelState;
- (void)setOldSet:(UIInputViewSet *)arg0;
- (void)setNewSet:(UIInputViewSet *)arg0;
- (void)setBeginFrameScreen:(struct CGRect)arg0;
- (void)setAnimationStyle:(UIInputViewAnimationStyle *)arg0;
- (void)setBeginFrame:(struct CGRect)arg0;
- (void)setSkipNotifications:(char)arg0;
- (void)setSkipFencing:(char)arg0;
- (void)setBeginFloatingFrame:(struct CGRect)arg0;
- (void)setEndFloatingFrame:(struct CGRect)arg0;
- (void)setBeginFloatingFrameScreen:(struct CGRect)arg0;
- (void)setEndFloatingFrameScreen:(struct CGRect)arg0;
- (struct CGRect)beginFrameScreen;
- (struct CGRect)beginFloatingFrame;
- (struct CGRect)endFloatingFrame;
- (char)isAccessoryViewChangedOnly;
- (void)setSnapshotView:(UISnapshotView *)arg0;
- (struct CGRect)deprecatedBounds;
- (struct CGPoint)deprecatedCenterBegin;
- (struct CGPoint)deprecatedCenterEnd;
- (char)skipNotifications;
- (NSObject *)userInfoForTransition;
- (struct CGRect)beginFloatingFrameScreen;
- (struct CGRect)endFloatingFrameScreen;
- (char)isAlmostDone;
- (double)animationStartTime;
- (int)beginState;
- (void)setSnapshotViewBeginFrame:(struct CGRect)arg0;
- (void)setSnapshotViewEndFrame:(struct CGRect)arg0;

@end
