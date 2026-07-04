/* Runtime dump - ATVMusicStoreShowInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRMediaType;
@interface ATVMusicStoreShowInfo : NSObject
{
    NSString * _key;
    BRMediaType * _mediaType;
    NSString * _itemID;
    NSMutableDictionary * _episodeData;
    int _episodeDataLock;
    NSDictionary * _itemDictionary;
}

@property (readonly, nonatomic) NSDictionary * itemDictionary;

+ (void)fetchRemoteShowInfoForIDs:(id)arg0 ofType:(NSString *)arg1 timeout:(double)arg2 handler:(<BRSelectionHandler> *)arg3;
+ (void)beginBulkUpdate;
+ (NSObject *)lookupShowInfoForItemID:(NSObject *)arg0 mediaType:(BRMediaType *)arg1 initIfNotFound:(char)arg2;
+ (void)commitBulkUpdate:(NSDate *)arg0;
+ (void)fetchRemoteShowInfoForKeys:(NSArray *)arg0 timeout:(double)arg1 handler:(<BRSelectionHandler> *)arg2;
+ (NSString *)_lookupShowInfoForTypeName:(NSString *)arg0 forEpisodeID:(NSObject *)arg1 initIfNotFound:(char)arg2;
+ (NSString *)_guidForTypeName:(NSString *)arg0 episodeID:(NSObject *)arg1;
+ (void)_fetchRemoteShowInfoForIDs:(id)arg0 ofTypes:(NSArray *)arg1 timeout:(double)arg2 fetchKeys:(NSMutableArray *)arg3 handler:(<BRSelectionHandler> *)arg4;
+ (void)fetchRemoteShowInfoForIDs:(id)arg0 ofTypes:(NSArray *)arg1 timeout:(double)arg2 handler:(<BRSelectionHandler> *)arg3;
+ (void)fetchRemoteShowInfoForEpisodeItems:(NSArray *)arg0 ofTypes:(NSArray *)arg1 timeout:(double)arg2 handler:(<BRSelectionHandler> *)arg3;
+ (void)synchronizeUpdates:(id)arg0;
+ (void)fetchRemoteShowInfoForEpisodeItems:(NSArray *)arg0 ofType:(NSString *)arg1 timeout:(double)arg2 handler:(<BRSelectionHandler> *)arg3;
+ (NSDictionary *)lookupShowInfoForItemDictionary:(NSDictionary *)arg0 initIfNotFound:(char)arg1;

- (void)setBookmarkTimeInMS:(long)arg0;
- (long)bookmarkTimeInMS;
- (void)_setObject:(NSObject *)arg0 forKey:(NSString *)arg1 shouldAutocommit:(char)arg2;
- (NSDictionary *)_initWithDictionary:(NSDictionary *)arg0 withKey:(NSString *)arg1 withItemID:(NSString *)arg2 withMediaType:(BRMediaType *)arg3;
- (char)hasBeenPlayed;
- (void)setHasBeenPlayed:(char)arg0;
- (NSDate *)timestamp;
- (void).cxx_destruct;
- (void)setHasBeenRented:(char)arg0;
- (void)setIsMarkedAsUnwatched:(char)arg0;
- (char)hasBeenRented;
- (char)isMarkedAsUnwatched;
- (void)markAsWatched;
- (void)markAsUnwatched;
- (NSString *)itemID;
- (NSString *)_objectForKey:(NSString *)arg0;
- (void)_setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)setPlayCount:(long)arg0;
- (long)playCount;
- (BRMediaType *)mediaType;
- (NSDictionary *)itemDictionary;

@end
