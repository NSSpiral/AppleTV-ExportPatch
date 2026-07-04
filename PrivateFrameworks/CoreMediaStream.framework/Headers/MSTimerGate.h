/* Runtime dump - MSTimerGate
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSTimerGate : NSObject
{
    char _enabled;
}

@property (nonatomic) char enabled;

- (MSTimerGate *)init;
- (void)setEnabled:(char)arg0;
- (char)enabled;
- (void)enable;
- (void)disable;

@end
