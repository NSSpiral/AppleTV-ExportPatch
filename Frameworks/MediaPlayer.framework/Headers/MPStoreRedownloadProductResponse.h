/* Runtime dump - MPStoreRedownloadProductResponse
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreRedownloadProductResponse : NSObject
{
    NSDictionary * _responseDictionary;
}

@property (readonly, nonatomic) MPStoreRedownloadProductItem * item;
@property (readonly, copy, nonatomic) NSDictionary * responseDictionary;

- (MPStoreRedownloadProductResponse *)initWithResponseDictionary:(NSDictionary *)arg0;
- (MPStoreRedownloadProductItem *)item;
- (void).cxx_destruct;
- (NSDictionary *)responseDictionary;

@end
