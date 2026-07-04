/* Runtime dump - ADDataStore
 * Image: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary
 */

@interface ADDataStore : NSObject
{
    NSString * _path;
    struct Database * _database;
}

@property (readonly, nonatomic) NSString * path;

- (void)dealloc;
- (NSString *)path;
- (ADDataStore *)initWithPath:(NSString *)arg0;
- (ADDataStore *)initWithDefaultPath;
- (char)scalarsForKeyPrefix:(NSString *)arg0 minDaysSince1970:(int)arg1 maxDaysSince1970:(int)arg2 withConsumer:(NSObject *)arg3;
- (char)distributionsForKeyPrefix:(NSString *)arg0 minDaysSince1970:(int)arg1 maxDaysSince1970:(int)arg2 withConsumer:(NSObject *)arg3;
- (char)scalarsForKeyPrefix:(NSString *)arg0 minDaysSince1970:(int)arg1 maxDaysSince1970:(int)arg2 rowHandler:(id /* block */)arg3;
- (char)distributionsForKeyPrefix:(NSString *)arg0 minDaysSince1970:(int)arg1 maxDaysSince1970:(int)arg2 rowHandler:(id /* block */)arg3;

@end
