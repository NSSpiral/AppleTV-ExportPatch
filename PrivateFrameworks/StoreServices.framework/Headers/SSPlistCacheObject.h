/* Runtime dump - SSPlistCacheObject
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPlistCacheObject : NSObject <SSCacheObject>
{
    NSDictionary * _plist;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)cacheObjectTypeIdentifier;

- (void)setPlist:(NSDictionary *)arg0;
- (void)dealloc;
- (NSDictionary *)plist;
- (NSDictionary *)cacheObjectDataRepresentation;
- (NSString *)cacheObjectTypeIdentifier;
- (SSPlistCacheObject *)initWithCacheObjectDataRepresentation:(NSDictionary *)arg0;

@end
