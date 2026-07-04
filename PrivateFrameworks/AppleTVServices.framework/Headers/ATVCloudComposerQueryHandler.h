/* Runtime dump - ATVCloudComposerQueryHandler
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVCloudComposerQueryHandler : ATVCloudCollectionQueryHandler

+ (NSObject *)mlPredicatePropertyForATVProperty:(NSObject *)arg0;
+ (NSObject *)mlQueryPropertyForATVProperty:(NSObject *)arg0;
+ (NSObject *)mlPropertyForATVProperty:(NSObject *)arg0;

- (NSObject *)orderingTermsForProperty:(NSString *)arg0;
- (unsigned int)dmapResponseHeaderCode;
- (Class)collectionClass;
- (Class)entityClass;
- (NSString *)foreignPersistentIDProperty;

@end
