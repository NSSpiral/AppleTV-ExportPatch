/* Runtime dump - ABSiriContactContextProvider
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABSiriContactContextProvider : NSObject <AFContextProvider>
{
    CNContact * _contact;
}

- (ABSiriContactContextProvider *)initWithContact:(CNContact *)arg0;
- (void)_removeContextProviderOnMainThread;
- (char)allowContextProvider:(NSObject *)arg0;
- (NSString *)getCurrentContext;
- (void)dealloc;
- (void)setEnabled:(char)arg0;
- (FBWindowContextManager *)contextManager;

@end
