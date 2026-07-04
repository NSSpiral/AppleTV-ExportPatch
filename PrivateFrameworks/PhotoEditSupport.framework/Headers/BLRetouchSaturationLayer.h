/* Runtime dump - BLRetouchSaturationLayer
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchSaturationLayer : BLRetouchEffectLayer
{
    float _saturation;
}

@property (nonatomic) float saturation;

+ (BLRetouchSaturationLayer *)layerWithSaturation:(float)arg0;

- (float)saturation;
- (void)setSaturation:(float)arg0;
- (void)dealloc;
- (struct CGContext *)newContextWithEffect:(struct CGContext *)arg0;

@end
