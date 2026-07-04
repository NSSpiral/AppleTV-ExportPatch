/* Runtime dump - ATVCloudAlbumQueryHandler
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVCloudAlbumQueryHandler : ATVCloudCollectionQueryHandler

+ (NSObject *)mlPredicatePropertyForATVProperty:(NSObject *)arg0;
+ (NSObject *)mlQueryPropertyForATVProperty:(NSObject *)arg0;
+ (NSObject *)mlPropertyForATVProperty:(NSObject *)arg0;

- (NSObject *)orderingTermsForProperty:(NSString *)arg0;
- (NSObject *)blankProperty;
- (unsigned int)dmapResponseHeaderCode;
- (Class)collectionClass;
- (Class)entityClass;
- (NSString *)foreignPersistentIDProperty;

@end
