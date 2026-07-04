/* Runtime dump - VCWCMClient
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCWCMClient : NSObject
{
    NSObject<OS_xpc_object> * connection;
    NSObject<OS_dispatch_queue> * connectionQueue;
    <WCMClientDelegate> * wcmClientDelegate;
}

@property (readonly) NSObject<OS_xpc_object> * connection;
@property (readonly) NSObject<OS_dispatch_queue> * connectionQueue;
@property (retain, nonatomic) <WCMClientDelegate> * wcmClientDelegate;

- (void)dealloc;
- (VCWCMClient *)init;
- (NSObject<OS_xpc_object> *)connection;
- (void)setWcmClientDelegate:(<WCMClientDelegate> *)arg0;
- (void)startWCMClient;
- (void)stopWCMClient;
- (NSObject<OS_dispatch_queue> *)connectionQueue;
- (<WCMClientDelegate> *)wcmClientDelegate;

@end
