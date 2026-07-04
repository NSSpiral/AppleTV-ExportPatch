/* Runtime dump - NSFilePresenterProxy
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilePresenterProxy : NSFileReactorProxy
{
    NSObject<OS_dispatch_queue> * _queue;
    NSFileWatcher * _watcher;
    unsigned int _writingRelinquishmentCount;
    id _currentWriterPurposeID;
    NSMutableArray * _previousWriterPurposeIDs;
    char _didObserveMovingByWriter;
    char _didObserveVersionChangingByWriter;
    char _disconnected;
    char _inSubarbiter;
}

@property (readonly) char disconnected;
@property char inSubarbiter;

+ (NSURL *)urlWithItemURL:(NSURL *)arg0 subitemPath:(NSString *)arg1;

- (void)observeMoveOfSubitemAtURL:(NSURL *)arg0 toURL:(NSURL *)arg1 byWriterWithPurposeID:(NSObject *)arg2;
- (void)setItemLocation:(NSFileAccessNode *)arg0;
- (void)observeMoveByWriterWithPurposeID:(NSObject *)arg0;
- (void)observeDisconnectionByWriterWithPurposeID:(NSObject *)arg0;
- (void)observeReconnectionByWriterWithPurposeID:(NSObject *)arg0;
- (void)observeUbiquityChangeAtSubitemPath:(NSString *)arg0 withPhysicalURL:(NSURL *)arg1;
- (void)observeDisappearanceAtSubitemPath:(NSString *)arg0;
- (void)observeChangeAtSubitemPath:(NSString *)arg0;
- (void)observeVersionChangeOfKind:(id)arg0 withClientID:(NSObject *)arg1 name:(NSString *)arg2 subitemPath:(NSString *)arg3;
- (void)setInSubarbiter:(char)arg0;
- (char)inSubarbiter;
- (void)startWatchingWithQueue:(NSObject<OS_dispatch_queue> *)arg0 lastEventID:(NSObject *)arg1 unannouncedMoveHandler:(id /* block */)arg2;
- (void)forwardObservationMessageWithKind:(id)arg0 parameters:(NSDictionary *)arg1;
- (char)disconnected;
- (void)relinquishToReadingClaimWithID:(int)arg0 options:(unsigned int)arg1 purposeID:(NSObject *)arg2 resultHandler:(id /* block */)arg3;
- (void)relinquishToWritingClaimWithID:(int)arg0 options:(unsigned int)arg1 purposeID:(NSObject *)arg2 subitemPath:(NSString *)arg3 resultHandler:(id /* block */)arg4;
- (void)forwardUsingMessageSender:(NSObject *)arg0;
- (void)forwardRelinquishmentMessageWithKind:(id)arg0 parameters:(NSDictionary *)arg1 resultHandler:(id /* block */)arg2;
- (void)saveChangesWithCompletionHandler:(id /* block */)arg0;
- (void)accommodateDeletionWithSubitemPath:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)disconnect;

@end
