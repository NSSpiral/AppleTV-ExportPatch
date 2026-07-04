/* Runtime dump - GKABMultiValue
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKABMultiValue : GKABObject

@property (readonly) void * ABMultiValue;

- (int)count;
- (GKABMultiValue *)mutableCopy;
- (NSArray *)allValues;
- (void *)ABMultiValue;
- (void)enumerateValuesUsingBlock:(id /* block */)arg0;
- (NSObject *)valueAtIndex:(int)arg0;

@end
