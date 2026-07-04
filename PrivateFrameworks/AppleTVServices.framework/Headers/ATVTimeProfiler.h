/* Runtime dump - ATVTimeProfiler
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVTimeProfiler : NSObject
{
    NSMutableDictionary * _profileTimes;
    NSMutableDictionary * _logComponents;
}

@property (retain, nonatomic) NSMutableDictionary * profileTimes;
@property (retain, nonatomic) NSMutableDictionary * logComponents;

+ (ATVTimeProfiler *)sharedInstance;

- (void).cxx_destruct;
- (NSMutableDictionary *)logComponents;
- (char)_loggingEnabledForActivity:(id)arg0;
- (NSMutableDictionary *)profileTimes;
- (void)_resetEventTimeForName:(NSString *)arg0;
- (NSString *)_eventTimeKeyForName:(NSString *)arg0;
- (void)setProfileTimes:(NSMutableDictionary *)arg0;
- (void)setLogComponents:(NSMutableDictionary *)arg0;
- (double)totalTimeForActivity:(id)arg0;
- (double)eventTimeForActivity:(id)arg0;
- (void)startProfilingActivity:(id)arg0 forLogComponent:(id)arg1;
- (void)stopProfilingActivity:(id)arg0;
- (void)logForName:(NSString *)arg0 atLevel:(int)arg1 component:(_UIDatePickerComponent *)arg2 message:(NSString *)arg3;
- (void)logActivity:(id)arg0 forComponent:(_UIDatePickerComponent *)arg1 format:(unsigned int)arg2;

@end
