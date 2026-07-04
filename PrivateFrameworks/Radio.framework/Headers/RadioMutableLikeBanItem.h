/* Runtime dump - RadioMutableLikeBanItem
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutableLikeBanItem : RadioLikeBanItem
{
    long long _itemID;
}

@property (nonatomic) long long albumID;
@property (retain, nonatomic) RadioArtworkCollection * artworkCollection;
@property (nonatomic) char isSeed;
@property (nonatomic) long long itemID;
@property (copy, nonatomic) RadioSeedMetadata * seedMetadata;
@property (nonatomic) long long storeID;
@property (nonatomic) int type;

- (void)setType:(int)arg0;
- (RadioMutableLikeBanItem *)copyWithZone:(struct _NSZone *)arg0;
- (long long)itemID;
- (void)setItemID:(long long)arg0;
- (void)setAlbumID:(long long)arg0;
- (void)setArtworkCollection:(RadioArtworkCollection *)arg0;
- (void)setIsSeed:(char)arg0;
- (void)setSeedMetadata:(RadioSeedMetadata *)arg0;
- (void)setStoreID:(long long)arg0;

@end
