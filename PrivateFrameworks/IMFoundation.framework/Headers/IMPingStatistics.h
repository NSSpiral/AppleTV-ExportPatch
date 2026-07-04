/* Runtime dump - IMPingStatistics
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMPingStatistics : NSObject
{
    double _packetLossRate;
    double _medianRoundtripTime;
    double _averageRoundtripTime;
    double _minRoundtripTime;
    double _maxRoundtripTime;
    double _standardDeviationRoundtripTime;
    double _sumRoundtripTimes;
    int _numPingsTransmitted;
    int _numPingsReceived;
    int _numPacketsSuccessfullySent;
}

@property (nonatomic) double medianRoundtripTime;
@property (readonly, nonatomic) double averageRoundtripTime;
@property (nonatomic) double minRoundtripTime;
@property (nonatomic) double maxRoundtripTime;
@property (readonly, nonatomic) int numPingsTransmitted;
@property (readonly, nonatomic) int numPingsReceived;
@property (readonly, nonatomic) double packetLossRate;
@property (readonly, nonatomic) int packetsSuccessfullySent;
@property (nonatomic) double standardDeviationRoundtripTime;

- (NSString *)description;
- (IMPingStatistics *)copyWithZone:(struct _NSZone *)arg0;
- (double)packetLossRate;
- (IMPingStatistics *)initWithMaxRTT:(double)arg0 medianRTT:(double)arg1 avgRTT:(double)arg2 minRTT:(double)arg3 transmitted:(int)arg4 successful:(int)arg5 received:(int)arg6;
- (void)_addTransmittedPacket:(char)arg0;
- (void)_addReceivedPacket:(double)arg0;
- (double)maxRoundtripTime;
- (void)_setMaxRoundtripTime:(double)arg0;
- (double)medianRoundtripTime;
- (void)_setMedianRoundtripTime:(double)arg0;
- (double)minRoundtripTime;
- (void)_setMinRoundtripTime:(double)arg0;
- (double)averageRoundtripTime;
- (int)numPingsReceived;
- (int)numPingsTransmitted;
- (int)packetsSuccessfullySent;
- (double)standardDeviationRoundtripTime;
- (void)_setStandardDeviationRoundtripTime:(double)arg0;

@end
