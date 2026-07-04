/* Runtime dump - GKVoiceChatSessionListener
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKVoiceChatSessionListener : NSObject
{
    NSMutableArray * _conferenceList;
    GKSessionInternal * _gkSession;
    GKRWLock * _rwlock;
}

- (void)dealloc;
- (GKVoiceChatSessionListener *)initWithSession:(NSObject *)arg0;
- (void)session:(GKSession *)arg0 peer:(NSString *)arg1 didChangeState:(int)arg2;
- (void)receivedNewVoiceChatOOBMessage:(NSString *)arg0 fromPeerID:(NSObject *)arg1;
- (void)registerNewGKVoiceChatSession:(NSObject *)arg0;
- (void)removeSession:(NSObject *)arg0;
- (NSMutableDictionary *)currentSessions;

@end
