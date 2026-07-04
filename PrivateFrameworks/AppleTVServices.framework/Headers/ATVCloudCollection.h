/* Runtime dump - ATVCloudCollection
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVCloudCollection : ATVDataCollection
{
    Class _collectionClass;
}

- (NSObject *)concreteValueForProperty:(NSString *)arg0;
- (ATVCloudCollection *)initWithDataClient:(ATVDataClient *)arg0 collectionClass:(Class)arg1;
- (NSObject *)albumValueForProperty:(NSString *)arg0;
- (NSObject *)artistValueForProperty:(NSString *)arg0;
- (NSObject *)playlistValueForProperty:(NSString *)arg0;
- (NSObject *)commonValueForProperty:(NSString *)arg0;

@end
