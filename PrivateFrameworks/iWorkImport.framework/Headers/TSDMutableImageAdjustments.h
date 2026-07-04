/* Runtime dump - TSDMutableImageAdjustments
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMutableImageAdjustments : TSDImageAdjustments

@property (nonatomic) float exposure;
@property (nonatomic) float saturation;
@property (nonatomic) float contrast;
@property (nonatomic) float highlights;
@property (nonatomic) float shadows;
@property (nonatomic) float sharpness;
@property (nonatomic) float denoise;
@property (nonatomic) float temperature;
@property (nonatomic) float tint;
@property (nonatomic) float bottomLevel;
@property (nonatomic) float topLevel;
@property (nonatomic) float gamma;
@property (nonatomic) char enhance;
@property (nonatomic) char representsSageAdjustments;

- (void)setEnhance:(char)arg0;
- (void)setHighlights:(float)arg0;
- (void)setShadows:(float)arg0;
- (void)setDenoise:(float)arg0;
- (void)setTint:(float)arg0;
- (void)setBottomLevel:(float)arg0;
- (void)setTopLevel:(float)arg0;
- (void)setRepresentsSageAdjustments:(char)arg0;
- (void)setSaturation:(float)arg0;
- (void)setSharpness:(float)arg0;
- (TSDMutableImageAdjustments *)copyWithZone:(struct _NSZone *)arg0;
- (void)setContrast:(float)arg0;
- (void)setGamma:(float)arg0;
- (void)setExposure:(float)arg0;
- (void)setTemperature:(float)arg0;

@end
