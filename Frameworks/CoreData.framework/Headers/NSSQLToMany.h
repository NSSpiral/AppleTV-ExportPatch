/* Runtime dump - NSSQLToMany
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLToMany : NSSQLRelationship

- (id)inverseToOne;
- (NSSQLToMany *)initWithEntity:(NSSQLEntity *)arg0 propertyDescription:(NSString *)arg1;
- (char)isToMany;

@end
