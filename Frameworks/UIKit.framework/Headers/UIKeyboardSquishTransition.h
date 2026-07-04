/* Runtime dump - UIKeyboardSquishTransition
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSquishTransition : UIKeyboardKeyplaneTransition
{
    float _widthRatio;
    float _offsetX;
    char _transitionNeedsUpdate;
    char _nonoverlappingCrossfade;
    char _disableMeshOptimization;
    unsigned int _animationType;
    NSArray * _startGeometries;
    NSArray * _endGeometries;
    NSArray * _commonVisibleKeys;
}

@property (nonatomic) char nonoverlappingCrossfade;
@property (nonatomic) unsigned int animationType;
@property (nonatomic) char disableMeshOptimization;
@property (readonly, nonatomic) float transitionOverlapDelta;
@property (retain, nonatomic) NSArray * startGeometries;
@property (retain, nonatomic) NSArray * endGeometries;
@property (retain, nonatomic) NSArray * commonVisibleKeys;

- (void)dealloc;
- (void)removeAllAnimations;
- (void)updateWithProgress:(float)arg0;
- (void)rebuildWithStartKeyplane:(id)arg0 startView:(UIView *)arg1 endKeyplane:(id)arg2 endView:(UIView *)arg3;
- (void)commitTransitionRebuild;
- (float)transitionOverlapDelta;
- (void)setAnimationType:(unsigned int)arg0;
- (void)setDisableMeshOptimization:(char)arg0;
- (void)setStartGeometries:(NSArray *)arg0;
- (void)setEndGeometries:(NSArray *)arg0;
- (NSArray *)sortedCommonVisibleKeys;
- (void)setCommonVisibleKeys:(NSArray *)arg0;
- (void)_updateTransition;
- (char)nonoverlappingCrossfade;
- (unsigned int)animationType;
- (id)meshTransformForKeyplane:(id)arg0 toKeyplane:(UIKBCacheToken_Keyplane *)arg1;
- (void)updateTransitionIfNeeded;
- (NSArray *)startGeometries;
- (NSArray *)endGeometries;
- (NSArray *)commonVisibleKeys;
- (char)disableMeshOptimization;
- (id)geometriesForKeyplane:(id)arg0;
- (id)symmetricMeshTransformForKeyplane:(id)arg0;
- (void)setNonoverlappingCrossfade:(char)arg0;

@end
