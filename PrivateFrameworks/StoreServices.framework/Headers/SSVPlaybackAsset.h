/* Runtime dump - SSVPlaybackAsset
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackAsset : NSObject
{
    NSDictionary * _assetDictionary;
}

@property (readonly, copy, nonatomic) NSDictionary * assetDictionary;
@property (readonly, nonatomic) NSString * downloadKey;
@property (readonly, nonatomic) NSString * flavor;
@property (readonly, nonatomic) NSString * URLString;
@property (readonly, nonatomic) NSArray * sinfs;

- (NSString *)flavor;
- (NSArray *)sinfs;
- (NSString *)downloadKey;
- (NSDictionary *)assetDictionary;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)URLString;
- (SSVPlaybackAsset *)initWithAssetDictionary:(NSDictionary *)arg0;

@end
