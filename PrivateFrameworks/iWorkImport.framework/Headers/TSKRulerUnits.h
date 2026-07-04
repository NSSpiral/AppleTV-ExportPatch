/* Runtime dump - TSKRulerUnits
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKRulerUnits : NSObject
{
    int _rulerUnits;
    char _showRulerAsPercentage;
    char _centerRulerOrigin;
    int _preferredPixelUnit;
    NSFormatter * _formatter;
    NSFormatter * _lenientFormatter;
    NSFormatter * _highPrecisionFormatter;
    NSFormatter * _lenientHighPrecisionFormatter;
}

@property (nonatomic) int rulerUnits;
@property (nonatomic) char showRulerAsPercentage;
@property (nonatomic) char centerRulerOrigin;
@property (nonatomic) int preferredPixelUnit;

+ (TSKRulerUnits *)formatterForRulerUnits:(int)arg0 decimalPlaces:(int)arg1 trailingZeros:(char)arg2 lenient:(char)arg3;
+ (TSKRulerUnits *)instance;

- (void)setRulerUnits:(int)arg0;
- (void)setShowRulerAsPercentage:(char)arg0;
- (void)setCenterRulerOrigin:(char)arg0;
- (float)convertRulerUnitsToPoints:(float)arg0;
- (float)convertPointsToRulerUnits:(float)arg0;
- (NSObject *)formatter:(char)arg0 lenient:(char)arg1;
- (id)compatibleRulerUnits;
- (id)localizedCompatibleRulerUnits;
- (int)rulerUnits;
- (char)showRulerAsPercentage;
- (char)centerRulerOrigin;
- (int)preferredPixelUnit;
- (void)setPreferredPixelUnit:(int)arg0;
- (void)dealloc;
- (TSKRulerUnits *)init;

@end
