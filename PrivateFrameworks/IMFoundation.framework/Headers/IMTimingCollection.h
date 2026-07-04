/* Runtime dump - IMTimingCollection
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMTimingCollection : NSObject
{
    NSMutableDictionary * _timings;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void)dealloc;
- (IMTimingCollection *)init;
- (NSString *)description;
- (void)startTimingForKey:(NSString *)arg0;
- (void)stopTimingForKey:(NSString *)arg0;
- (char)hasKey:(char)arg0;
- (double)totalTimeForKey:(NSString *)arg0;
- (void)removeTimingForKey:(NSString *)arg0;

@end
