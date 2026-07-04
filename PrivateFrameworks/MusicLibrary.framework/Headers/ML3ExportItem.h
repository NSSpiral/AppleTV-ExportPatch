/* Runtime dump - ML3ExportItem
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ExportItem : NSObject
{
    NSDictionary * _properties;
    ML3MusicLibrary * _library;
    Class _entityClass;
    long long _persistentId;
}

@property (readonly, nonatomic) long long persistentId;
@property (readonly, nonatomic) ML3MusicLibrary * library;
@property (readonly, nonatomic) Class entityClass;

+ (unsigned int *)allExportPropertyKeysForEntityClass:(Class)arg0 returnedCount:(unsigned int *)arg1;

- (NSString *)description;
- (char)isValid;
- (void).cxx_destruct;
- (void *)valueForProperty:(unsigned int)arg0;
- (ML3MusicLibrary *)library;
- (NSData *)exportData;
- (ML3ExportItem *)initWithPersistentId:(long long)arg0 entityClass:(Class)arg1 library:(ML3MusicLibrary *)arg2;
- (Class)entityClass;
- (ML3ExportItem *)initWithPersistentId:(long long)arg0 entityClass:(Class)arg1 propertyKeysToExport:(unsigned int *)arg2 numKeys:(unsigned int)arg3 library:(ML3MusicLibrary *)arg4;
- (NSArray *)_propertyNamesFromKeys:(unsigned int *)arg0 numKeys:(unsigned int)arg1;
- (ML3ExportItem *)initWithPersistentId:(long long)arg0 entityClass:(Class)arg1 properties:(NSDictionary *)arg2 library:(ML3MusicLibrary *)arg3;
- (NSString *)_propertyNameForKey:(unsigned int)arg0;
- (NSArray *)_allExportPropertyNames;
- (char)charValueForProperty:(unsigned int)arg0;
- (short)shortValueForProperty:(unsigned int)arg0;
- (int)longValueForProperty:(unsigned int)arg0;
- (long long)longlongValueForProperty:(unsigned int)arg0;
- (NSObject *)dataValueForProperty:(unsigned int)arg0;
- (NSObject *)stringValueForProperty:(unsigned int)arg0;
- (char)hasValueForProperty:(unsigned int)arg0;
- (unsigned int *)propertyKeysToExport:(unsigned int *)arg0;
- (long long)persistentId;

@end
