/* Runtime dump - NSSQLForeignOrderKey
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLForeignOrderKey : NSSQLColumn
{
    NSSQLForeignKey * _foreignKey;
}

- (NSSQLForeignKey *)foreignKey;
- (NSSQLForeignOrderKey *)initWithEntity:(NSSQLEntity *)arg0 propertyDescription:(NSString *)arg1;
- (id)toOneRelationship;
- (NSSQLForeignOrderKey *)initWithEntity:(NSObject *)arg0 foreignKey:(NSSQLForeignKey *)arg1;
- (NSSQLForeignOrderKey *)initForReadOnlyFetchingOfEntity:(NSObject *)arg0 toOneRelationship:(id)arg1;
- (void)setFKForReadOnlyFetch:(id)arg0;
- (void)dealloc;

@end
