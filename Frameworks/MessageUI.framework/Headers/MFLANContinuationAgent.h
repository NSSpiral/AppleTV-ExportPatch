/* Runtime dump - MFLANContinuationAgent
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFLANContinuationAgent : NSObject
{
    char _serverRunning;
    struct __CFSocket * _socket;
    struct __CFRunLoopSource * _serverRunLoopSource;
    id _connectCallbackBlock;
    MFLANContinuationContext * _continuationContext;
}

@property (readonly, nonatomic) char serverRunning;
@property (readonly, nonatomic) MFLANContinuationContext * continuationContext;

- (id)startServerWithCompletion:(id /* block */)arg0;
- (MFLANContinuationContext *)continuationContext;
- (void)stopServer;
- (void)_cleanupRunLoopSource;
- (void)_cleanupSocket;
- (NSString *)_getDeviceHostname;
- (void)_socketListenerRunLoop;
- (void)connectToServerWithContext:(NSObject *)arg0 completion:(id /* block */)arg1;
- (char)serverRunning;
- (void)dealloc;
- (MFLANContinuationAgent *)init;

@end
