/* Runtime dump - NSSQLProperty
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLProperty : NSStoreMapping
{
    NSString * _name;
    NSPropertyDescription * _propertyDescription;
    NSSQLEntity * _entity;
    unsigned int _propertyType;
}

- (char)isToOne;
- (char)isManyToMany;
- (unsigned int)slot;
- (char)isAttribute;
- (NSString *)externalName;
- (NSSQLProperty *)initWithEntity:(NSSQLEntity *)arg0 propertyDescription:(NSPropertyDescription *)arg1;
- (void)copyValuesForReadOnlyFetch:(id)arg0;
- (char)isColumn;
- (char)isRelationship;
- (void)setEntityForReadOnlyFetch:(id)arg0;
- (void)_setName:(NSString *)arg0;
- (char)isPrimaryKey;
- (char)isForeignKey;
- (char)isForeignEntityKey;
- (char)isForeignOrderKey;
- (char)isEntityKey;
- (char)isOptLockKey;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSString *)name;
- (NSPropertyDescription *)propertyDescription;
- (unsigned int)propertyType;
- (void)setPropertyDescription:(NSPropertyDescription *)arg0;
- (NSString *)columnName;
- (NSSQLEntity *)entity;
- (char)isToMany;

@end
