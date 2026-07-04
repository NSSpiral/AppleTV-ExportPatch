/* Runtime dump - PLSlalomRangeMapperScaledRegion
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSlalomRangeMapperScaledRegion : NSObject
{
    float _rate;
    float _rampInStartTime;
    float _rampInEndTime;
    float _rampOutStartTime;
    float _rampOutEndTime;
}

@property (nonatomic) float rate;
@property (nonatomic) float rampInStartTime;
@property (nonatomic) float rampInEndTime;
@property (nonatomic) float rampOutStartTime;
@property (nonatomic) float rampOutEndTime;

- (float)rate;
- (void)setRate:(float)arg0;
- (float)rampInStartTime;
- (void)setRampInStartTime:(float)arg0;
- (float)rampInEndTime;
- (void)setRampInEndTime:(float)arg0;
- (float)rampOutStartTime;
- (void)setRampOutStartTime:(float)arg0;
- (float)rampOutEndTime;
- (void)setRampOutEndTime:(float)arg0;

@end
