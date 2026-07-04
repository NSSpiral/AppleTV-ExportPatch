/* Runtime dump - MFAddressBookManager
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAddressBookManager : NSObject
{
    void * _addressBook;
    int _lock;
    struct __CFDictionary * _clients;
}

+ (char)isAuthorizedToUseAddressBook;
+ (MFAddressBookManager *)sharedManager;

- (void)_applicationResumed:(id)arg0;
- (void)_handleAddressBookChangeNotification;
- (id)_clientWeakReferences;
- (void)_handleAddressBookPrefsChangeNotification;
- (void)dealloc;
- (MFAddressBookManager *)init;
- (void)addClient:(NSObject *)arg0;
- (void)removeClient:(NSObject *)arg0;
- (void *)addressBook;

@end
