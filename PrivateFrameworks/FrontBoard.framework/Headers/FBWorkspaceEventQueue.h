/* Runtime dump - FBWorkspaceEventQueue
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspaceEventQueue : BSEventQueue

+ (FBWorkspaceEventQueue *)sharedInstance;

- (void)executeOrPrependEvents:(id)arg0;
- (void)executeOrAppendEvent:(NSObject *)arg0;
- (void)executeOrPrependEvent:(NSObject *)arg0;
- (char)_shouldProcessEvent:(NSObject *)arg0 enqueuedDuringExecutionOfEvent:(NSObject *)arg1;
- (void)_noteWillPendEvents:(id)arg0 atPosition:(int)arg1;
- (void)_noteWillCancelEventsWithName:(NSString *)arg0 count:(unsigned int)arg1;
- (void)_noteWillExecuteEvent:(NSObject *)arg0;
- (void)_noteQueueDidLock;
- (void)_noteQueueDidUnlock;

@end
