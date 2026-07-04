/* Runtime dump - MSASPConnectionGate
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASPConnectionGate : NSObject
{
    NSError * _error;
}

@property (retain, nonatomic) NSError * error;

+ (MSTimerGate *)gate;

- (void).cxx_destruct;
- (NSError *)error;
- (void)setError:(NSError *)arg0;

@end
