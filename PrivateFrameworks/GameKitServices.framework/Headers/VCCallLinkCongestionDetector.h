/* Runtime dump - VCCallLinkCongestionDetector
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCCallLinkCongestionDetector : NSObject
{
    char isLinkCongested;
    double rttThreshold;
    double lossRateThreshold;
}

@property (nonatomic) char isLinkCongested;

- (VCCallLinkCongestionDetector *)initWithRTTThreshold:(double)arg0 lossRateThreshold:(double)arg1;
- (void)addNewRTT:(double)arg0 packetLossRate:(double)arg1 timestamp:(double)arg2;
- (char)isLinkCongested;
- (void)setIsLinkCongested:(char)arg0;

@end
