/* Runtime dump - CUIPSDGradientEvaluator
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientEvaluator : NSObject <NSCoding, NSCopying>
{
    NSArray * colorStops;
    NSArray * colorMidpointLocations;
    NSArray * opacityStops;
    NSArray * opacityMidpointLocations;
    float smoothingCoefficient;
    struct _psdGradientColor fillColor;
    int blendMode;
    struct ? pgeFlags;
}

@property (nonatomic) int blendMode;

+ (void)initialize;

- (int)blendMode;
- (void)setBlendMode:(int)arg0;
- (void)dealloc;
- (CUIPSDGradientEvaluator *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CUIPSDGradientEvaluator *)copyWithZone:(struct _NSZone *)arg0;
- (struct _psdGradientColor)fillColor;
- (NSArray *)colorStops;
- (NSArray *)colorMidpointLocations;
- (NSArray *)opacityStops;
- (NSArray *)opacityMidpointLocations;
- (float)smoothingCoefficient;
- (char)isDithered;
- (CUIPSDGradientEvaluator *)initWithColorStops:(NSArray *)arg0 colorMidpoints:(id)arg1 opacityStops:(NSArray *)arg2 opacityMidpoints:(id)arg3 smoothingCoefficient:(float)arg4 fillColor:(struct _psdGradientColor)arg5 dither:(char)arg6;
- (id)_cleanedUpMidpointLocationsFromLocations:(id)arg0;
- (void)_createOrderedStops:(id *)arg0 midpoints:(id *)arg1 fromStops:(id)arg2 midpoints:(id)arg3 edgePixel:(int *)arg4;
- (float)_smoothedInterpolationOfLocation:(float)arg0 betweenLower:(float)arg1 upper:(float)arg2 scaledMidpoint:(float)arg3;
- (CUIPSDGradientEvaluator *)initWithColorStops:(NSArray *)arg0 colorMidpoints:(id)arg1 opacityStops:(NSArray *)arg2 opacityMidpoints:(id)arg3 smoothingCoefficient:(float)arg4 fillCoefficient:(float)arg5;
- (struct _psdGradientColor)_smoothedGradientColorAtLocation:(float)arg0;
- (float)fillCoefficient;
- (char)hasEdgePixel;
- (void)setColorStops:(NSArray *)arg0 midpoints:(id)arg1;
- (void)setOpacityStops:(NSArray *)arg0 midpoints:(id)arg1;
- (void)setSmoothingCoefficient:(float)arg0;
- (void)setFillCoefficient:(float)arg0;
- (void)customizeForDistance:(float)arg0;

@end
