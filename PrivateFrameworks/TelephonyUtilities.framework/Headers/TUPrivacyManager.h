/* Runtime dump - TUPrivacyManager
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUPrivacyManager : NSObject

+ (TUPrivacyManager *)sharedPrivacyManager;

- (void)dealloc;
- (TUPrivacyManager *)init;
- (void)addRule:(NSObject *)arg0;
- (void)_handleBlockListChanged:(NSNotification *)arg0;
- (void)setBlockIncomingCommunication:(char)arg0 forPhoneNumber:(NSNumber *)arg1;
- (void)setBlockIncomingCommunication:(char)arg0 forEmailAddress:(NSString *)arg1;
- (char)isIncomingCommunicationBlockedForPhoneNumber:(NSNumber *)arg0;
- (char)isIncomingCommunicationBlockedForEmailAddress:(NSString *)arg0;
- (NSArray *)allBlacklistRules;
- (void)removeRule:(NSObject *)arg0;

@end
