/* Runtime dump - TNPageCoordinateDictionary
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNPageCoordinateDictionary : NSObject
{
    struct /* ? */ _pageCoordinateDictionary;
    struct _opaque_pthread_rwlock_t _rwlock;
}

- (void)setObject:(NSObject *)arg0 forPageCoordinate:(struct ?)arg1;
- (id)objectForPageCoordinate:(struct ?)arg0;
- (void)dealloc;
- (TNPageCoordinateDictionary *)init;
- (void)removeAllObjects;
- (NSArray *)allObjects;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
