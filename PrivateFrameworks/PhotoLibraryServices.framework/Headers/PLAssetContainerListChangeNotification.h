/* Runtime dump - PLAssetContainerListChangeNotification
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetContainerListChangeNotification : PLContainerChangeNotification
{
    NSDictionary * _userInfo;
}

@property (readonly, retain, nonatomic) <PLAssetContainerList> * assetContainerList;
@property (readonly, retain, nonatomic) NSObject<PLAlbumContainer> * albumList;

+ (NSArray *)notificationWithContainerList:(<PLAssetContainerList> *)arg0 snapshot:(NSObject *)arg1 changedContainers:(id)arg2;
+ (NSArray *)notificationWithSimulatedReloadRequestForContainerList:(NSArray *)arg0;

- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (NSDictionary *)userInfo;
- (struct NSObject *)albumList;
- (NSString *)_contentRelationshipName;
- (<PLAssetContainerList> *)assetContainerList;

@end
