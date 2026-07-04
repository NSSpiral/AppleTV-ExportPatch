/* Runtime dump - EDKeyedCollection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDKeyedCollection : EDCollection
{
    OITSUPointerKeyDictionary * mMap;
}

- (void)dealloc;
- (unsigned int)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (void)replaceObjectAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)insertObject:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (EDKeyedCollection *)copyWithZone:(struct _NSZone *)arg0;
- (void)removeObjectAtIndex:(unsigned int)arg0;
- (NSString *)objectWithKey:(int)arg0;
- (void)insertIntoMap:(NSObject *)arg0;
- (void)removeFromMap:(NSObject *)arg0;
- (BOOL)isObjectInMap:(NSObject *)arg0;
- (BOOL)isOverwritingKeyOK;

@end
