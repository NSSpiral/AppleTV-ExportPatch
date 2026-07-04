/* Runtime dump - BLAdjustmentModel
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLAdjustmentModel : NSObject
{
    float _whiteLevel;
    float _blackLevel;
    float _brightness;
    float _contrast;
    float _autoShadowsMaxLevel;
    float _autoBlackLevelAtShadowsMaxLevel;
    int _highlightShadowAdjustVersion;
    char _hasPentaCurve;
    char _reprocessPentaCurve;
    struct ? _whiteBalance;
    char _hasWhiteBalance;
    char _reprocessWhiteBalance;
    float _saturation;
    char _useVibrancy;
    char _hasSaturation;
    char _reprocessSaturation;
    float _faceBalanceWarmth;
    char _hasFaceBalance;
    char _reprocessFaceBalance;
    float _saturationSky;
    float _saturationGrass;
    char _hasSkyAndGrass;
    char _reprocessSkyAndGrass;
    float _underwaterBalanceDepthStrength;
    float _underwaterBalanceWaterBlend;
    char _hasUnderwaterBalance;
    char _reprocessUnderwaterBalance;
    char _hasColor;
    char _hasExposure;
    char _isChainBuilt;
    float _histogramBlackPoint;
    float _histogramWhitePoint;
    float _histogramAverageLinearRed;
    float _histogramAverageLinearGreen;
    float _histogramAverageLinearBlue;
    CIFilter * _curvesFilter;
    CIFilter * _colorFilter;
    CIFilter * _vibranceFilter;
    CIFilter * _faceBalanceFilter;
    CIFilter * _skyAndGrassFilter;
    CIFilter * _underwaterBalanceFilter;
    CIFilter * _highlightsAndShadowsFilter;
    CIFilter * _tempAndTintFilter;
    CIFilter * _colorBalanceFilter;
}

@property (retain, nonatomic) CIFilter * curvesFilter;
@property (retain, nonatomic) CIFilter * colorFilter;
@property (retain, nonatomic) CIFilter * vibranceFilter;
@property (retain, nonatomic) CIFilter * faceBalanceFilter;
@property (retain, nonatomic) CIFilter * skyAndGrassFilter;
@property (retain, nonatomic) CIFilter * underwaterBalanceFilter;
@property (retain, nonatomic) CIFilter * highlightsAndShadowsFilter;
@property (retain, nonatomic) CIFilter * tempAndTintFilter;
@property (retain, nonatomic) CIFilter * colorBalanceFilter;

+ (NSData *)exposureValuesForToneCurveData:(NSData *)arg0 highlightsAndShadowsData:(NSData *)arg1 andHistogramData:(NSData *)arg2;
+ (UIImage *)rampImage;
+ (struct CGPoint)pointOnCurveFromPoint:(struct CGPoint)arg0 withSlope:(float)arg1 andCurveData:(float *)arg2;

- (void)dealloc;
- (BLAdjustmentModel *)init;
- (void)reset;
- (BLAdjustmentModel *)initWithAdjustmentsDictionary:(NSDictionary *)arg0 andAnalysisDictionary:(NSDictionary *)arg1;
- (void)releaseChain;
- (char)hasExposure;
- (char)hasColor;
- (void)buildChain;
- (UIImage *)adjustedImageFromImage:(UIImage *)arg0;
- (CIFilter *)underwaterBalanceFilter;
- (void)setUnderwaterBalanceFilter:(CIFilter *)arg0;
- (void)updateAdjustmentsDictionary:(NSDictionary *)arg0 andAnalysisDictionary:(NSDictionary *)arg1;
- (void)setCurvesFilter:(CIFilter *)arg0;
- (void)setColorFilter:(CIFilter *)arg0;
- (void)setFaceBalanceFilter:(CIFilter *)arg0;
- (void)setVibranceFilter:(CIFilter *)arg0;
- (void)setSkyAndGrassFilter:(CIFilter *)arg0;
- (void)setHighlightsAndShadowsFilter:(CIFilter *)arg0;
- (void)setTempAndTintFilter:(CIFilter *)arg0;
- (void)setColorBalanceFilter:(CIFilter *)arg0;
- (CIFilter *)curvesFilter;
- (CIFilter *)highlightsAndShadowsFilter;
- (CIFilter *)colorFilter;
- (CIFilter *)vibranceFilter;
- (CIFilter *)faceBalanceFilter;
- (CIFilter *)skyAndGrassFilter;
- (CIFilter *)colorBalanceFilter;
- (CIFilter *)tempAndTintFilter;
- (char)hasAdjustments;

@end
