/* Runtime dump - IAPClientPortManager
 * Image: /System/Library/PrivateFrameworks/IAP.framework/IAP
 */

@interface IAPClientPortManager : NSObject
{
    NSMutableDictionary * _portList;
    NSObject<OS_dispatch_queue> * _portListQueue;
    char _iaptransportdIsRunning;
    NSObject<OS_xpc_object> * _iaptransportdXPCConnection;
}

@property (nonatomic) char iaptransportdIsRunning;

+ (IAPClientPortManager *)sharedInstance;

- (void)dealloc;
- (IAPClientPortManager *)init;
- (void)sendData:(NSData *)arg0 data:(char *)arg1 length:(unsigned short)arg2;
- (int)unregisterSendDataHandler:(id /* block */)arg0;
- (char)iaptransportdIsRunning;
- (void)setIaptransportdIsRunning:(char)arg0;
- (int)registerSendDataHandler:(id /* block */)arg0 queue:(NSObject *)arg1 sendBlock:(id /* block */)arg2;
- (int)forwardAccessoryDataToIAP:(id)arg0 data:(char *)arg1 length:(unsigned short)arg2;
- (void)reRegisterHandlers;

@end
