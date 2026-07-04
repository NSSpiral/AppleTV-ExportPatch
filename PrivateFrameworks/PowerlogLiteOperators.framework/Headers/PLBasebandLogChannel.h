/* Runtime dump - PLBasebandLogChannel
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBasebandLogChannel : NSObject
{
    struct __CFMessagePort * remotePort;
    struct __CFMessagePort * localPort;
    char cachingEnabled;
    <PLBasebandLogChannelDelegate> * delegate;
}

@property (nonatomic) <PLBasebandLogChannelDelegate> * delegate;
@property (readonly, nonatomic) char isValid;
@property (nonatomic) char cachingEnabled;

- (void)dealloc;
- (void)setDelegate:(<PLBasebandLogChannelDelegate> *)arg0;
- (PLBasebandLogChannel *)init;
- (<PLBasebandLogChannelDelegate> *)delegate;
- (void)invalidate;
- (void)flush;
- (char)isValid;
- (void)close;
- (void)setCachingEnabled:(char)arg0;
- (void)sendObjectOverRemotePort:(NSObject *)arg0;
- (char)cachingEnabled;
- (char)openWithConnection:(NSURLConnection *)arg0;
- (void)commitHardwareLogs;
- (void)enableLogCodes:(id)arg0 andEvents:(id)arg1;
- (void)setHardwareLoggingLevel:(unsigned int)arg0 withWindowSize:(unsigned int)arg1;
- (void)setChannelTimeout:(double)arg0;
- (void)connectionInvalidated:(id)arg0;

@end
