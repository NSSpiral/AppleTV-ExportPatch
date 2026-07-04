/* Runtime dump - MREffectModern
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectModern : MREffect
{
    MRCroppingSprite * mSprite;
    MRImageProvider * mGradientProvider;
}

- (char)isOpaque;
- (void)_cleanup;
- (MREffectModern *)initWithEffectID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (void)renderImage:(UIImage *)arg0 withMask:(NSObject *)arg1 inContext:(NSObject *)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4 zRotation:(float)arg5;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (id)patchworkAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)isNative3D;
- (char)isAlphaFriendly;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;

@end
