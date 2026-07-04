/* Runtime dump - PLCloudLibraryLayoutStore
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudLibraryLayoutStore : NSObject
{
    PLCloudLibraryLayoutConfiguration * _config;
}

+ (void)validateConfiguration:(NSDictionary *)arg0;

- (unsigned int)includeAsset:(NSSet *)arg0;
- (unsigned int)excludeAsset:(NSSet *)arg0;
- (PLCloudLibraryLayoutStore *)initWithConfiguration:(NSDictionary *)arg0;
- (void)resetStore;
- (void)enumerateCategoriesWithBlock:(id /* block */)arg0;

@end
