/* Runtime dump - NSSQLRelationship
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLRelationship : NSSQLProperty
{
    NSSQLEntity * _destinationEntity;
    NSSQLRelationship * _inverse;
}

- (NSSQLEntity *)destinationEntity;
- (NSString *)correlationTableName;
- (NSSQLForeignKey *)foreignKey;
- (NSSQLRelationship *)initWithEntity:(NSSQLEntity *)arg0 propertyDescription:(NSString *)arg1;
- (void)copyValuesForReadOnlyFetch:(id)arg0;
- (NSString *)relationshipDescription;
- (NSObject *)sourceEntity;
- (void)_setInverseRelationship:(id)arg0;
- (NSSQLRelationship *)initForReadOnlyFetchWithEntity:(NSObject *)arg0 propertyDescription:(NSString *)arg1;
- (void)_setForeignOrderKey:(NSString *)arg0;
- (void)dealloc;
- (char)isOrdered;
- (NSRelationshipDescription *)inverseRelationship;

@end
