/* Runtime dump - NSRunLoop
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSRunLoop : NSObject
{
    id _rl;
    id _dperf;
    id _perft;
    id _info;
    id _ports;
    id _reserved;
}

+ (NSObject *)_mapkit_networkIORunLoop;
+ (void)set_mapkit_networkIORunLoop:(NSObject *)arg0;
+ (NSRunLoop *)_new:(id)arg0;
+ (NSRunLoop *)currentRunLoop;
+ (NSObject *)mainRunLoop;

- (void)cancelPerformSelector:(SEL)arg0 target:(NSObject *)arg1 argument:(void *)arg2;
- (void)performSelector:(SEL)arg0 target:(NSObject *)arg1 argument:(void *)arg2 order:(unsigned int)arg3 modes:(NSArray *)arg4;
- (void)cancelPerformSelectorsWithTarget:(NSObject *)arg0;
- (void)_enumerateInfoPairsWithBlock:(id /* block */)arg0;
- (void)_portInvalidated:(id)arg0;
- (char)_containsPort:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)_addPort:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)_removePort:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (char)runMode:(id)arg0 beforeDate:(NSDate *)arg1;
- (char)containsPort:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (id)portsForMode:(id)arg0;
- (void)removeTimer:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (id)timersForMode:(id)arg0;
- (char)containsTimer:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (NSArray *)allModes;
- (void)_invalidateTimers;
- (id)limitDateForMode:(id)arg0;
- (void)_wakeup;
- (void)acceptInputForMode:(id)arg0 beforeDate:(NSDate *)arg1;
- (char)runMode:(id)arg0 untilDate:(NSDate *)arg1;
- (char)runBeforeDate:(NSDate *)arg0;
- (void)runUntilDate:(NSDate *)arg0;
- (void)dealloc;
- (NSRunLoop *)init;
- (NSString *)description;
- (void)addTimer:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (NSRunLoop *)copyWithZone:(struct _NSZone *)arg0;
- (UIScreenMode *)currentMode;
- (void)run;
- (struct __CFRunLoop *)getCFRunLoop;
- (void)addPort:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)removePort:(NSObject *)arg0 forMode:(struct __CFString *)arg1;

@end
