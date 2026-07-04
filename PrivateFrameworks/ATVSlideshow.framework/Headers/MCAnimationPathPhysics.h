/* Runtime dump - MCAnimationPathPhysics
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCAnimationPathPhysics : MCAnimationPath
{
    float _staticFriction;
    float _kineticFriction;
    float _skinFriction;
}

@property (nonatomic) float staticFriction;
@property (nonatomic) float kineticFriction;
@property (nonatomic) float skinFriction;

- (float)staticFriction;
- (void)setStaticFriction:(float)arg0;
- (float)kineticFriction;
- (void)setKineticFriction:(float)arg0;
- (float)skinFriction;
- (void)setSkinFriction:(float)arg0;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCAnimationPathPhysics *)initWithImprint:(NSDictionary *)arg0;
- (NSDictionary *)imprint;

@end
