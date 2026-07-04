/* Runtime dump - MPConcreteMediaPlaylist
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCoding, NSCopying>
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _properties;
    MPMediaQuery * _itemsQuery;
    void * _clusterPlaylist;
}

- (MPMediaLibrary *)mediaLibrary;
- (NSDictionary *)valuesForProperties:(NSDictionary *)arg0;
- (void)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1 withCompletionBlock:(id /* block */)arg2;
- (MPMediaItem *)representativeItem;
- (void)removeFirstItem;
- (MPConcreteMediaPlaylist *)initWithProperties:(NSMutableDictionary *)arg0 itemsQuery:(MPMediaQuery *)arg1;
- (MPMediaQuery *)itemsQuery;
- (void)populateWithSeedItem:(NSObject *)arg0 queue:(NSObject *)arg1 completionBlock:(id /* block */)arg2;
- (void)_updateLibraryForPlaylistEdit:(id)arg0;
- (void)addItem:(NSObject *)arg0 completionBlock:(id /* block */)arg1;
- (void)addItems:(NSArray *)arg0 completionBlock:(id /* block */)arg1;
- (void)removeItems:(NSArray *)arg0 atFilteredIndexes:(NSArray *)arg1 completionBlock:(id /* block */)arg2;
- (void)removeAllItems;
- (void)moveItemFromIndex:(unsigned int)arg0 toIndex:(unsigned int)arg1 completionBlock:(id /* block */)arg2;
- (void)populateWithSeedItem:(NSObject *)arg0 completionBlock:(id /* block */)arg1;
- (char)beginGeneratingGeniusClusterItemsWithSeedItems:(NSArray *)arg0 error:(id *)arg1;
- (NSNumber *)geniusClusterItemsWithCount:(unsigned int)arg0 error:(id *)arg1;
- (void)endGeneratingGeniusClusterItems;
- (MPConcreteMediaPlaylist *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (MPConcreteMediaPlaylist *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)items;
- (unsigned int)mediaTypes;
- (void).cxx_destruct;
- (void *)valueForProperty:(NSString *)arg0;
- (char)existsInLibrary;
- (char)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1;
- (MIPMultiverseIdentifier *)multiverseIdentifier;

@end
