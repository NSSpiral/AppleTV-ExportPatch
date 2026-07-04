/* Runtime dump - BLRetouchExposureLayer
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchExposureLayer : BLRetouchEffectLayer
{
    float _currentExposure;
    float * _cubeData;
    float _exposure;
}

@property (nonatomic) float exposure;

+ (BLRetouchExposureLayer *)layerWithExposure:(float)arg0;

- (void)dealloc;
- (struct CGImage *)newImageFromContextWithEffect:(struct CGContext *)arg0;
- (float *)cubeData;
- (float)exposure;
- (void)setExposure:(float)arg0;

@end
