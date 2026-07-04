/* Runtime dump - MFMailAccountProxy
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailAccountProxy : NSObject
{
    NSDictionary * _properties;
}

@property (readonly, nonatomic) NSString * fullUserName;
@property (readonly, nonatomic) NSString * username;
@property (readonly, nonatomic) NSString * firstEmailAddress;
@property (readonly, nonatomic) NSArray * emailAddresses;
@property (readonly, nonatomic) NSArray * fromEmailAddresses;
@property (readonly, nonatomic) NSArray * fromEmailAddressesIncludingDisabled;
@property (readonly, nonatomic) NSString * uniqueID;
@property (readonly, nonatomic) char isDefaultDeliveryAccount;
@property (readonly, nonatomic) char supportsSoftBankCodePoints;
@property (readonly, nonatomic) char supportsThreadNotifications;
@property (readonly, nonatomic) char restrictsRepliesAndForwards;
@property (readonly, nonatomic) id mailAccount;

- (char)_isActive;
- (YahooAccount *)mailAccount;
- (char)restrictsRepliesAndForwards;
- (NSDictionary *)_initWithProperties:(NSDictionary *)arg0;
- (char)isDefaultDeliveryAccount;
- (id)_emailAddressesAndAliases;
- (char)_isRestricted;
- (void)dealloc;
- (NSString *)fullUserName;
- (NSArray *)emailAddresses;
- (NSArray *)fromEmailAddressesIncludingDisabled;
- (NSString *)firstEmailAddress;
- (NSArray *)fromEmailAddresses;
- (char)supportsThreadNotifications;
- (char)supportsSoftBankCodePoints;
- (NSString *)username;
- (NSString *)uniqueID;

@end
