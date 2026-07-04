/* Runtime dump - PAGenealogyTimestampedMessage
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAGenealogyTimestampedMessage : NSObject
{
    double _machTime;
    unsigned long long _activityId;
}

@property (readonly) double machTime;
@property (readonly) unsigned long long activityId;
@property (readonly) NSString * message;

- (char)isEqual:(NSObject *)arg0;
- (NSString *)message;
- (double)machTime;
- (unsigned long long)activityId;
- (PAGenealogyTimestampedMessage *)initWithActivityId:(unsigned long long)arg0 atMachTime:(double)arg1;
- (int)compareToOtherMessage:(NSString *)arg0;

@end
