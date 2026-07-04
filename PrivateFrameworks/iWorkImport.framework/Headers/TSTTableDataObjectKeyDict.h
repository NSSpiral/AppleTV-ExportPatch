/* Runtime dump - TSTTableDataObjectKeyDict
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableDataObjectKeyDict : NSObject
{
    struct /* ? */ * mMap;
}

- (void)setKey:(unsigned int)arg0 forObject:(NSObject *)arg1;
- (void)removeKeyForObject:(NSObject *)arg0;
- (void)removeAllKeys;
- (unsigned int)keyForObject:(NSObject *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (TSTTableDataObjectKeyDict *)init;

@end
