/* Runtime dump - TimingCollection
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

@interface TimingCollection : NSObject
{
    NSMutableDictionary * timings;
    NSObject<OS_dispatch_queue> * queue;
}

- (void)dealloc;
- (TimingCollection *)init;
- (NSString *)description;
- (void)startTimingForKey:(NSString *)arg0;
- (void)stopTimingForKey:(NSString *)arg0;
- (char)hasKey:(char)arg0;
- (float)timingForKey:(NSString *)arg0;
- (float)totalTimeForKey:(NSString *)arg0;
- (void)removeTimingForKey:(NSString *)arg0;
- (void)resetTotalTimeForKey:(NSString *)arg0;

@end
