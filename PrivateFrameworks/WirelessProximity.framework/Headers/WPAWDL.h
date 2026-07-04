/* Runtime dump - WPAWDL
 * Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPAWDL : NSObject <XPCClientDelegate>
{
    int _state;
    XPCClient * _connection;
    <WPAWDLDelegate> * _delegate;
    NSObject<OS_xpc_object> * _server;
}

@property int state;
@property (retain, nonatomic) XPCClient * connection;
@property (weak, nonatomic) <WPAWDLDelegate> * delegate;
@property (retain) NSObject<OS_xpc_object> * server;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (WPAWDL *)hashEmail:(id)arg0;
+ (WPAWDL *)generateDataFromEmails:(id)arg0;

- (void)connectionInterrupted;
- (void)dealloc;
- (void)setDelegate:(<WPAWDLDelegate> *)arg0;
- (NSString *)description;
- (<WPAWDLDelegate> *)delegate;
- (int)state;
- (void)setState:(int)arg0;
- (NSObject<OS_xpc_object> *)server;
- (void).cxx_destruct;
- (XPCClient *)connection;
- (void)setConnection:(XPCClient *)arg0;
- (void)setServer:(NSObject<OS_xpc_object> *)arg0;
- (WPAWDL *)initWithDelegate:(<WPAWDLDelegate> *)arg0 queue:(NSObject *)arg1;
- (WPAWDL *)initWithDelegate:(<WPAWDLDelegate> *)arg0;
- (void)updateState:(int)arg0;
- (void)messageArrived:(NSObject *)arg0;
- (void)connectionDied;
- (void)initXPCHandler:(id /* block */)arg0;
- (WPAWDL *)initWithDelegate:(<WPAWDLDelegate> *)arg0 queue:(NSObject *)arg1 machName:(NSString *)arg2;
- (void)allowAWDLConnection;
- (void)startConnectionlessAWDLServiceAdvertisingWithData:(NSData *)arg0;
- (void)stopConnectionlessAWDLServiceAdvertising;
- (void)startConnectionlessAWDLServiceScanning;
- (void)stopConnectionlessAWDLServiceScanning;
- (void)cancelAWDLConnection;

@end
