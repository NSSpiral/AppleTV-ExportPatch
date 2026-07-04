/* Runtime dump - ATVUniversalPlaybackPositionClient
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVUniversalPlaybackPositionClient : NSObject <SBKUniversalPlaybackPositionDataSource>
{
    SBKUniversalPlaybackPositionStore * _uppStore;
    id _activeAccountOrNull;
    double _lastSyncTimestamp;
    char _needsSync;
    int _ivarLock;
    int _stateLock;
    ATVUPPClientState * _state;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain) ATVUPPClientState * state;

+ (ATVUniversalPlaybackPositionClient *)defaultClient;

- (void)dealloc;
- (ATVUniversalPlaybackPositionClient *)init;
- (ATVUPPClientState *)state;
- (void)setState:(ATVUPPClientState *)arg0;
- (void).cxx_destruct;
- (NSString *)recordForBookmarkKey:(NSString *)arg0;
- (void)synchronize:(id)arg0;
- (void)writeItems:(NSArray *)arg0;
- (void)_setNeedsSync;
- (id)ActiveStoreAccountBinding;
- (void)_updateBoundActiveStoreAccount;
- (NSString *)recordForItemIdentifier:(NSString *)arg0 mediaType:(NSObject *)arg1 podcastURL:(NSURL *)arg2 podcastGUID:(ATVPodcastGUID *)arg3;
- (void)bindActiveStoreAccountBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (id)beginTransactionWithItemsToSyncEnumerationBlock:(id /* block */)arg0;
- (void)commitUniversalPlaybackPositionTransaction:(NSObject *)arg0 domainVersion:(NSString *)arg1 metadataEnumerationBlock:(id /* block */)arg2;
- (void)cancelUniversalPlaybackPositionTransaction:(NSObject *)arg0;

@end
