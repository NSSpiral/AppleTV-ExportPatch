/* Runtime dump - MPMediaItemCollection
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaItemCollection : MPMediaEntity
{
    unsigned int _containedMediaTypes;
    char _initializedContainedMediaTypes;
    NSArray * _items;
    unsigned int _itemsCount;
    MPMediaQuery * _itemsQuery;
    MPMediaItem * _representativeItem;
}

@property (readonly, nonatomic) NSArray * items;
@property (readonly, nonatomic) MPMediaItem * representativeItem;
@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) unsigned int mediaTypes;
@property (readonly, nonatomic) int groupingType;

+ (NSObject *)titlePropertyForGroupingType:(int)arg0;
+ (NSArray *)collectionWithItems:(NSArray *)arg0;
+ (NSObject *)sortTitlePropertyForGroupingType:(int)arg0;
+ (NSObject *)representativePersistentIDPropertyForGroupingType:(int)arg0;
+ (char)supportsSecureCoding;

- (MPArtworkCatalog *)artworkCatalog;
- (MPMediaItemCollection *)initWithMultiverseIdentifier:(MIPMultiverseIdentifier *)arg0;
- (void)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1 withCompletionBlock:(id /* block */)arg2;
- (MPMediaItem *)representativeItem;
- (int)groupingType;
- (MPMediaItemCollection *)initWithItemsQuery:(MPMediaQuery *)arg0;
- (MPMediaQuery *)itemsQuery;
- (char)MPSD_hasDownloadingItem;
- (id)albumArtistArtworkCatalog;
- (id)artistArtworkCatalog;
- (char)MPSD_hasDownloadableItem;
- (MPMediaItemCollection *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (MPMediaItemCollection *)init;
- (NSArray *)items;
- (MPMediaItemCollection *)initWithItems:(NSArray *)arg0;
- (unsigned int)mediaTypes;
- (void).cxx_destruct;
- (char)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1;
- (MIPMultiverseIdentifier *)multiverseIdentifier;

@end
