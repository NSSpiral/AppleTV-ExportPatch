/* Runtime dump - AXHAXPCClient
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHAXPCClient : NSObject
{
    NSObject<OS_xpc_object> * _xpcConnection;
    unsigned long long _requestedUpdates;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> * xpcConnection;
@property (nonatomic) unsigned long long requestedUpdates;

+ (NSURLConnection *)clientWithConnection:(NSURLConnection *)arg0;

- (void)dealloc;
- (NSString *)description;
- (unsigned long long)requestedUpdates;
- (void)setRequestedUpdates:(unsigned long long)arg0;
- (void)setWantsUpdates:(char)arg0 forIdentifier:(unsigned long long)arg1;
- (char)wantsUpdatesForIdentifier:(unsigned long long)arg0;
- (void)sendMessage:(NSString *)arg0 withError:(id *)arg1;
- (AXHAXPCClient *)initWithConnection:(NSURLConnection *)arg0;
- (void)teardownConnection;
- (NSObject<OS_xpc_object> *)xpcConnection;
- (void)setXpcConnection:(NSObject<OS_xpc_object> *)arg0;

@end
