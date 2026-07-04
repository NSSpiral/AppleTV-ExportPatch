/* Runtime dump - TRTransferBrowser
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRTransferBrowser : NSObject <WPTransferDelegate>
{
    struct ? * _aesContext;
    struct AirPlayPairingSessionPrivate * _pairingSession;
    int _pairingState;
    NSObject<OS_dispatch_queue> * _queue;
    char _started;
    int _scannerState;
    WPTransfer * _transferSession;
    <TRTransferBrowserDelegate> * _delegate;
    int _state;
}

@property (weak, nonatomic) <TRTransferBrowserDelegate> * delegate;
@property (readonly, nonatomic) int state;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<TRTransferBrowserDelegate> *)arg0;
- (TRTransferBrowser *)init;
- (<TRTransferBrowserDelegate> *)delegate;
- (int)state;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)_beginScanningIfPowered;
- (long)_runSetupStepWithInput:(void *)arg0 inputLength:(void)arg1 outputData:(unsigned long)arg2;
- (long)_runVerifyStepWithInput:(void *)arg0 inputLength:(void)arg1 outputData:(unsigned long)arg2;
- (NSData *)_didReceiveEncryptedData:(NSData *)arg0;
- (void)_didFinishPairing;
- (void)transferDidUpdateAdvertiserState:(NSObject *)arg0;
- (void)transferDidUpdateScannerState:(NSObject *)arg0;
- (NSData *)transferDidReceiveData:(NSData *)arg0;
- (void)transferDidFailWithError:(NSError *)arg0;
- (void)transferDidFailToStartAdvertising:(id)arg0;
- (void)transferDidFailToStartScanning:(id)arg0;
- (void)transferComplete;
- (void)defer;

@end
