/* Runtime dump - NSStoreMappingGenerator
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSStoreMappingGenerator : NSObject

+ (NSStoreMappingGenerator *)defaultMappingGenerator;
+ (void)invalidate;

- (NSString *)externalNameForEntityName:(NSString *)arg0;
- (NSString *)mappingsDictForConfigurationWithName:(NSString *)arg0 inModel:(NSObject *)arg1;
- (NSString *)externalNameForPropertyName:(NSString *)arg0;
- (NSObject *)mappingForAttribute:(NSObject *)arg0 forConfigurationWithName:(NSString *)arg1;
- (id)mappingForRelationship:(id)arg0 forConfigurationWithName:(NSString *)arg1;
- (NSObject *)primaryKeyForEntity:(NSObject *)arg0;
- (id)joinsForRelationship:(id)arg0;
- (NSObject *)mappingForEntity:(NSObject *)arg0 forConfigurationWithName:(NSString *)arg1;
- (NSString *)mappingsForConfigurationWithName:(NSString *)arg0 inModel:(NSObject *)arg1;
- (NSString *)internalNameForEntityName:(NSString *)arg0 version:(int)arg1;
- (NSString *)internalNameForPropertyName:(NSString *)arg0 version:(int)arg1;

@end
