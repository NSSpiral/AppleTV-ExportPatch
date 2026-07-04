/* Runtime dump - MPStorePlatformMediaItem
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStorePlatformMediaItem : MPNondurableMediaItem
{
    MPStoreItemMetadata * _storeItemMetadata;
}

@property (retain, nonatomic) MPStoreItemMetadata * storeItemMetadata;

+ (MPStorePlatformMediaItem *)defaultPropertyValues;

- (void)setStoreItemMetadata:(MPStoreItemMetadata *)arg0;
- (MPStoreItemMetadata *)storeItemMetadata;
- (NSObject *)_valueFromMetadataForProperty:(NSString *)arg0;
- (MPStorePlatformMediaItem *)initWithStoreItemMetadata:(MPStoreItemMetadata *)arg0;
- (MPStorePlatformMediaItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void *)valueForProperty:(NSString *)arg0;

@end
