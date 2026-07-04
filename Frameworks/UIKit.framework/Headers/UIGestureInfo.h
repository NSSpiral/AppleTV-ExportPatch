/* Runtime dump - UIGestureInfo
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGestureInfo : NSObject
{
    id delegate;
    int enabledGestures;
    int rotationState;
    int zoomState;
    int panState;
    struct CGPoint startGestureInner;
    struct CGPoint startGestureOuter;
    struct CGPoint startScrollPoint;
    struct CGPoint endScrollPoint;
    struct CGSize visibleSize;
    struct CGRect centerRect;
    UIGestureAnimation * rotationAnimation;
    float rotationDegrees;
    float recentRotationDegrees;
    float minDegrees;
    float maxDegrees;
    float startDegrees;
    float endDegrees;
    UIGestureAnimation * zoomAnimation;
    int zoomRubberBandHysteresisCount;
    float zoomScale;
    float startScale;
    float endScale;
    float unadjustedScale;
    float zoomMultiplier;
    float minScale;
    float maxScale;
    struct CGPoint zoomFailureWindowPoint;
    float zoomFailureDuration;
    float zoomFailureStartScale;
    float zoomAnimationProgress;
    UIScrollAnimation * scrollAnimation;
    struct ? flags;
}

- (void)dealloc;
- (UIGestureInfo *)init;

@end
