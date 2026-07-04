/* Runtime dump - TRDeviceSetupBrowser
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDeviceSetupBrowser : NSObject <TRTransferBrowserDelegate>
{
    TRTransferBrowser * _transferBrowser;
    TRDeviceSetupPeripheral * _peripheral;
    <TRDeviceSetupBrowserDelegate> * _delegate;
}

@property (weak, nonatomic) <TRDeviceSetupBrowserDelegate> * delegate;
@property (readonly, nonatomic) int state;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(<TRDeviceSetupBrowserDelegate> *)arg0;
- (TRDeviceSetupBrowser *)init;
- (<TRDeviceSetupBrowserDelegate> *)delegate;
- (int)state;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (id)browserDidStartTransfer:(id)arg0;
- (void)browserDidDisconnect:(id)arg0;
- (id)browser:(BTLEBrowser *)arg0 didReceiveData:(char)arg1;
- (void)browserDidChangeState:(NSObject *)arg0;
- (void)defer;

@end
