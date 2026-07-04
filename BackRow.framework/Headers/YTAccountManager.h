/* Runtime dump - YTAccountManager
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface YTAccountManager : NSObject

+ (YTAccountManager *)currentAccount;
+ (void)removeAccountWithName:(NSString *)arg0;
+ (char)inappropriateAllowed;
+ (void)setInappropriateAllowed:(char)arg0;
+ (YTAccountManager *)currentAccountName;
+ (void)_resetInappropriateFlag:(id)arg0;
+ (char)loggedIn;
+ (char)currentAccountAllowsInappropriate;
+ (void)logOut;
+ (YTAccountManager *)allAccounts;

@end
