/* Runtime dump - GKDigestVerification
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKDigestVerification : NSObject

+ (GKDigestVerification *)computeVerificationHashForDigest:(id)arg0;
+ (char)digest:(MBDigest *)arg0 matchesHash:(id)arg1;
+ (GKDigestVerification *)digestForSubmitScore:(id)arg0 forBundleID:(NSObject *)arg1 shouldScreen:(char)arg2 eligibleChallenges:(id)arg3;
+ (GKDigestVerification *)digestForSubmitAchievement:(id)arg0 forBundleID:(NSObject *)arg1 shouldScreen:(char)arg2 eligibleChallenges:(id)arg3;

@end
