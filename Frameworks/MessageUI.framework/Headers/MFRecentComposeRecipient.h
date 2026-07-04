/* Runtime dump - MFRecentComposeRecipient
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFRecentComposeRecipient : MFComposeRecipient
{
    CRRecentContact * _recent;
}

- (NSString *)placeholderName;
- (char)isRemovableFromSearchResults;
- (NSString *)preferredSendingAddress;
- (CRRecentContact *)recentContact;
- (MFRecentComposeRecipient *)initWithRecentContact:(CRRecentContact *)arg0;
- (void)dealloc;
- (MFRecentComposeRecipient *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (char)isGroup;

@end
