/* Runtime dump - CHDTrendline
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDTrendline : NSObject
{
    BOOL mDisplayEquation;
    BOOL mDisplayRSquaredValue;
    double mBackward;
    double mForward;
    double mInterceptYAxis;
    int mPolynomialOrder;
    long mMovingAveragePeriod;
    int mType;
    OADGraphicProperties * mGraphicProperties;
    CHDTrendlineLabel * mLabel;
    EDString * mName;
}

+ (CHDTrendline *)trendline;

- (void)dealloc;
- (CHDTrendline *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setType:(int)arg0;
- (int)type;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (NSDictionary *)graphicProperties;
- (void)setGraphicProperties:(NSDictionary *)arg0;
- (BOOL)isDisplayEquation;
- (void)setDisplayEquation:(BOOL)arg0;
- (BOOL)isDisplayRSquaredValue;
- (void)setDisplayRSquaredValue:(BOOL)arg0;
- (double)backward;
- (void)setBackward:(double)arg0;
- (double)forward;
- (void)setForward:(double)arg0;
- (double)interceptYAxis;
- (void)setInterceptYAxis:(double)arg0;
- (int)polynomialOrder;
- (void)setPolynomialOrder:(int)arg0;
- (long)movingAveragePeriod;
- (void)setMovingAveragePeriod:(long)arg0;
- (NSString *)defaultNameWithSeriesName:(NSString *)arg0;

@end
