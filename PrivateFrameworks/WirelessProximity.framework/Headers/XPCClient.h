/* Runtime dump - XPCClient
 * Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface XPCClient : NSObject
{
    int _state;
    NSString * _machName;
    NSObject<OS_xpc_object> * _connection;
    <XPCClientDelegate> * _delegate;
    NSString * _type;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _options;
    NSRecursiveLock * _delegateLock;
}

@property (nonatomic) int state;
@property (copy) NSString * machName;
@property (retain, nonatomic) NSObject<OS_xpc_object> * connection;
@property (weak, nonatomic) <XPCClientDelegate> * delegate;
@property (copy) NSString * type;
@property (retain) NSObject<OS_dispatch_queue> * queue;
@property (copy) NSDictionary * options;
@property (retain) NSRecursiveLock * delegateLock;

- (void)dealloc;
- (void)setDelegate:(<XPCClientDelegate> *)arg0;
- (<XPCClientDelegate> *)delegate;
- (int)state;
- (void)setState:(int)arg0;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (void)handleEvent:(NSObject *)arg0;
- (void)setOptions:(NSDictionary *)arg0;
- (NSDictionary *)options;
- (void).cxx_destruct;
- (NSObject<OS_xpc_object> *)connection;
- (void)setConnection:(NSObject<OS_xpc_object> *)arg0;
- (void)postEvent:(NSObject *)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)closeConnection;
- (XPCClient *)initWithDelegate:(<XPCClientDelegate> *)arg0 type:(NSString *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (XPCClient *)initWithDelegate:(<XPCClientDelegate> *)arg0 type:(NSString *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 machName:(NSString *)arg3;
- (NSString *)machName;
- (void)startConnectionWithType:(NSString *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 machName:(NSString *)arg2 options:(NSDictionary *)arg3;
- (XPCClient *)initWithDelegate:(<XPCClientDelegate> *)arg0 type:(NSString *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 machName:(NSString *)arg3 options:(NSDictionary *)arg4;
- (void)setMachName:(NSString *)arg0;
- (NSRecursiveLock *)delegateLock;
- (void)setDelegateLock:(NSRecursiveLock *)arg0;

@end
