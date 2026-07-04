/* Runtime dump - TSTIntegerKeyDict
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTIntegerKeyDict : NSObject
{
    struct /* ? */ * mMap;
}

- (void)applyFunction:(/* block */ id *)arg0 withState:(void *)arg1;
- (void)applyFunction:(/* block */ id *)arg0 withState:(void *)arg1 andState:(void *)arg2;
- (void)transformWithFunction:(/* block */ id *)arg0 withState:(void *)arg1;
- (NSString *)objectForKey:(unsigned long)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(unsigned long)arg1;
- (void)dealloc;
- (int)count;
- (TSTIntegerKeyDict *)init;
- (void)removeAllObjects;
- (void)makeObjectsPerformSelector:(SEL)arg0;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg0;
- (void)removeObjectForKey:(unsigned long)arg0;
- (NSArray *)allValues;
- (void)removeFirstObject;

@end
