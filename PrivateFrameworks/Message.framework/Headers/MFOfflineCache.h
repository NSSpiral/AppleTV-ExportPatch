/* Runtime dump - MFOfflineCache
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOfflineCache : NSObject
{
    MFMailMessageLibrary * _library;
    int _accountLibraryID;
    NSMutableArray * _deferredOperations;
    MFOfflineCacheReplayContext * _replayContext;
    unsigned int _lastTemporaryMessageID;
    char _isReplaying;
}

@property (readonly, nonatomic) NSString * nextTemporaryMessageID;

- (void)dealloc;
- (MFOfflineCache *)init;
- (void)enumerateOperationsUsingBlock:(id /* block */)arg0;
- (char)hasDeferredOperations;
- (void)deferOperation:(NSObject *)arg0;
- (NSString *)nextTemporaryMessageID;
- (MFOfflineCache *)initWithLibrary:(MFMailMessageLibrary *)arg0 account:(NSObject *)arg1;
- (char)replayOperationsUsingBlock:(id /* block */)arg0;
- (NSString *)selectedMailboxID;
- (NSObject *)transferFailureSnapshotForTemporaryID:(NSObject *)arg0;
- (NSObject *)translatedIDForTemporaryID:(NSObject *)arg0;
- (void)replaceTransferFailureSnapshotTemporaryID:(NSObject *)arg0 withTemporaryID:(char)arg1;
- (void)setTranslatedID:(NSObject *)arg0 forTemporaryID:(NSObject *)arg1;
- (void)setTransferFailureSnapshot:(NSObject *)arg0 forTemporaryID:(NSObject *)arg1;
- (void)deleteOfflineCacheData;
- (void)setSelectedMailboxID:(NSString *)arg0;
- (void)_applyReplayContextTransformation:(id)arg0;

@end
