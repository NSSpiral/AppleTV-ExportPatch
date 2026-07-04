/* Runtime dump - SSVMutableMediaContentTasteItem
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMutableMediaContentTasteItem : SSVMediaContentTasteItem

@property (nonatomic) unsigned int contentType;
@property (copy, nonatomic) NSString * playlistGlobalID;
@property (nonatomic) long long storeAdamID;
@property (nonatomic) unsigned int tasteType;

- (void)setStoreAdamID:(long long)arg0;
- (SSVMutableMediaContentTasteItem *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPlaylistGlobalID:(NSString *)arg0;
- (void)setTasteType:(unsigned int)arg0;
- (void)setContentType:(unsigned int)arg0;

@end
