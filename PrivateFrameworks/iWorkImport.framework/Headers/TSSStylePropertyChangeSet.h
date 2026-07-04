/* Runtime dump - TSSStylePropertyChangeSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSStylePropertyChangeSet : TSKSosBase

- (void)setBoxedValue:(id)arg0 forProperty:(int)arg1;
- (void)setSpec:(NSObject *)arg0 forProperty:(int)arg1;
- (void)setUnsetSpecForProperty:(int)arg0;
- (void)enumerateDefinedPropertiesWithBlock:(id /* block */)arg0;
- (NSObject *)p_variationPropertyMapFromStyle:(NSObject *)arg0 withPropertyMap:(NSObject *)arg1;
- (NSObject *)variationPropertyMapFromParentStyle:(NSObject *)arg0;
- (NSObject *)variationPropertyMapFromStyle:(NSObject *)arg0;
- (char)isEqualToChangeSet:(NSSet *)arg0;
- (NSObject *)collectUndoForStyle:(NSObject *)arg0;
- (NSSet *)collectUnset;
- (NSObject *)variationStyleFrom:(NSObject *)arg0 inStylesheet:(NSObject *)arg1;
- (NSArray *)changedPropertyPaths;
- (char)isEmptyChangeSet;
- (NSDictionary *)propertyChangeFilteredByProperties:(NSDictionary *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;

@end
