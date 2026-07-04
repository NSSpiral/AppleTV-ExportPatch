/* Runtime dump - FBUIApplicationResignActiveManager
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUIApplicationResignActiveManager : NSObject <FBSceneManagerObserver, FBProcessManagerObserver>
{
    NSCountedSet * _activeReasons;
    NSHashTable * _activeAssertions;
    NSMutableSet * _eligibleProcesses;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (FBUIApplicationResignActiveManager *)sharedInstance;

- (void)dealloc;
- (FBUIApplicationResignActiveManager *)init;
- (NSString *)description;
- (void)processManager:(FBProcessManager *)arg0 didAddProcess:(NSObject *)arg1;
- (void)processManager:(FBProcessManager *)arg0 didRemoveProcess:(NSObject *)arg1;
- (void)sceneManager:(FBSceneManager *)arg0 didCreateScene:(NSObject *)arg1 withClient:(NSObject *)arg2;
- (void)sceneManager:(FBSceneManager *)arg0 willUpdateScene:(NSObject *)arg1 withSettings:(NSDictionary *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (void)sceneManager:(FBSceneManager *)arg0 willCommitUpdateForScene:(NSObject *)arg1 transactionID:(unsigned int)arg2;
- (void)sceneManager:(FBSceneManager *)arg0 didCommitUpdateForScene:(NSObject *)arg1 transactionID:(unsigned int)arg2;
- (void)sceneManager:(FBSceneManager *)arg0 willDestroyScene:(NSObject *)arg1;
- (void)sceneManager:(FBSceneManager *)arg0 didDestroyScene:(NSObject *)arg1;
- (void)addAssertion:(MPMediaLibraryConnectionAssertion *)arg0;
- (void)removeAssertion:(MPMediaLibraryConnectionAssertion *)arg0;
- (char)_isEligibleScene:(NSObject *)arg0 forSettings:(NSDictionary *)arg1;
- (void)_trackProcess:(NSObject *)arg0;
- (char)_isEligibleDisplay:(NSObject *)arg0;
- (void)_addDeactivationReason:(int)arg0;
- (void)_removeDeactivationReason:(int)arg0;
- (void)_sendResignActiveForReason:(int)arg0;
- (void)_sendResumeActiveForReason:(int)arg0;
- (char)_isEligibleProcess:(NSObject *)arg0;
- (char)_areEligibleSceneSettings:(NSDictionary *)arg0 forProcess:(NSObject *)arg1;
- (void)_sendResignActiveForReason:(int)arg0 toProcess:(NSObject *)arg1;
- (void)_sendResumeActiveForReason:(int)arg0 toProcess:(NSObject *)arg1;
- (char)_isEligibleScene:(NSObject *)arg0;
- (void)_sendResignActiveToProcess:(NSObject *)arg0;
- (void)_sendResumeActiveToProcess:(NSObject *)arg0;
- (void)_untrackProcess:(NSObject *)arg0;
- (void)_noteSceneWillUpdate:(NSDate *)arg0 oldSettings:(NSDictionary *)arg1 newSettings:(FBSSceneSettings *)arg2;

@end
