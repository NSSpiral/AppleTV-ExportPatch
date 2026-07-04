/* Runtime dump - MPContentTasteController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPContentTasteController : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _pendingUpdateRecordByPlaylistGlobalID;
    NSMutableDictionary * _pendingUpdateRecordByStoreAdamID;
}

+ (MPMediaLibrary *)_mediaLibrary;
+ (MPContentTasteController *)sharedController;

- (void)_deviceMediaLibraryDidChangeNotification:(NSNotification *)arg0;
- (NSObject *)_libraryPlaylistWithGlobalID:(PFUbiquityGlobalObjectID *)arg0;
- (NSObject *)_libraryEntityWithStoreID:(long long)arg0 contentType:(unsigned int)arg1;
- (void)setTasteType:(unsigned int)arg0 forMediaEntity:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
- (unsigned int)tasteTypeForMediaEntity:(NSObject *)arg0;
- (NSObject *)_ML3QueryWithEntityClass:(Class)arg0 predicate:(NSPredicate *)arg1 options:(long long)arg2;
- (void)setTasteType:(unsigned int)arg0 forPlaylistGlobalID:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setTasteType:(unsigned int)arg0 forStoreAdamID:(long long)arg1 withContentType:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (unsigned int)tasteTypeForPlaylistGlobalID:(NSObject *)arg0;
- (unsigned int)tasteTypeForStoreAdamID:(long long)arg0;
- (void)dealloc;
- (MPContentTasteController *)init;
- (void).cxx_destruct;

@end
