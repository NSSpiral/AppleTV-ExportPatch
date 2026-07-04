/* Runtime dump - SCROScriptClient
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROScriptClient : NSObject
{
    NSLock * _lock;
    SCROConnection * _connection;
    SCRCTargetSelectorTimer * _timer;
    char _isReady;
}

+ (void)initialize;
+ (SCROScriptClient *)allocWithZone:(struct _NSZone *)arg0;
+ (SCROScriptClient *)sharedClient;

- (char)_isReady;
- (SCROScriptClient *)retain;
- (void)release;
- (void)dealloc;
- (SCROScriptClient *)init;
- (SCROScriptClient *)autorelease;
- (unsigned int)retainCount;
- (SCROScriptClient *)copyWithZone:(struct _NSZone *)arg0;
- (NSURLConnection *)_lazyConnection;
- (void)_killConnection;
- (char)runScriptFile:(NSString *)arg0;
- (void)handleCallback:(id /* block */)arg0;

@end
