/* Runtime dump - BBDismissalSyncCacheItem
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDismissalSyncCacheItem : NSObject
{
    NSMutableArray * _dismissalDictionariesAndFeeds;
    NSMutableDictionary * _dismissalIDToFeeds;
}

@property (readonly, retain, nonatomic) NSMutableArray * dismissalDictionariesAndFeeds;
@property (readonly, retain, nonatomic) NSMutableDictionary * dismissalIDToFeeds;

- (void)dealloc;
- (BBDismissalSyncCacheItem *)init;
- (NSString *)description;
- (id)findBulletinMatch:(id)arg0;
- (void)removeBulletinMatch:(BBDismissalSyncBulletinMatch *)arg0;
- (void)cacheDismissalDictionaries:(id)arg0 dismissalIDs:(id)arg1 forFeeds:(unsigned int)arg2;
- (id)purgeExpired;
- (NSMutableArray *)dismissalDictionariesAndFeeds;
- (NSMutableDictionary *)dismissalIDToFeeds;

@end
