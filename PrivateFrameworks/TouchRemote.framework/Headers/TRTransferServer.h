/* Runtime dump - TRTransferServer
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRTransferServer : NSObject <WPTransferDelegate>
{
    struct ? * _aesContext;
    char _didSendData;
    struct AirPlayPairingSessionPrivate * _pairingSession;
    int _pairingState;
    NSObject<OS_dispatch_queue> * _queue;
    char _started;
    int _advertiserState;
    WPTransfer * _transferSession;
    <TRTransferServerDelegate> * _delegate;
}

@property (weak, nonatomic) <TRTransferServerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<TRTransferServerDelegate> *)arg0;
- (TRTransferServer *)init;
- (<TRTransferServerDelegate> *)delegate;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (long)_runSetupStepWithInput:(void *)arg0 inputLength:(void)arg1 outputData:(unsigned long)arg2;
- (long)_runVerifyStepWithInput:(void *)arg0 inputLength:(void)arg1 outputData:(unsigned long)arg2;
- (void)transferDidUpdateAdvertiserState:(NSObject *)arg0;
- (void)transferDidUpdateScannerState:(NSObject *)arg0;
- (NSData *)transferDidReceiveData:(NSData *)arg0;
- (void)transferDidFailWithError:(NSError *)arg0;
- (void)transferDidFailToStartAdvertising:(id)arg0;
- (void)transferDidFailToStartScanning:(id)arg0;
- (void)transferComplete;
- (void)_beginAdvertisingIfPowered;
- (NSData *)_onQueue_didReceiveEncryptedData:(NSData *)arg0;
- (void)_onQueue_didFinishPairing;

@end
