/* Runtime dump - GKABAddressBook
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKABAddressBook : GKABObject

+ (void *)addressBook;

- (void)save;
- (void *)ABAddressBook;
- (NSObject *)personWithUniqueID:(NSObject *)arg0;
- (void)enumeratePersonsUsingBlock:(id /* block */)arg0;
- (void)findPeopleWithEmailAddresses:(id)arg0 onQueue:(/* block */ id)arg1 complete:(char)arg2;

@end
