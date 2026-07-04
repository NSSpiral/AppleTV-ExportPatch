/* Runtime dump - MREffectReflections
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectReflections : MREffect
{
    NSMutableDictionary * mSprites;
    char mSpeedUpRight;
    char mIsLoaded;
    NSMutableDictionary * mLayoutInfo;
    NSMutableDictionary * mBreakInformation;
    char mHasBreak;
    char mShrink;
    int mTilt;
    int mPhaseOutType;
    int mDirection;
    int mLayout;
    int mAspect;
    MRImageProvider * mGroundShadowCenterProvider;
    MRImageProvider * mGroundShadowLeftProvider;
    MRImageProvider * mGroundShadowRightProvider;
    MRReflectionsRenderable * mHead;
    MRReflectionsRenderable * mTail;
}

+ (void)initialize;

- (void)_unload;
- (void)_cleanup;
- (void)setAttributes:(NSDictionary *)arg0;
- (MREffectReflections *)initWithEffectID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)beginMorphingToAspectRatio:(float)arg0 withDuration:(double)arg1;
- (void)endMorphing;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (void)_applySizeScripts:(float)arg0;
- (float)_yRotationForTime:(double)arg0 layout:(NSObject *)arg1;
- (float)_tXForTime:(double)arg0 layout:(NSObject *)arg1;
- (float)_yOffsetForTime:(double)arg0 layout:(NSObject *)arg1 size:(struct CGSize)arg2 position:(struct CGPoint)arg3 aspectRatio:(float)arg4;
- (void)renderKey:(NSString *)arg0 size:(struct CGSize)arg1 position:(struct CGPoint)arg2 yRot:(float)arg3 tX:(float)arg4 time:(double)arg5 inContext:(NSObject *)arg6 withArguments:(NSDictionary *)arg7 flipped:(char)arg8 shadow:(char)arg9;
- (void)renderStuffAtTime:(double)arg0 alpha:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3;

@end
