/* Runtime dump - IRCommand
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface IRCommand : NSObject
{
    char _isRepeat;
    IRProtocol * _protocol;
    unsigned long long _payload;
    unsigned long long _timestamp;
}

@property (readonly, nonatomic) IRProtocol * protocol;
@property (readonly, nonatomic) unsigned long long payload;
@property (readonly, nonatomic) char isRepeat;
@property (nonatomic) unsigned long long timestamp;

- (void)dealloc;
- (IRCommand *)init;
- (unsigned long long)timestamp;
- (unsigned long long)payload;
- (void)setTimestamp:(unsigned long long)arg0;
- (IRProtocol *)protocol;
- (char)isRepeat;
- (IRCommand *)initWithProtocol:(IRProtocol *)arg0 payload:(unsigned long long)arg1 repeat:(char)arg2;

@end
