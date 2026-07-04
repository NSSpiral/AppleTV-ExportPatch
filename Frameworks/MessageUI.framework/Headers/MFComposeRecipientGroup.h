/* Runtime dump - MFComposeRecipientGroup
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeRecipientGroup : MFComposeRecipient
{
    NSArray * _children;
    NSString * _displayString;
}

- (NSString *)placeholderName;
- (char)isRemovableFromSearchResults;
- (NSString *)commentedAddress;
- (NSString *)unlocalizedLabel;
- (NSArray *)sortedChildren;
- (id)childrenWithCompleteMatches;
- (char)wasCompleteMatch;
- (NSArray *)completelyMatchedAttributedStrings;
- (void)_populateSortedChildren;
- (MFComposeRecipientGroup *)initWithChildren:(NSArray *)arg0 displayString:(NSString *)arg1;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)displayString;
- (NSString *)label;
- (char)isGroup;
- (void *)record;
- (int)recordID;
- (NSString *)compositeName;
- (NSURL *)address;
- (int)property;
- (NSArray *)children;

@end
