/* Runtime dump - ACManagedDefaults
 * Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACManagedDefaults : NSObject

+ (ACManagedDefaults *)sharedInstance;

- (id)_readManagedDefaults;
- (void)_writeManagedDefaults:(id)arg0;
- (void)setValue:(NSObject *)arg0 forManagedDefault:(id)arg1;
- (id)valueForManagedDefault:(id)arg0;

@end
