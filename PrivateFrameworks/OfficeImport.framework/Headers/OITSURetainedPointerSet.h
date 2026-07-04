/* Runtime dump - OITSURetainedPointerSet
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSURetainedPointerSet : OITSUPointerSet

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (NSArray *)allObjects;
- (OITSURetainedPointerSet *)initWithObjects:(id *)arg0 count:(unsigned int)arg1;

@end
