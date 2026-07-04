/* Runtime dump - ML3StoreItemTrackData
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3StoreItemTrackData : NSObject
{
    NSArray * _lookupItems;
    NSArray * _storeItems;
    NSData * _trackData;
    NSArray * _parsedStoreItemsImportProperties;
    NSDateFormatter * _storePlatformDateFormatter;
}

@property (readonly, nonatomic) NSData * trackData;
@property (readonly, nonatomic) NSArray * parsedStoreItemsImportProperties;
@property (readonly, nonatomic) unsigned int trackCount;

+ (NSArray *)_allSongItemsFromLookupItems:(NSArray *)arg0;
+ (unsigned long)_mediaTypeForStoreItemKind:(id)arg0;
+ (double)_songDurationFromOffersArray:(NSArray *)arg0;
+ (NSObject *)_artworkTokenFromStoreItem:(NSObject *)arg0;
+ (NSObject *)_artworkTokenForItemWithCollectionID:(unsigned long long)arg0 itemID:(unsigned long long)arg1;
+ (NSObject *)_allSongItemsFromCollectionLookupItem:(NSObject *)arg0;
+ (NSObject *)_artworkTokenFromLookupItem:(NSObject *)arg0;

- (void).cxx_destruct;
- (NSArray *)parsedStoreItemsImportProperties;
- (NSArray *)_storeItemsImportPropertiesFromLookupItems:(NSArray *)arg0;
- (NSArray *)_storeItemsImportPropertiesFromStoreItems:(NSArray *)arg0;
- (NSData *)_storeItemsImportPropertiesFromTrackData:(NSData *)arg0;
- (NSObject *)_importDictionaryForLookupItem:(NSObject *)arg0 parentCollectionCache:(NSObject *)arg1;
- (NSObject *)_importDictionaryForStoreItem:(NSObject *)arg0;
- (NSObject *)_parentDictForItemAlbumId:(NSObject *)arg0;
- (NSDateFormatter *)_storePlatformDateFormatter;
- (ML3StoreItemTrackData *)initWithLookupItems:(NSArray *)arg0;
- (ML3StoreItemTrackData *)initWithStoreItems:(NSArray *)arg0;
- (ML3StoreItemTrackData *)initWithTrackData:(NSData *)arg0;
- (NSData *)trackData;
- (unsigned int)trackCount;

@end
