/* Runtime dump - TSUFlushingManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUFlushingManager : NSObject
{
    TSURetainedPointerKeyDictionary * _objects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *> > * _sortedObjects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *> > * _sortedNewObjects;
    TSUPointerKeyDictionary * _inactiveObjects;
    unsigned long _clock;
    char _alwaysFlushing;
    char _stopFlushing;
    char _stopFlushingWhenQueueEmpty;
    char _isFlushing;
    <TSUFlushable> * _flushingObject;
    NSCondition * _cond;
    NSCondition * _isFlushingCond;
    TSUMemoryWatcher * _memoryWatcher;
    NSThread * _bgThread;
    unsigned int _backgroundTransitionTaskId;
    unsigned int _activeBgThreadTask;
}

+ (TSUFlushingManager *)allocWithZone:(struct _NSZone *)arg0;
+ (TSUFlushingManager *)_singletonAlloc;
+ (TSUFlushingManager *)sharedManager;

- (TSUFlushingManager *)retain;
- (void)release;
- (void)dealloc;
- (void)removeObject:(struct objc_method *)arg0;
- (TSUFlushingManager *)init;
- (void)addObject:(struct objc_method *)arg0;
- (TSUFlushingManager *)autorelease;
- (unsigned int)retainCount;
- (void)didReceiveMemoryWarning;
- (TSUFlushingManager *)copyWithZone:(struct _NSZone *)arg0;
- (void)willEnterForeground;
- (void)_startFlushingObjects;
- (void)_stopFlushingObjects;
- (void)advanceClock;
- (void)_didUseObject:(NSObject *)arg0;
- (struct TSUFlushableObjectInfo *)eraseInfoForObject:(NSObject *)arg0;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo *)arg0;
- (void)_flushAllEligible;
- (void)_bgTaskStarted;
- (void)_backgroundThread:(NSObject *)arg0;
- (void)_bgThreadActive;
- (void)_bgThreadInactive;
- (void)_bgTaskFinished;
- (char)isNewObject:(struct TSUFlushableObjectInfo *)arg0;
- (void)transferNewObjects;
- (void)protectObject:(NSObject *)arg0;
- (void)stopProtectingObject:(NSObject *)arg0;
- (void)doneWithObject:(NSObject *)arg0;
- (void)unsafeToFlush:(id)arg0;
- (void)safeToFlush:(id)arg0 wasAccessed:(char)arg1;
- (void)memoryLevelIncreased:(int)arg0 was:(int)arg1;
- (void)memoryLevelDecreased:(int)arg0 was:(int)arg1;
- (char)controlsActiveObject:(NSObject *)arg0;
- (char)controlsInactiveObject:(NSObject *)arg0;
- (void)didEnterBackground;

@end
