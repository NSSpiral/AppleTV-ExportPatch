/* Runtime dump - BBDataProviderConnection
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDataProviderConnection : NSObject <NSXPCListenerDelegate>
{
    NSString * _serviceName;
    NSString * _bundleID;
    BBDataProviderConnectionResolver * _connectionResolver;
    NSObject<OS_dispatch_queue> * _clientCalloutQueue;
    NSObject<OS_dispatch_queue> * _queue;
    <BBDataProviderConnectionServerProxy> * _serverProxy;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    char _connected;
    NSMutableDictionary * _dataProvidersBySectionID;
    NSMutableDictionary * _parentFactoriesBySectionID;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)removeDataProviderWithSectionID:(NSString *)arg0;
- (void)setServerProxy:(<BBDataProviderConnectionServerProxy> *)arg0;
- (void)addParentSectionInfo:(NSDictionary *)arg0 displayName:(NSString *)arg1 icon:(UIImage *)arg2 unversalSectionID:(NSObject *)arg3;
- (BBDataProviderConnection *)initWithServiceName:(NSString *)arg0 onQueue:(/* block */ id)arg1;
- (NSObject *)addDataProvider:(NSObject *)arg0;
- (void)addParentSectionInfo:(NSDictionary *)arg0 displayName:(NSString *)arg1 icon:(UIImage *)arg2;
- (void)ping:(id)arg0;
- (NSString *)bundleID;
- (NSString *)serviceName;

@end
