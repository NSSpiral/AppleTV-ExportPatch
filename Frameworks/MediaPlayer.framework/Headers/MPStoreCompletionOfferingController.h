/* Runtime dump - MPStoreCompletionOfferingController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreCompletionOfferingController : NSObject <MCProfileConnectionObserver>
{
    NSCache * _offeringCache;
    NSMutableDictionary * _lookupItemsByStoreLookupID;
    NSMutableDictionary * _lookupItemsByTokenID;
    unsigned int _nextTokenID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)_getIsCMCDisabled:(char *)arg0 disabledReason:(id *)arg1;
+ (char)_isCmcEnabled;
+ (NSObject *)storeOfferingController;
+ (void)setWantsArtwork:(char)arg0;

- (void)_defaultMediaLibraryDidChangeNotification:(NSNotification *)arg0;
- (void)_storeAccountsDidChangeNotification:(NSNotification *)arg0;
- (void)_dumpCache;
- (NSObject *)_sanitizedQuery:(NSObject *)arg0;
- (NSObject *)_onQueueCompletionOfferingForAlbumItemsQuery:(NSObject *)arg0;
- (void)_onQueueCancelCompletionOfferingLookupTokenID:(unsigned int)arg0;
- (NSObject *)_onQueueStartCompletionOfferingLookupForAlbumItemsQuery:(NSObject *)arg0 responseBlock:(id /* block */)arg1;
- (void)_onQueueClearCache;
- (void)_onQueueRemoveLookupItem:(NSObject *)arg0;
- (void)_onQueueSetCachedCompletionOffering:(id)arg0 forStoreLookupID:(NSObject *)arg1;
- (void)_onQueueRemoveLookupItemsForStoreLookupID:(NSObject *)arg0;
- (void)_onQueuePostLookupCompletedForLookupItem:(NSObject *)arg0 offering:(MPStoreCompletionOffering *)arg1 error:(NSError *)arg2;
- (NSObject *)_onQueueGetInsertedLookupItemForAlbumItemsQuery:(NSObject *)arg0 requestAlreadyIssued:(char *)arg1 responseBlock:(id /* block */)arg2;
- (void)_lookupCompletedWithResponse:(NSURLResponse *)arg0 lookupItem:(SSLookupItem *)arg1 error:(NSError *)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(NSNotification *)arg0 userInfo:(NSDictionary *)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(NSNotification *)arg0 userInfo:(NSDictionary *)arg1;
- (NSObject *)completionOfferingForAlbumItemsQuery:(NSObject *)arg0;
- (void)cancelCompletionOfferingLookup:(unsigned int)arg0;
- (unsigned int)startCompletionOfferingLookupForAlbumItemsQuery:(NSObject *)arg0 responseBlock:(id /* block */)arg1;
- (void)dealloc;
- (MPStoreCompletionOfferingController *)init;
- (void).cxx_destruct;

@end
