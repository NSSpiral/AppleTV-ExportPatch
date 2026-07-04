/* Runtime dump - CNMutableSocialProfile
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNMutableSocialProfile : CNSocialProfile

@property (copy) NSString * urlString;
@property (copy) NSString * username;
@property (copy) NSString * userIdentifier;
@property (copy) NSString * service;
@property (copy) NSString * displayname;

- (void)setUrlString:(NSString *)arg0;
- (void)setDisplayname:(NSString *)arg0;
- (void)setUserIdentifier:(NSString *)arg0;
- (void)setUsername:(NSString *)arg0;
- (void)setService:(NSString *)arg0;

@end
