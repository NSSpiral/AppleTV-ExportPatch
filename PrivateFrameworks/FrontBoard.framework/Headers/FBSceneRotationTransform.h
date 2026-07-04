/* Runtime dump - FBSceneRotationTransform
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneRotationTransform : FBSceneTransform
{
    int _degrees;
    float _radians;
}

@property (nonatomic) int degrees;
@property (nonatomic) float radians;

- (void)_updateTransform;
- (NSString *)description;
- (FBSceneRotationTransform *)initWithRadians:(float)arg0;
- (FBSceneRotationTransform *)initWithDegrees:(int)arg0;
- (void)setRadians:(float)arg0;
- (void)setDegrees:(int)arg0;
- (float)radians;
- (int)degrees;

@end
