/* Runtime dump - FBRootWindow
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBRootWindow : FBWindow <FBSceneTransformTarget>
{
    UIView * _sceneContainerView;
    NSHashTable * _transforms;
    char _mainDisplay;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)_isSecure;

- (void)dealloc;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (char)_isWindowServerHostingManaged;
- (char)_isConstrainedByScreenJail;
- (char)_usesWindowServerHitTesting;
- (char)_canBecomeKeyWindow;
- (void)setScreen:(UIScreen *)arg0;
- (char)_isRotatedByScreenJail;
- (char)_isScaledByScreenJail;
- (char)_shouldApplyHorizontalPixelScaleTransform;
- (char)_isOffsetByScreenJail;
- (char)_isClippedByScreenJail;
- (char)_shouldPrepareScreenForWindow;
- (char)_appearsInLoupe;
- (FBRootWindow *)initWithDisplay:(NSObject *)arg0;
- (void)transformDidInvalidate:(NSDate *)arg0;
- (void)transformDidUpdate:(NSDate *)arg0;
- (void)attachSceneTransform:(NSObject *)arg0;
- (void)removeSceneTransform:(NSObject *)arg0;
- (UIView *)sceneContainerView;
- (void)_updateTransforms;
- (void)_noteScreenDidChangeMode:(id)arg0;
- (void)updateSceneSettings;

@end
