/* Runtime dump - TSSMutablePropertySet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSMutablePropertySet : TSSPropertySet

- (void)intersectPropertySet:(NSSet *)arg0;
- (void)removeProperties:(NSDictionary *)arg0;
- (TSSMutablePropertySet *)initWithFirstProperty:(int)arg0 argumentList:(void *)arg1;
- (TSSMutablePropertySet *)initWithPropertySet:(NSSet *)arg0;
- (void)addProperties:(NSDictionary *)arg0;
- (TSSMutablePropertySet *)init;
- (TSSMutablePropertySet *)copyWithZone:(struct _NSZone *)arg0;
- (void)addProperty:(int)arg0;
- (void)removeProperty:(int)arg0;

@end
