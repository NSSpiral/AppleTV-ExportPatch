/* Runtime dump - NSXPCListener
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCListener : NSObject
{
    void * _xconnection;
    NSObject<OS_dispatch_queue> * _userQueue;
    void * reserved0;
    <NSXPCListenerDelegate> * _delegate;
    NSString * _serviceName;
    unsigned long long _state;
    id _reserved1;
    id _reserved2;
}

@property <NSXPCListenerDelegate> * delegate;
@property (readonly, retain) NSXPCListenerEndpoint * endpoint;

+ (NSUUID *)_UUID;
+ (XPCServiceListener *)serviceListener;
+ (NSXPCListener *)anonymousListener;
+ (void)enableTransactions;

- (NSXPCListener *)initVinylTestServer;
- (NSXPCListener *)initCellularPlanDatabaseServer;
- (NSXPCListener *)_initShared;
- (void)dealloc;
- (void)setDelegate:(<NSXPCListenerDelegate> *)arg0;
- (NSString *)description;
- (<NSXPCListenerDelegate> *)delegate;
- (void)invalidate;
- (void)suspend;
- (void)stop;
- (void)resume;
- (NSXPCListener *)initWithMachServiceName:(NSString *)arg0;
- (void)setOptions:(unsigned int)arg0;
- (void)_setQueue:(NSObject *)arg0;
- (NSXPCListener *)initWithServiceName:(NSString *)arg0;
- (NSOperationQueue *)_queue;
- (NSXPCListenerEndpoint *)endpoint;
- (NSURLConnection *)_xpcConnection;
- (NSString *)serviceName;
- (void)finalize;

@end
