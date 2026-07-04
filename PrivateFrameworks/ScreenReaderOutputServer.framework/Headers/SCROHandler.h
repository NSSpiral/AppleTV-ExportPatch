/* Runtime dump - SCROHandler
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROHandler : NSObject <SCROHandlerProtocol>
{
    id _callbackDelegate;
    NSLock * _lock;
    char isInvalid;
}

- (void)dealloc;
- (SCROHandler *)init;
- (void)invalidate;
- (void)lock;
- (void)unlock;
- (void)setCallbackDelegate:(<CRCameraReaderDelegate> *)arg0;
- (<CRCameraReaderDelegate> *)callbackDelegate;
- (int)handlePerformActionForKey:(int)arg0 trusted:(char)arg1;
- (int)handleRegisterCallbackForKey:(int)arg0 trusted:(char)arg1;
- (int)handleSetValue:(id)arg0 forKey:(int)arg1 trusted:(char)arg2;
- (int)handleGetValue:(id *)arg0 forKey:(int)arg1 trusted:(char)arg2;
- (int)handleGetValue:(id *)arg0 forKey:(int)arg1 withObject:(NSObject *)arg2 trusted:(char)arg3;

@end
