/* Runtime dump - PLAssetChangeNotification
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetChangeNotification : PLChangeNotification
{
    NSSet * _updatedAssets;
}

@property (copy, nonatomic) NSSet * updatedAssets;

+ (NSArray *)notificationWithChangedAssets:(struct changeList_s)arg0;

- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (PLAssetChangeNotification *)_init;
- (NSDictionary *)userInfo;
- (NSObject *)object;
- (NSSet *)updatedAssets;
- (NSArray *)_initWithChangedObjects:(NSArray *)arg0;
- (void)setUpdatedAssets:(NSSet *)arg0;

@end
