/* Runtime dump - SCROBrailleDisplayManagedQueue
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleDisplayManagedQueue : NSObject
{
    SCRCIndexMap * _stateQueueMap;
    struct __CFDictionary * _queueStateDict;
    struct __CFDictionary * _displayQueueDict;
    SCRCIndexMap * _tokenDisplayMap;
    unsigned int _maxActiveQueueSize;
}

- (void)removeDisplay:(NSObject *)arg0;
- (void)dealloc;
- (SCROBrailleDisplayManagedQueue *)init;
- (NSObject *)_queueForState:(int)arg0 createQueue:(char)arg1;
- (void)_fillActiveBrailleDisplayQueue;
- (id)disconnectedDisplays;
- (void)addDisplay:(NSObject *)arg0 withState:(int)arg1;
- (void)setState:(int)arg0 forDisplay:(char)arg1;
- (int)stateForDisplay:(NSObject *)arg0;
- (NSString *)displayForToken:(long)arg0;
- (unsigned int)displayCountIncludingDisconnectedDisplays:(char)arg0;
- (NSObject *)primaryDisplay;
- (void)setPrimaryDisplay:(NSObject *)arg0;
- (unsigned int)activeQueueMaximumSize;
- (void)setActiveQueueMaximumSize:(unsigned int)arg0;
- (id)activeDisplays;
- (id)activePendingDisplays;
- (id)sleepingDisplays;
- (id)loadingDisplays;

@end
