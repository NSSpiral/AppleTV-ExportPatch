/* Runtime dump - ML3SortMapFaultingNameOrderDictionary
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3SortMapFaultingNameOrderDictionary : NSMutableDictionary
{
    ML3DatabaseConnection * _connection;
    NSMutableDictionary * _dirtyInserts;
}

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (unsigned int)count;
- (void)removeObjectForKey:(NSString *)arg0;
- (ML3SortMapFaultingNameOrderDictionary *)initWithObjects:(id *)arg0 forKeys:(NSArray *)arg1 count:(id *)arg2;
- (NSEnumerator *)keyEnumerator;
- (void).cxx_destruct;
- (ML3SortMapFaultingNameOrderDictionary *)initWithConnection:(ML3DatabaseConnection *)arg0;

@end
