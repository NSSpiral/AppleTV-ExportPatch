/* Runtime dump - BBDismissalSyncCache
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDismissalSyncCache : NSObject
{
    NSMutableDictionary * _cache;
    NSDate * _timeToCheck;
}

@property (retain, nonatomic) NSMutableDictionary * cache;
@property (retain, nonatomic) NSDate * timeToCheck;

- (void)dealloc;
- (BBDismissalSyncCache *)init;
- (NSString *)description;
- (NSMutableDictionary *)cache;
- (void)setCache:(NSMutableDictionary *)arg0;
- (id)findBulletinMatch:(id)arg0;
- (void)removeBulletinMatch:(BBDismissalSyncBulletinMatch *)arg0;
- (void)cacheDismissalDictionaries:(id)arg0 dismissalIDs:(id)arg1 inSection:(UITableViewSection *)arg2 forFeeds:(unsigned int)arg3;
- (void)_checkCache;
- (NSDate *)timeToCheck;
- (char)_isTimeToCheck;
- (void)setTimeToCheck:(NSDate *)arg0;

@end
