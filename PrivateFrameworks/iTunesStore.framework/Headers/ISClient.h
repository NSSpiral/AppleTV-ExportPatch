/* Runtime dump - ISClient
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISClient : NSObject
{
    NSString * _appleClientApplication;
    NSString * _appleClientVersions;
    NSString * _identifier;
    NSLock * _lock;
    NSString * _partnerHeader;
    NSString * _userAgent;
}

@property (copy) NSString * appleClientApplication;
@property (copy) NSString * userAgent;
@property (readonly) NSString * appleClientVersions;
@property (copy) NSString * identifier;
@property (copy) NSString * partnerHeader;

+ (ISClient *)currentClient;

- (void)dealloc;
- (ISClient *)init;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (void)setUserAgent:(NSString *)arg0;
- (NSString *)userAgent;
- (NSString *)partnerHeader;
- (NSString *)appleClientApplication;
- (NSString *)appleClientVersions;
- (void)setPartnerHeader:(NSString *)arg0;
- (void)_softwareMapInvalidatedNotification:(NSNotification *)arg0;
- (NSString *)_appleClientVersions;
- (void)setAppleClientApplication:(NSString *)arg0;
- (NSObject *)localStoreFrontID;

@end
