/* Runtime dump - MPStoreOfferMediaItemArtworkDescriptor
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreOfferMediaItemArtworkDescriptor : NSObject <NSCopying>
{
    long long _itemPersistentID;
    NSDictionary * _screenshotURLs;
    NSDictionary * _itemArtworkURLs;
    NSDictionary * _containerArtworkURLs;
    NSArray * _screenshotSizes;
    NSArray * _itemArtworkSizes;
    NSArray * _containerArtworkSizes;
    unsigned int _hash;
    NSString * _cacheID;
}

@property (readonly, nonatomic) NSString * cacheID;

- (NSObject *)artworkURLForSize:(struct CGSize)arg0 type:(int)arg1;
- (NSObject *)availableSizesForArtworkOfType:(int)arg0;
- (NSString *)cacheID;
- (MPStoreOfferMediaItemArtworkDescriptor *)initWithItemPersistentID:(long long)arg0 screenshotDictionaries:(id)arg1 itemArtworkDictionaries:(id)arg2 containerArtworkDictionaries:(id)arg3;
- (NSArray *)_sizeToURLDictionaryFromStoreDictionariesArray:(NSArray *)arg0;
- (NSObject *)_preferredArtworkURLsForType:(int)arg0;
- (id)_availableSizesForArtworkURLs:(id)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (MPStoreOfferMediaItemArtworkDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end
