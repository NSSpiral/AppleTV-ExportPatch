/* Runtime dump - MFRecentComposeRecipientGroup
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFRecentComposeRecipientGroup : MFComposeRecipientGroup
{
    CRRecentContact * _recentContact;
}

@property (readonly, retain, nonatomic) CRRecentContact * recentContact;

- (NSString *)placeholderName;
- (NSString *)unlocalizedLabel;
- (CRRecentContact *)recentContact;
- (MFRecentComposeRecipientGroup *)initWithChildren:(NSArray *)arg0 displayString:(NSString *)arg1 recentContact:(CRRecentContact *)arg2;
- (void)dealloc;
- (NSString *)label;

@end
