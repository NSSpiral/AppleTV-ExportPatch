/* Runtime dump - BBRemoteDataProviderConnectionResolver
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBRemoteDataProviderConnectionResolver : NSObject <BBDataProviderConnectionCheckinServer, BBRemoteDataProviderStoreDelegate, NSXPCListenerDelegate, BBDataProviderStore>
{
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _registerQueue;
    NSMutableDictionary * _dataProviderConnectionsByService;
    NSMutableDictionary * _dataProviderConnectionsBySectionID;
    NSMutableDictionary * _dataProviderConnectionsByUniversalSectionID;
    NSMutableDictionary * _xpcConnectionsByService;
    <BBDataProviderStoreDelegate> * _delegate;
    int _listeningToken;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)resolverWithDelegate:(<BBDataProviderStoreDelegate> *)arg0;

- (void)dealloc;
- (NSString *)debugDescription;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (void)registerServiceName:(NSString *)arg0 appBundleID:(NSObject *)arg1 completion:(id /* block */)arg2;
- (NSArray *)debugDescriptionWithChildren:(unsigned int)arg0;
- (void)dataProviderStore:(NSObject *)arg0 didRemoveDataProvider:(NSObject *)arg1;
- (NSObject *)dataProviderForSectionID:(NSObject *)arg0;
- (void)dataProviderStore:(NSObject *)arg0 didAddDataProvider:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)remoteDataProviderNeedsToWakeClient:(NSObject *)arg0;
- (void)dataProviderStore:(NSObject *)arg0 didAddParentSectionFactory:(NSObject *)arg1;
- (NSObject *)dataProviderForUniversalSectionID:(NSObject *)arg0;
- (void)removeDataProvider:(NSObject *)arg0;
- (void)performBlockOnDataProviders:(id)arg0;
- (void)loadAllDataProviders;
- (void)_registerForPublicationNotification;
- (void)wakeService:(NSObject *)arg0 bundleID:(NSString *)arg1;
- (BBRemoteDataProviderConnectionResolver *)initWithDelegate:(<BBDataProviderStoreDelegate> *)arg0;

@end
