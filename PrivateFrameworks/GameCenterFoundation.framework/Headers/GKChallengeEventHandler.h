/* Runtime dump - GKChallengeEventHandler
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKChallengeEventHandler : NSObject
{
    <GKChallengeEventHandlerDelegate> * _delegateWeak;
    <GKChallengeEventHandlerUIDelegate> * _uiDelegate;
    GKChallengeInternal * _pendingReceivedChallenge;
    GKChallengeInternal * _pendingCompletedChallenge;
}

@property (nonatomic) <GKChallengeEventHandlerDelegate> * delegate;
@property (retain, nonatomic) GKChallengeInternal * pendingReceivedChallenge;
@property (retain, nonatomic) GKChallengeInternal * pendingCompletedChallenge;
@property (retain, nonatomic) <GKChallengeEventHandlerUIDelegate> * uiDelegate;

+ (GKChallengeEventHandler *)challengeEventHandler;

- (void)dealloc;
- (void)setDelegate:(<GKChallengeEventHandlerDelegate> *)arg0;
- (<GKChallengeEventHandlerDelegate> *)delegate;
- (void)receivedChallengeSelected:(GKChallengeInternal *)arg0;
- (void)completedChallengeSelected:(GKChallengeInternal *)arg0;
- (void)challengeReceived:(GKChallengeInternal *)arg0;
- (void)challengeCompleted:(GKChallengeInternal *)arg0;
- (void)setUiDelegate:(<GKChallengeEventHandlerUIDelegate> *)arg0;
- (void)setPendingReceivedChallenge:(GKChallengeInternal *)arg0;
- (void)setPendingCompletedChallenge:(GKChallengeInternal *)arg0;
- (void)showBannerForChallenge:(NSObject *)arg0 complete:(char)arg1;
- (<GKChallengeEventHandlerUIDelegate> *)uiDelegate;
- (GKChallengeInternal *)pendingReceivedChallenge;
- (GKChallengeInternal *)pendingCompletedChallenge;

@end
