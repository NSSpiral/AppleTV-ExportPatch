/* Runtime dump - MREffectMapSlides
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectMapSlides : MREffect
{
    NSMutableDictionary * mSprites;
    MRImageProvider * mBoxShadowBig;
    MRImageProvider * mBoxShadowBigBottom;
    MRImageProvider * mBoxShadowBigTop;
    MURandom * mRandom;
}

- (void)_unload;
- (void)_cleanup;
- (MREffectMapSlides *)initWithEffectID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (void)render2SlidesAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2 scale:(float)arg3;
- (void)render3SlidesAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2 scale:(float)arg3;
- (void)render4SlidesAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2 scale:(float)arg3;
- (void)render1SlideAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2 scale:(float)arg3;
- (void)_renderBigShadowForRect:(struct CGRect)arg0 scale:(struct CGSize)arg1 rects:(NSArray *)arg2 atTime:(float)arg3 inContext:(NSObject *)arg4 withArguments:(double)arg5;
- (void)renderKey:(NSString *)arg0 shadow:(TSDShadow *)arg1 shadowRect:(struct CGRect)arg2 size:(struct CGSize)arg3 position:(NSObject *)arg4 xRot:(struct CGSize)arg5 tX:(struct CGPoint)arg6 isPano:(float)arg7 time:(float)arg8 inContext:(char)arg9 withArguments:(double)arg10;

@end
