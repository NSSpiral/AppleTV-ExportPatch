/* Runtime dump - SSPlistCacheObjectFactory
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPlistCacheObjectFactory : NSObject <SSCacheObjectFactory>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)supportsTypeIdentifier:(NSString *)arg0;
- (NSDictionary *)cachedObjectWithDataRepresentation:(NSData *)arg0 typeIdentifier:(NSString *)arg1;

@end
