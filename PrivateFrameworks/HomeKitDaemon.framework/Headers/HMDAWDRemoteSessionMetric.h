/* Runtime dump - HMDAWDRemoteSessionMetric
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAWDRemoteSessionMetric : NSObject
{
    char _submitted;
    unsigned int _role;
    NSDate * _creation;
    unsigned int _closeReason;
    double _duration;
}

@property (readonly, nonatomic) unsigned int role;
@property (retain, nonatomic) NSDate * creation;
@property (nonatomic) double duration;
@property (nonatomic) unsigned int closeReason;
@property (nonatomic) char submitted;

+ (unsigned int)closeReasonFromError:(NSError *)arg0;
+ (unsigned int)currentDeviceType;

- (NSString *)description;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void).cxx_destruct;
- (void)open;
- (void)setCreation:(NSDate *)arg0;
- (NSDate *)creation;
- (unsigned int)role;
- (HMDAWDRemoteSessionMetric *)initWithRole:(unsigned int)arg0;
- (void)closeWithReason:(unsigned int)arg0;
- (unsigned int)closeReason;
- (char)submitted;
- (void)setCloseReason:(unsigned int)arg0;
- (void)__submitMetric;
- (void)setSubmitted:(char)arg0;

@end
