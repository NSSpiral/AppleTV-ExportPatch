/* Runtime dump - MREffectShadedColors
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectShadedColors : MREffect
{
    MRCroppingSprite * _sprite;
    id _primaryColor;
    id _secondaryColor;
}

+ (void)initialize;

- (void)_unload;
- (void)setAttributes:(NSDictionary *)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)beginMorphingToAspectRatio:(float)arg0 withDuration:(double)arg1;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;

@end
