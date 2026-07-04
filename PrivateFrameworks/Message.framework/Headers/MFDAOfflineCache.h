/* Runtime dump - MFDAOfflineCache
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAOfflineCache : MFOfflineCache
{
    NSString * _lastSelectedFolderID;
}

- (void)dealloc;
- (void)deferOperation:(NSObject *)arg0;
- (void)setLastSelectedMailbox:(id)arg0;
- (char)replayOperationsUsingBlock:(id /* block */)arg0;
- (void)deleteOfflineCacheData;

@end
