/* Runtime dump - NSFileWatcher
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileWatcher : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _url;
    id _observer;
    char _isWatching;
    NSObject<OS_dispatch_source> * _eventSource;
    unsigned long long _lastObservedEventID;
    struct __FSEventStream * _eventStream;
    char _eventsAreAboutDirectory;
    char _isUnsettled;
    NSFileWatcherObservations * _itemObservations;
    NSMutableDictionary * _subitemObservationsByEventPath;
    NSURL * _fileReferenceURL;
    NSString * _formerPath;
    NSURL * _formerURL;
}

- (void)setLastObservedEventID:(unsigned long long)arg0;
- (void)settle;
- (void)watchItem;
- (void)_coalesceSubitemObservations;
- (void)handleFSEventPath:(NSString *)arg0 flags:(unsigned long)arg1 id:(unsigned long long)arg2;
- (void)unsettle;
- (void)dealloc;
- (NSFileWatcher *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)stop;
- (void)setObserver:(NSObject *)arg0;
- (void)start;
- (void)setURL:(NSString *)arg0;

@end
