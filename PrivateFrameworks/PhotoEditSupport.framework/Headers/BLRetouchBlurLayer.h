/* Runtime dump - BLRetouchBlurLayer
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchBlurLayer : BLRetouchEffectLayer
{
    char _sharpen;
    int _radius;
    float _radiusScale;
}

@property (nonatomic) int radius;
@property (nonatomic) float radiusScale;
@property (nonatomic) char sharpen;

+ (BLRetouchBlurLayer *)layerWithBlur:(int)arg0;
+ (BLRetouchBlurLayer *)layerWithSharpen:(int)arg0;

- (int)radius;
- (void)setRadius:(int)arg0;
- (struct CGContext *)newContextForRect:(struct CGRect)arg0 inDestRect:(struct CGSize)arg1 andScale:(id)arg2;
- (struct CGContext *)newContextWithEffect:(struct CGContext *)arg0;
- (char)hasAmount;
- (float)radiusScale;
- (char)sharpen;
- (void)setRadiusScale:(float)arg0;
- (void)setSharpen:(char)arg0;
- (int)radiusToApply;

@end
