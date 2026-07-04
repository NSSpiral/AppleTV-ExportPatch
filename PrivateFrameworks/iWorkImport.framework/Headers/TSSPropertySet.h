/* Runtime dump - TSSPropertySet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSPropertySet : NSObject <NSCopying, NSMutableCopying>
{
    id mIndexSet;
}

+ (NSDictionary *)propertySetWithProperties:(int)arg0;
+ (NSObject *)p_mutableIndexSetWithFirstProperty:(int)arg0 argumentList:(void *)arg1;
+ (NSObject *)propertySetWithProperty:(int)arg0;
+ (NSArray *)propertySetWithArray:(NSArray *)arg0;
+ (TSSPropertySet *)propertySetFromUnionOfPropertySets:(id)arg0;
+ (NSSet *)propertySet;

- (char)containsProperty:(int)arg0;
- (char)intersectsProperties:(NSDictionary *)arg0;
- (void)enumeratePropertiesUsingBlock:(id /* block */)arg0;
- (NSSet *)propertySetByAddingPropertiesFromSet:(NSSet *)arg0;
- (char)containsProperties:(NSDictionary *)arg0;
- (NSSet *)propertySetByRemovingPropertiesFromSet:(NSSet *)arg0;
- (TSSPropertySet *)initWithFirstProperty:(int)arg0 argumentList:(void *)arg1;
- (TSSPropertySet *)initWithPropertySet:(NSSet *)arg0;
- (NSDictionary *)propertySetByAddingProperties:(int)arg0;
- (NSObject *)propertySetByAddingProperty:(int)arg0;
- (NSObject *)propertySetByRemovingProperty:(int)arg0;
- (NSDictionary *)propertySetByRemovingProperties:(int)arg0;
- (NSSet *)propertySetByIntersectingWithPropertySet:(NSSet *)arg0;
- (NSArray *)propertyStrings;
- (void)dealloc;
- (unsigned int)count;
- (TSSPropertySet *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSSPropertySet *)copyWithZone:(struct _NSZone *)arg0;
- (TSSPropertySet *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (TSSPropertySet *)initWithProperties:(int)arg0;
- (TSSPropertySet *)initWithIndexSet:(NSSet *)arg0;

@end
