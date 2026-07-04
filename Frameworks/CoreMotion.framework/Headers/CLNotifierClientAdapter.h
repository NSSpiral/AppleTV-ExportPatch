/* Runtime dump - CLNotifierClientAdapter
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLNotifierClientAdapter : NSObject <CLNotifierServiceClientProtocol>
{
    struct CLNotifierClientBase * _client;
    char _valid;
}

@property (nonatomic) char valid;

- (void)onNotification:(int)arg0 withData:(NSData *)arg1;
- (CLNotifierClientAdapter *)init;
- (NSString *)debugDescription;
- (void)invalidate;
- (char)valid;
- (void)setValid:(char)arg0;
- (CLNotifierClientAdapter *)initWithClient:(struct CLNotifierClientBase *)arg0;

@end
