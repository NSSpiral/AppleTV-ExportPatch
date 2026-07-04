/* Runtime dump - PLCloudOperationResource
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudOperationResource : NSObject
{
    CPLResource * _resource;
    NSString * _targetAssetUuid;
}

@property (retain, nonatomic) CPLResource * resource;
@property (copy, nonatomic) NSString * targetAssetUuid;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (CPLResource *)resource;
- (NSString *)targetAssetUuid;
- (PLCloudOperationResource *)initWithResource:(CPLResource *)arg0;
- (void)setTargetAssetUuid:(NSString *)arg0;
- (void)setResource:(CPLResource *)arg0;

@end
