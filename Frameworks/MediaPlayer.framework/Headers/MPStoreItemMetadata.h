/* Runtime dump - MPStoreItemMetadata
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreItemMetadata : NSObject <NSCopying>
{
    NSDictionary * _downloadAssetDictionary;
    NSDictionary * _downloadMetadataDictionary;
    char _hasOverrideChildStorePlatformDictionaries;
    NSArray * _overrideChildStorePlatformDictionaries;
    MPStoreItemMetadata * _parentStoreItemMetadata;
    NSDictionary * _storePlatformDictionary;
}

@property (readonly, copy, nonatomic) NSString * artistName;
@property (readonly, nonatomic) MPStoreArtworkRequestToken * artworkRequestToken;
@property (readonly, copy, nonatomic) id artistStoreID;
@property (readonly, copy, nonatomic) NSArray * artworkTrackIDs;
@property (readonly, copy, nonatomic) NSArray * childrenStoreIDs;
@property (readonly, copy, nonatomic) NSString * collectionName;
@property (readonly, copy, nonatomic) id collectionStoreID;
@property (readonly, copy, nonatomic) NSString * copyrightText;
@property (readonly, copy, nonatomic) NSString * curatorName;
@property (readonly, nonatomic) unsigned int discCount;
@property (readonly, nonatomic) unsigned int discNumber;
@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) NSString * editorNotes;
@property (readonly, copy, nonatomic) NSDictionary * effectiveStorePlatformDictionary;
@property (readonly, nonatomic) char explicitContent;
@property (readonly, copy, nonatomic) NSArray * genreNames;
@property (readonly, nonatomic) char isPreorder;
@property (readonly, copy, nonatomic) NSString * itemKind;
@property (readonly, nonatomic) MPStoreArtworkRequestToken * latestAlbumArtworkRequestToken;
@property (readonly, copy, nonatomic) NSString * name;
@property (readonly, copy, nonatomic) NSArray * offers;
@property (readonly, copy, nonatomic) NSDate * releaseDate;
@property (readonly, copy, nonatomic) id storeID;
@property (readonly, nonatomic) unsigned int trackCount;
@property (readonly, nonatomic) unsigned int trackNumber;

- (unsigned int)discCount;
- (NSString *)copyrightText;
- (MPStoreItemMetadata *)initWithStorePlatformDictionary:(NSDictionary *)arg0;
- (NSArray *)offers;
- (NSString *)storeID;
- (NSDictionary *)artworkRequestTokenForStorePlatformDictionary:(NSDictionary *)arg0;
- (MPStoreArtworkRequestToken *)artworkRequestToken;
- (NSNumber *)artistStoreID;
- (NSObject *)collectionStoreID;
- (NSString *)curatorName;
- (NSString *)editorNotes;
- (NSArray *)genreNames;
- (char)isMasteredForITunes;
- (char)isPreorder;
- (NSDictionary *)_artworkRequestTokenForStorePlatformDictionary:(NSDictionary *)arg0 artworkKey:(NSString *)arg1;
- (MPStoreItemMetadata *)initWithDownloadAssetDictionary:(NSDictionary *)arg0;
- (MPStoreItemMetadata *)initWithStorePlatformDictionary:(NSDictionary *)arg0 parentStoreItemMetadata:(MPStoreItemMetadata *)arg1;
- (NSArray *)artworkTrackIDs;
- (NSArray *)childrenStoreIDs;
- (NSDictionary *)effectiveStorePlatformDictionary;
- (MPStoreArtworkRequestToken *)latestAlbumArtworkRequestToken;
- (id)artworkRequestTokenForEditorialArtworkKind:(id)arg0;
- (NSObject *)childStorePlatformDictionaryForArtworkTrackID:(NSObject *)arg0;
- (NSObject *)childStorePlatformDictionaryForStoreID:(NSObject *)arg0;
- (id)metadataWithChildStorePlatformDictionaries:(id)arg0;
- (NSDictionary *)metadataWithParentMetadata:(NSDictionary *)arg0;
- (NSString *)description;
- (double)duration;
- (NSString *)name;
- (MPStoreItemMetadata *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (unsigned int)discNumber;
- (unsigned int)trackNumber;
- (NSString *)artistName;
- (NSString *)itemKind;
- (NSObject *)_storePlatformDateFormatter;
- (char)isCompilation;
- (NSDate *)releaseDate;
- (char)isExplicitContent;
- (unsigned int)trackCount;
- (NSString *)collectionName;

@end
