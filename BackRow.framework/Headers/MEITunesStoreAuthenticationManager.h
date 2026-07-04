/* Runtime dump - MEITunesStoreAuthenticationManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRDefaultAuthenticationManager.h>

@class MEITunesStoreAccount;
@interface MEITunesStoreAuthenticationManager : BRDefaultAuthenticationManager
{
    NSNumber * _lastActiveAccountUniqueIdentifier;
    MEITunesStoreAccount * _currentAccount;
}

- (void)_setCurrentAccount:(NSObject *)arg0;
- (NSNumber *)_currentAccount;
- (void)_accountRemoved:(id)arg0;
- (NSNumber *)_basicAccount;
- (MEITunesStoreAuthenticationManager *)init;
- (void).cxx_destruct;

@end
