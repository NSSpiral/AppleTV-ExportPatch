/* Runtime dump - PLEmailAddressManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLEmailAddressManager : NSObject
{
    NSMutableDictionary * _keysForEmails;
    NSMutableDictionary * _emailsForKey;
    int _maxKey;
    NSString * _plistPath;
}

+ (PLEmailAddressManager *)sharedManager;

- (void)dealloc;
- (void)_loadDictionariesIfNeeded;
- (NSString *)emailAddressForKey:(NSString *)arg0;
- (NSString *)keyForEmailAddress:(NSString *)arg0;

@end
