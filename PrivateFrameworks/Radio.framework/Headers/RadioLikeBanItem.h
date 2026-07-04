/* Runtime dump - RadioLikeBanItem
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioLikeBanItem : NSObject <NSCopying, NSMutableCopying>
{
    long long _albumID;
    RadioArtworkCollection * _artworkCollection;
    char _isSeed;
    RadioSeedMetadata * _seedMetadata;
    long long _storeID;
    int _type;
}

@property (readonly, nonatomic) long long albumID;
@property (readonly, nonatomic) RadioArtworkCollection * artworkCollection;
@property (readonly, nonatomic) char isSeed;
@property (readonly, copy, nonatomic) RadioSeedMetadata * seedMetadata;
@property (readonly, nonatomic) long long storeID;
@property (readonly, nonatomic) int type;

- (long long)storeID;
- (RadioLikeBanItem *)init;
- (NSString *)description;
- (int)type;
- (RadioLikeBanItem *)copyWithZone:(struct _NSZone *)arg0;
- (RadioLikeBanItem *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (RadioSeedMetadata *)seedMetadata;
- (long long)albumID;
- (RadioArtworkCollection *)artworkCollection;
- (char)isSeed;
- (RadioLikeBanItem *)initWithItemDictionary:(NSDictionary *)arg0;

@end
