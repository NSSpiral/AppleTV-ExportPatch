/* Runtime dump - VCServerBag
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCServerBag : NSObject
{
    struct _opaque_pthread_cond_t isLoadedCondition;
    struct _opaque_pthread_mutex_t isLoadedMutex;
    char isLoaded;
    id observer;
}

+ (VCServerBag *)sharedInstance;
+ (void)pullStoreBagKeys;
+ (char)verifyRequiredKeys:(id *)arg0;
+ (char)verifyRequiredVoiceChatKeys:(id *)arg0;
+ (char)verifyRequiredKeys:(NSArray *)arg0 withError:(id *)arg1;
+ (void)checkKeysAgainstHardcodedPrefs:(id)arg0;
+ (void)retrieveBag;

- (VCServerBag *)init;
- (void)waitForBagLoad;

@end
