/* Runtime dump - TRDeviceSetupServer
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDeviceSetupServer : NSObject <TRTransferServerDelegate>
{
    TRTransferServer * _transferServer;
    char _cancelledSetupInProgress;
    int _notifyToken;
    char _notifyTokenIsValid;
    char _setupInProgress;
    char _started;
    <TRDeviceSetupServerDelegate> * _delegate;
}

@property (weak, nonatomic) <TRDeviceSetupServerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)setDelegate:(<TRDeviceSetupServerDelegate> *)arg0;
- (TRDeviceSetupServer *)init;
- (<TRDeviceSetupServerDelegate> *)delegate;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)server:(NSObject *)arg0 didFailToReceiveData:(NSData *)arg1;
- (void)serverWillReceiveData:(NSData *)arg0;
- (NSObject *)server:(NSObject *)arg0 didReceiveData:(char)arg1;
- (void)cancelActiveSetup;

@end
