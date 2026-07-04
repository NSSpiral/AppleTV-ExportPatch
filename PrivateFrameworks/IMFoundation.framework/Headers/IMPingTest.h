/* Runtime dump - IMPingTest
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMPingTest : NSObject
{
    NSString * _address;
    char _usesWifi;
    id _collector;
    char _isRunning;
    NSObject<OS_dispatch_source> * _sendTimer;
    NSObject<OS_dispatch_source> * _socketReadSource;
    double _secondsToRun;
}

@property (readonly, nonatomic) double secondsToRun;

- (void)dealloc;
- (void)stop;
- (IMPingTest *)initWithAddress:(NSString *)arg0 wifi:(char)arg1;
- (char)writeResultsToFile:(NSString *)arg0 error:(id *)arg1;
- (void)startWithTimeout:(double)arg0 queue:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (id)pingStats;
- (int)_setupAndPerformPing:(double)arg0 queue:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)_doPingWithSocket:(int)arg0 address:(struct sockaddr_in)arg1 timeToRunTestInSeconds:(id)arg2 pingTimeout:(char)arg3 queue:(NSObject *)arg4 completionHandler:(id /* block */)arg5;
- (void)_setupReadSource:(int)arg0 address:(struct sockaddr_in)arg1 icmID:(NSObject *)arg2 queue:(char)arg3 completionHander:(id)arg4;
- (id)pingStats:(double)arg0;
- (double)longTimeInterval;
- (double)secondsToRun;

@end
