/* Runtime dump - GKLocalPlayerInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLocalPlayerInternal : GKFriendPlayerInternal
{
    NSString * _accountName;
    NSArray * _emailAddresses;
    NSString * _facebookUserID;
    NSNumber * _iCloudUserID;
    unsigned short _numberOfRequests;
    unsigned short _numberOfTurns;
    unsigned short _numberOfChallenges;
}

+ (NSArray *)secureCodedPropertyKeys;

- (void)dealloc;
- (void)setAccountName:(NSString *)arg0;
- (NSString *)accountName;
- (char)isLocalPlayer;
- (char)isUnderage;
- (unsigned short)numberOfRequests;
- (unsigned short)numberOfChallenges;
- (unsigned short)numberOfTurns;
- (int)defaultFamiliarity;
- (char)isFriend;
- (NSString *)facebookUserID;
- (void)setFacebookUserID:(NSString *)arg0;
- (NSNumber *)iCloudUserID;
- (void)setICloudUserID:(NSNumber *)arg0;
- (char)isPurpleBuddyAccount;
- (void)setPurpleBuddyAccount:(char)arg0;
- (void)setUnderage:(char)arg0;
- (char)isFindable;
- (void)setFindable:(char)arg0;
- (char)isPhotoPending;
- (void)setPhotoPending:(char)arg0;
- (void)setNumberOfRequests:(unsigned short)arg0;
- (void)setNumberOfTurns:(unsigned short)arg0;
- (void)setNumberOfChallenges:(unsigned short)arg0;
- (NSArray *)emailAddresses;
- (void)setEmailAddresses:(NSArray *)arg0;

@end
