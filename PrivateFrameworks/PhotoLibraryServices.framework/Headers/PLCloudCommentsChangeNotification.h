/* Runtime dump - PLCloudCommentsChangeNotification
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification
{
    NSDictionary * _userInfo;
}

@property (readonly, retain, nonatomic) PLManagedAsset * asset;

+ (NSSet *)notificationWithAsset:(PLManagedAsset *)arg0 snapshot:(NSObject *)arg1;

- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (NSDictionary *)userInfo;
- (PLManagedAsset *)asset;
- (NSString *)_contentRelationshipName;

@end
