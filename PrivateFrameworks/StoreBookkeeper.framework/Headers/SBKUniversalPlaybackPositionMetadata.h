/* Runtime dump - SBKUniversalPlaybackPositionMetadata
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKUniversalPlaybackPositionMetadata : NSObject <SBKKeyValuePayloadPair, NSCopying>
{
    char _hasBeenPlayed;
    NSString * _itemIdentifier;
    unsigned int _playCount;
    double _timestamp;
    double _bookmarkTime;
}

@property (copy) NSString * itemIdentifier;
@property double timestamp;
@property double bookmarkTime;
@property char hasBeenPlayed;
@property unsigned int playCount;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)keyValueStoreItemIdentifierForItem:(NSObject *)arg0;
+ (NSString *)pairWithKVSKey:(NSString *)arg0 kvsPayload:(NSData *)arg1;
+ (NSString *)metadataWithItemIdentifier:(NSString *)arg0 keyValueStorePayload:(NSData *)arg1 failuresOkay:(char)arg2;
+ (NSObject *)_testableMetadataItem_1;
+ (NSObject *)keyValueStoreItemIdentifierForUniqueStoreID:(long long)arg0 itemTitle:(NSString *)arg1 albumName:(NSString *)arg2 itemArtistName:(NSString *)arg3 feedURL:(NSString *)arg4 feedGUID:(NSString *)arg5;
+ (NSObject *)metadataWithValuesFromDataSourceItem:(NSObject *)arg0;
+ (NSString *)metadataWithItemIdentifier:(NSString *)arg0 bookmarkTime:(double)arg1 bookmarkTimestamp:(double)arg2 hasBeenPlayed:(char)arg3 playCount:(unsigned int)arg4;
+ (NSString *)metadataWithItemIdentifier:(NSString *)arg0 keyValueStorePayload:(NSData *)arg1;

- (double)bookmarkTime;
- (char)hasBeenPlayed;
- (void)setHasBeenPlayed:(char)arg0;
- (void)setItemIdentifier:(NSString *)arg0;
- (SBKUniversalPlaybackPositionMetadata *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (double)timestamp;
- (void)setTimestamp:(double)arg0;
- (SBKUniversalPlaybackPositionMetadata *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setBookmarkTime:(double)arg0;
- (void)setPlayCount:(unsigned int)arg0;
- (unsigned int)playCount;
- (NSString *)itemIdentifier;
- (NSString *)kvsKey;
- (NSData *)kvsPayload;
- (NSString *)kvsValueDescription;
- (SBKUniversalPlaybackPositionMetadata *)initAsTestableItem;
- (NSData *)keyValueStorePayload;

@end
