/* Runtime dump - PLAWDAudio
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAWDAudio : PLAWDAuxMetrics
{
    PLEntryNotificationOperatorComposition * _audioRailCallback;
    NSDate * _startTime;
}

@property (retain) PLEntryNotificationOperatorComposition * audioRailCallback;
@property (retain) NSDate * startTime;

+ (PLAWDAudio *)entryAggregateDefinitionAwdAudio;
+ (PLAWDAudio *)getSharedObjWithOperator:(PLOperator *)arg0;
+ (NSArray *)entryAggregateDefinitions;

- (void)setStartTime:(NSDate *)arg0;
- (void).cxx_destruct;
- (NSDate *)startTime;
- (void)resetAudioTable;
- (void)handleAudioRailCallback:(id /* block */)arg0;
- (void)setAudioRailCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)finalizeAudioTable;
- (void)startMetricCollection:(id)arg0;
- (void)stopMetricCollection:(id)arg0;
- (char)submitDataToAWDServer:(NSObject *)arg0 withAwdConn:(id)arg1;
- (PLEntryNotificationOperatorComposition *)audioRailCallback;

@end
