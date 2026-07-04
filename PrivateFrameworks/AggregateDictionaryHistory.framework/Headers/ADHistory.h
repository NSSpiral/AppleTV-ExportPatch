/* Runtime dump - ADHistory
 * Image: /System/Library/PrivateFrameworks/AggregateDictionaryHistory.framework/AggregateDictionaryHistory
 */

@interface ADHistory : NSObject
{
    struct Database * _database;
    NSString * _path;
}

@property (readonly, nonatomic) NSString * path;

- (void)dealloc;
- (NSString *)path;
- (ADHistory *)initWithPath:(NSString *)arg0;
- (ADHistory *)initWithDefaultPath;
- (char)scalarsForKeyPrefix:(NSString *)arg0 minDaysSince1970:(int)arg1 maxDaysSince1970:(int)arg2 rowHandler:(id /* block */)arg3;
- (char)distributionsForKeyPrefix:(NSString *)arg0 minDaysSince1970:(int)arg1 maxDaysSince1970:(int)arg2 rowHandler:(id /* block */)arg3;

@end
