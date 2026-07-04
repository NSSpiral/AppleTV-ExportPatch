/* Runtime dump - BBRemoteDataProviderConnection
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBRemoteDataProviderConnection : NSObject <BBRemoteDataProviderDelegate, BBDataProviderConnectionServerProxy, BBDataProviderStore>
{
    NSString * _serviceName;
    NSString * _bundleID;
    char _connected;
    <BBRemoteDataProviderStoreDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _dataProvidersBySectionID;
    NSMutableDictionary * _dataProvidersByUniversalSectionID;
    char _clientReady;
}

@property (readonly, nonatomic) char isConnected;
@property (readonly, nonatomic) NSString * serviceName;
@property (readonly, nonatomic) NSString * bundleID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSString *)debugDescription;
- (void)addDataProviderWithSectionID:(NSString *)arg0 clientProxy:(<BBRemoteDataProviderClientProxy> *)arg1 identity:(struct __SecIdentity *)arg2 completion:(id /* block */)arg3;
- (void)removeDataProviderWithSectionID:(NSString *)arg0;
- (void)addParentSectionFactory:(NSObject *)arg0;
- (void)clientIsReady:(id)arg0;
- (NSArray *)debugDescriptionWithChildren:(unsigned int)arg0;
- (NSObject *)dataProviderForSectionID:(NSObject *)arg0;
- (void)remoteDataProviderNeedsToWakeClient:(NSObject *)arg0;
- (void)_queue_removeDataProvider:(NSObject *)arg0;
- (NSObject *)dataProviderForUniversalSectionID:(NSObject *)arg0;
- (void)removeDataProvider:(NSObject *)arg0;
- (void)performBlockOnDataProviders:(id)arg0;
- (BBRemoteDataProviderConnection *)initWithServiceName:(NSString *)arg0 bundleID:(NSString *)arg1 delegate:(<BBRemoteDataProviderStoreDelegate> *)arg2;
- (void)setConnected:(char)arg0 completion:(id /* block */)arg1;
- (void)loadAllDataProviders;
- (NSString *)bundleID;
- (NSString *)serviceName;
- (char)isConnected;

@end
