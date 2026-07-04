/* Runtime dump - MPStoreRedownloadProductItemAsset
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreRedownloadProductItemAsset : NSObject
{
    NSDictionary * _responseDictionary;
}

@property (readonly, copy, nonatomic) NSString * downloadKey;
@property (readonly, copy, nonatomic) NSString * flavor;
@property (readonly, copy, nonatomic) NSDictionary * responseDictionary;
@property (readonly, copy, nonatomic) NSArray * sinfs;
@property (readonly, copy, nonatomic) NSURL * URL;

- (MPStoreRedownloadProductItemAsset *)initWithResponseDictionary:(NSDictionary *)arg0;
- (NSString *)flavor;
- (NSArray *)sinfs;
- (NSString *)downloadKey;
- (NSURL *)URL;
- (void).cxx_destruct;
- (NSDictionary *)responseDictionary;

@end
