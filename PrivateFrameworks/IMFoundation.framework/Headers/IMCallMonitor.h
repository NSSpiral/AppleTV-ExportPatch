/* Runtime dump - IMCallMonitor
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMCallMonitor : NSObject
{
    id _callCenter;
    char _wasOnCall;
    NSDate * _lastCallDate;
}

@property (readonly, nonatomic) char isOnCall;
@property (readonly, retain, nonatomic) NSDate * dateLastCallEnded;

+ (IMCallMonitor *)sharedInstance;

- (void)dealloc;
- (IMCallMonitor *)init;
- (char)isOnCall;
- (NSDate *)dateLastCallEnded;

@end
