/* Runtime dump - CTCallCenter
 * Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTCallCenter : NSObject
{
    void * _server;
    NSSet * _currentCalls;
    id _callEventHandler;
}

@property (retain) NSSet * currentCalls;
@property (copy, nonatomic) id callEventHandler;

- (char)setUpServerConnection;
- (void)cleanUpServerConnection;
- (void)handleNotificationFromConnection:(void *)arg0 ofType:(NSString *)arg1 withInfo:(NSDictionary *)arg2;
- (void)setCallEventHandler:(id /* block */)arg0;
- (char)calculateCallStateChanges:(id)arg0;
- (char)getCurrentCallSetFromServer:(NSObject *)arg0;
- (id /* block */)callEventHandler;
- (void)setCurrentCalls:(NSSet *)arg0;
- (void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(NSString *)arg0;
- (void)dealloc;
- (CTCallCenter *)init;
- (NSString *)description;
- (NSSet *)currentCalls;

@end
