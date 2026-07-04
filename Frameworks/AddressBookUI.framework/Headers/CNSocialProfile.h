/* Runtime dump - CNSocialProfile
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNSocialProfile : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary * _profileDictionary;
}

@property (readonly, copy) NSString * urlString;
@property (readonly, copy) NSString * username;
@property (readonly, copy) NSString * userIdentifier;
@property (readonly, copy) NSString * service;
@property (readonly, copy) NSString * displayname;
@property (retain) NSMutableDictionary * profileDictionary;

+ (CNSocialProfile *)socialProfileWithUsername:(NSString *)arg0 service:(NSString *)arg1;
+ (CNSocialProfile *)socialProfileWithDictionary:(NSDictionary *)arg0;
+ (CNSocialProfile *)socialProfileWithUrlString:(NSString *)arg0 username:(NSString *)arg1 userIdentifier:(NSString *)arg2 service:(NSString *)arg3 displayname:(NSString *)arg4;
+ (CNSocialProfile *)socialProfile;
+ (CNSocialProfile *)socialProfileWithUrlString:(NSString *)arg0 username:(NSString *)arg1 service:(NSString *)arg2;

- (NSString *)urlString;
- (NSString *)displayname;
- (NSMutableDictionary *)profileDictionary;
- (void)setProfileDictionary:(NSMutableDictionary *)arg0;
- (NSString *)userIdentifier;
- (void)dealloc;
- (CNSocialProfile *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (CNSocialProfile *)initWithDictionary:(NSDictionary *)arg0;
- (CNSocialProfile *)copyWithZone:(struct _NSZone *)arg0;
- (CNSocialProfile *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSString *)service;
- (NSString *)username;

@end
