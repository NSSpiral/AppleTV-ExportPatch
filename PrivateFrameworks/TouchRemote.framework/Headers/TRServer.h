/* Runtime dump - TRServer
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRServer : NSObject <NSNetServiceDelegate>
{
    TRAdvertisingInfo * _advertisingInfo;
    NSObject<OS_tcp_listener> * _listener;
    NSObject<OS_dispatch_queue> * _listenerQueue;
    NSNetService * _netService;
    unsigned short _port;
    <TRServerDelegate> * _delegate;
    NSString * _name;
}

@property (copy, nonatomic) TRAdvertisingInfo * advertisingInfo;
@property (weak, nonatomic) <TRServerDelegate> * delegate;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) unsigned short port;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)newServerWithName:(NSString *)arg0 port:(unsigned short)arg1;
+ (NSString *)newServerWithName:(NSString *)arg0;

- (void)dealloc;
- (void)setDelegate:(<TRServerDelegate> *)arg0;
- (<TRServerDelegate> *)delegate;
- (NSString *)name;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (unsigned short)port;
- (void)netServiceWillPublish:(NSNetService *)arg0;
- (void)netServiceDidPublish:(NSNetService *)arg0;
- (void)netService:(NSNetService *)arg0 didNotPublish:(NSDictionary *)arg1;
- (TRAdvertisingInfo *)advertisingInfo;
- (NSString *)_initWithName:(NSString *)arg0 port:(unsigned short)arg1;
- (void)setAdvertisingInfo:(TRAdvertisingInfo *)arg0;

@end
