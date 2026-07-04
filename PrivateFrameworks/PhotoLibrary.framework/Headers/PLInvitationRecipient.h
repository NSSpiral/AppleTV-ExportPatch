/* Runtime dump - PLInvitationRecipient
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLInvitationRecipient : NSObject
{
    MFComposeRecipient * _mfRecipient;
    NSString * _firstName;
    NSString * _lastName;
    NSMutableArray * _allEmails;
    NSMutableArray * _allPhones;
    NSString * _selectedPhoneString;
    NSString * _selectedEmailString;
    NSString * _invalidAddressString;
}

@property (readonly, nonatomic) NSString * firstName;
@property (readonly, nonatomic) NSString * lastName;
@property (readonly, nonatomic) NSArray * allEmails;
@property (readonly, nonatomic) NSArray * allPhones;
@property (readonly, nonatomic) NSString * selectedPhoneString;
@property (readonly, nonatomic) NSString * selectedEmailString;
@property (readonly, nonatomic) NSString * invalidAddressString;

+ (NSString *)validPhoneNumberFromString:(NSString *)arg0;
+ (PLInvitationRecipient *)validEmailAddressFromComposeRecipient:(id)arg0;

- (void)dealloc;
- (NSString *)description;
- (NSString *)displayName;
- (NSString *)firstName;
- (NSString *)lastName;
- (PLInvitationRecipient *)initWithRecipient:(_MFPlaceholderComposeRecipient *)arg0;
- (NSString *)selectedPhoneString;
- (NSString *)selectedEmailString;
- (NSString *)invalidAddressString;
- (NSArray *)allEmails;
- (NSArray *)allPhones;

@end
