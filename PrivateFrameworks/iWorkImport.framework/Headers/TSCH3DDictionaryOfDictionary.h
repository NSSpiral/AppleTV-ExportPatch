/* Runtime dump - TSCH3DDictionaryOfDictionary
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DDictionaryOfDictionary : NSObject
{
    NSMutableDictionary * mDictionary;
}

- (void)setObject:(NSObject *)arg0 forFirstLevelKey:(NSString *)arg1 secondLevelKey:(NSString *)arg2;
- (NSString *)objectForFirstLevelKey:(NSString *)arg0 secondLevelKey:(NSString *)arg1;
- (void)removeObjectForFirstLevelKey:(NSString *)arg0 secondLevelKey:(NSString *)arg1;
- (void)addEntriesFromDictionaryOfDictionary:(NSDictionary *)arg0;
- (void)dealloc;
- (TSCH3DDictionaryOfDictionary *)init;
- (NSString *)description;

@end
