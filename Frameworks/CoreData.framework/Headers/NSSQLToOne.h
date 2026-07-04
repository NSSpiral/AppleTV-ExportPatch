/* Runtime dump - NSSQLToOne
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLToOne : NSSQLRelationship
{
    NSSQLForeignKey * _foreignKey;
    NSSQLForeignEntityKey * _foreignEntityKey;
    NSSQLForeignOrderKey * _foreignOrderKey;
    unsigned int _slot;
    char _isVirtual;
}

- (char)isOptional;
- (unsigned int)slot;
- (NSSQLForeignKey *)foreignKey;
- (NSSQLForeignEntityKey *)foreignEntityKey;
- (NSSQLToOne *)initWithEntity:(NSSQLEntity *)arg0 propertyDescription:(NSString *)arg1;
- (void)copyValuesForReadOnlyFetch:(id)arg0;
- (char)isVirtual;
- (NSSQLForeignOrderKey *)foreignOrderKey;
- (NSSQLToOne *)initWithEntity:(NSObject *)arg0 inverseToMany:(id)arg1;
- (NSSQLToOne *)initForReadOnlyFetchWithEntity:(NSObject *)arg0 propertyDescription:(NSString *)arg1;
- (void)_setForeignOrderKey:(NSString *)arg0;
- (NSSQLToOne *)initWithEntity:(NSObject *)arg0 propertyDescription:(NSString *)arg1 virtualForToMany:(id)arg2;
- (void)dealloc;
- (NSString *)description;
- (NSString *)columnName;

@end
