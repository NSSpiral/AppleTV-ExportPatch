/* Runtime dump - NSEntityStoreMapping
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSEntityStoreMapping : NSStoreMapping
{
    NSEntityDescription * _entity;
    NSDictionary * _propertyMappings;
    NSArray * _primaryKeys;
    char _isSingleTableEntity;
    NSString * _subentityColumn;
    unsigned int _subentityID;
}

- (NSArray *)attributeMappings;
- (NSArray *)relationshipMappings;
- (void)setPropertyMappings:(NSDictionary *)arg0;
- (void)setPrimaryKeys:(NSArray *)arg0;
- (void)setSingleTableEntity:(char)arg0;
- (void)setSubentityColumn:(NSString *)arg0;
- (void)setSubentityID:(unsigned int)arg0;
- (NSDictionary *)propertyMappings;
- (NSArray *)primaryKeys;
- (char)isSingleTableEntity;
- (NSString *)subentityColumn;
- (unsigned int)subentityID;
- (NSArray *)primaryKeyColumnDefinitions;
- (NSArray *)attributeColumnDefinitions;
- (NSArray *)foreignKeyColumnDefinitions;
- (NSArray *)foreignKeyConstraintDefinitions;
- (NSEntityStoreMapping *)initWithEntity:(NSEntityDescription *)arg0;
- (id)createTableStatement;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)setEntity:(NSEntityDescription *)arg0;
- (NSEntityDescription *)entity;

@end
