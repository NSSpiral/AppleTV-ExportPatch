/* Runtime dump - ML3SortMapFaultingEntryArray
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3SortMapFaultingEntryArray : NSMutableArray
{
    ML3DatabaseConnection * _connection;
    NSMutableDictionary * _dirtyInserts;
}

- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeLastObject;
- (void)replaceObjectAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)insertObject:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg0;
- (void).cxx_destruct;
- (ML3SortMapFaultingEntryArray *)initWithConnection:(ML3DatabaseConnection *)arg0;
- (void)enumerateDirtyObjectsUsingBlock:(id /* block */)arg0;

@end
