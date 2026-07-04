/* Runtime dump - MPServerObjectProxy
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPServerObjectProxy : NSObject
{
    id _didPrepareForRemoteSelectorInvocation;
    id _lastPrepareForRemoteSelectorInvocationTimedOut;
    double _lastPrepareAttemptTime;
}

+ (struct SCNVector3)_center;

- (char)prepareForRemoteSelectorInvocation;
- (void)didPrepareForRemoteSelectorInvocation;
- (void)serverConnectionDied;
- (void)_messagingCenterDied:(id)arg0;
- (char)_performRemoteSelector:(SEL)arg0 userInfo:(NSDictionary *)arg1 timeout:(double)arg2;
- (id)_performRemoteSelectorAndReceiveReply:(SEL)arg0 userInfo:(NSDictionary *)arg1 timeout:(double)arg2;
- (void)_serverConnectionDied;
- (char)prepareForRemoteSelectorInvocationWithTimeout:(double *)arg0;
- (void)dealloc;
- (MPServerObjectProxy *)init;
- (void)forwardInvocation:(NSInvocation *)arg0;

@end
