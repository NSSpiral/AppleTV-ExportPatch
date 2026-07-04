/* Runtime dump - PHAssetEmbeddedThumbnailProperties
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetEmbeddedThumbnailProperties : NSObject
{
    short _embeddedThumbnailWidth;
    short _embeddedThumbnailHeight;
    PHAsset * _asset;
    int _embeddedThumbnailOffset;
    int _embeddedThumbnailLength;
}

@property (readonly, weak, nonatomic) PHAsset * asset;
@property (readonly, nonatomic) char hasEmbeddedThumbnail;
@property (readonly, nonatomic) NSData * embeddedThumbnailData;
@property (readonly, nonatomic) int embeddedThumbnailOffset;
@property (readonly, nonatomic) int embeddedThumbnailLength;
@property (readonly, nonatomic) short embeddedThumbnailWidth;
@property (readonly, nonatomic) short embeddedThumbnailHeight;

- (PHAssetEmbeddedThumbnailProperties *)initWithFetchDictionary:(NSDictionary *)arg0 asset:(PHAsset *)arg1;
- (void).cxx_destruct;
- (PHAsset *)asset;
- (int)embeddedThumbnailOffset;
- (short)embeddedThumbnailWidth;
- (short)embeddedThumbnailHeight;
- (int)embeddedThumbnailLength;
- (char)hasEmbeddedThumbnail;
- (NSData *)embeddedThumbnailData;

@end
