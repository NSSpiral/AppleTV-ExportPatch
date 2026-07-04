/* Runtime dump - SSVPlaybackItem
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackItem : NSObject
{
    NSDictionary * _itemDictionary;
}

@property (readonly, copy, nonatomic) NSDictionary * itemDictionary;
@property (readonly, copy, nonatomic) id itemIdentifier;
@property (readonly, nonatomic) NSArray * assets;

- (id)assetForFlavor:(id)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (NSArray *)assets;
- (NSString *)itemIdentifier;
- (SSVPlaybackItem *)initWithItemDictionary:(NSDictionary *)arg0;
- (void)_enumerateAssetsUsingBlock:(id /* block */)arg0;
- (NSDictionary *)itemDictionary;

@end
