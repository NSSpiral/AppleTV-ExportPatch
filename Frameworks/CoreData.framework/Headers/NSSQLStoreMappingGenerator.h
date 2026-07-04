/* Runtime dump - NSSQLStoreMappingGenerator
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLStoreMappingGenerator : NSObject
{
    NSMutableDictionary * _names;
}

+ (NSSQLStoreMappingGenerator *)defaultMappingGenerator;
+ (void)invalidate;

- (id)uniqueNameWithBase:(id)arg0;
- (NSString *)newGeneratedPropertyName:(NSString *)arg0;
- (NSString *)generateTableName:(NSString *)arg0;
- (id)newUniqueNameWithBase:(unsigned short *)arg0 withLength:(unsigned int)arg1;
- (void)dealloc;
- (NSSQLStoreMappingGenerator *)init;

@end
