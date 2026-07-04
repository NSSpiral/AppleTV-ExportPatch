/* Runtime dump - AAUIFamilyMemberPhotoRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilyMemberPhotoRequest : AAFamilyRequest
{
    NSNumber * _familyMemberDSID;
    SSAccount * _iTunesAccount;
    NSString * _serverCacheTag;
}

@property (copy, nonatomic) NSNumber * familyMemberDSID;
@property (retain, nonatomic) SSAccount * iTunesAccount;
@property (copy, nonatomic) NSString * serverCacheTag;

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (SSAccount *)iTunesAccount;
- (NSString *)serverCacheTag;
- (void)setServerCacheTag:(NSString *)arg0;
- (void)setiTunesAccount:(SSAccount *)arg0;
- (void)setFamilyMemberDSID:(NSNumber *)arg0;
- (NSNumber *)familyMemberDSID;
- (NSURLRequest *)urlRequest;

@end
