/* Runtime dump - CommunicationsFilterBlockListCache
 * Image: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
 */

@interface CommunicationsFilterBlockListCache : NSObject
{
    NSMutableArray * _recentItems;
    int _notifyEmptyListToken;
    char _listIsEmpty;
}

- (CommunicationsFilterBlockListCache *)init;
- (void)_blockListChanged:(NSNotification *)arg0;
- (void)syncListEmptyState;
- (long long)cachedResponseForItem:(NSObject *)arg0;
- (void)removeItemFromCache:(NSObject *)arg0;
- (void)setResponse:(char)arg0 forItem:(NSObject *)arg1;

@end
