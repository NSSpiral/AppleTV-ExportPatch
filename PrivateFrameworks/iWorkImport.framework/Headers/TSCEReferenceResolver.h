/* Runtime dump - TSCEReferenceResolver
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEReferenceResolver : NSObject

+ (NSString *)resolverContainerMatchingName:(NSString *)arg0 inDocumentRoot:(NSObject *)arg1;
+ (NSString *)resolverMatchingName:(NSString *)arg0 inDocumentRoot:(NSObject *)arg1 contextResolver:(NSObject *)arg2;
+ (NSObject *)resolverMatchingNameWithContextContainer:(NSObject *)arg0 inDocumentRoot:(NSObject *)arg1 contextContainerName:(NSString *)arg2;
+ (Class)resolverClass;
+ (void)setResolverClass:(Class)arg0;

@end
