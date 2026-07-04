/* Runtime dump - TSURetainedPointerSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSURetainedPointerSet : TSUPointerSet

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (NSArray *)allObjects;
- (TSURetainedPointerSet *)initWithObjects:(id *)arg0 count:(unsigned int)arg1;

@end
