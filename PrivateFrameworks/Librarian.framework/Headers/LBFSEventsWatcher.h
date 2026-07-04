/* Runtime dump - LBFSEventsWatcher
 * Image: /System/Library/PrivateFrameworks/Librarian.framework/Librarian
 */

@interface LBFSEventsWatcher : NSObject
{
    struct __FSEventStream * _streamRef;
    char _started;
    NSURL * _url;
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSOperationQueue * _messageQueue;
    int _disableCount;
    NSMutableDictionary * _inodeMap;
    id _updateHandler;
}

@property (copy, nonatomic) id updateHandler;
@property (readonly) NSURL * url;

- (void)disableUpdates;
- (void)enableUpdates;
- (void)setUpdateHandler:(id /* block */)arg0;
- (void)dealloc;
- (NSURL *)url;
- (void)stop;
- (void)start;
- (id /* block */)updateHandler;
- (void)sendMessage:(NSString *)arg0;
- (LBFSEventsWatcher *)initWithDirectoryURL:(NSURL *)arg0;
- (void)scanDirectory:(id)arg0 isGathering:(char)arg1;
- (NSURL *)messageForURL:(NSURL *)arg0 inode:(long long)arg1 exists:(char)arg2 flags:(unsigned long)arg3;
- (void)processEventForPath:(NSString *)arg0 flags:(unsigned long)arg1;

@end
