/* Runtime dump - BLHistogramAnalysis
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLHistogramAnalysis : NSObject
{
    float _blackPoint;
    float _whitePoint;
    float _blackPointRed;
    float _whitePointRed;
    float _blackPointGreen;
    float _whitePointGreen;
    float _blackPointBlue;
    float _whitePointBlue;
    float _averageLinearRed;
    float _averageLinearBlue;
    float _averageLinearGreen;
}

@property (nonatomic) float blackPoint;
@property (nonatomic) float whitePoint;
@property (nonatomic) float blackPointRed;
@property (nonatomic) float whitePointRed;
@property (nonatomic) float blackPointGreen;
@property (nonatomic) float whitePointGreen;
@property (nonatomic) float blackPointBlue;
@property (nonatomic) float whitePointBlue;
@property (nonatomic) float averageLinearRed;
@property (nonatomic) float averageLinearBlue;
@property (nonatomic) float averageLinearGreen;

- (void)dealloc;
- (NSString *)description;
- (BLHistogramAnalysis *)initWithBLImage:(UIImage *)arg0;
- (NSDictionary *)analysisDictionary;
- (BLHistogramAnalysis *)initWithAnalysisDictionary:(NSDictionary *)arg0;
- (float)blackPoint;
- (void)setBlackPoint:(float)arg0;
- (float)whitePoint;
- (void)setWhitePoint:(float)arg0;
- (float)blackPointRed;
- (void)setBlackPointRed:(float)arg0;
- (float)whitePointRed;
- (void)setWhitePointRed:(float)arg0;
- (float)blackPointGreen;
- (void)setBlackPointGreen:(float)arg0;
- (float)whitePointGreen;
- (void)setWhitePointGreen:(float)arg0;
- (float)blackPointBlue;
- (void)setBlackPointBlue:(float)arg0;
- (float)whitePointBlue;
- (void)setWhitePointBlue:(float)arg0;
- (float)averageLinearRed;
- (void)setAverageLinearRed:(float)arg0;
- (float)averageLinearBlue;
- (void)setAverageLinearBlue:(float)arg0;
- (float)averageLinearGreen;
- (void)setAverageLinearGreen:(float)arg0;

@end
