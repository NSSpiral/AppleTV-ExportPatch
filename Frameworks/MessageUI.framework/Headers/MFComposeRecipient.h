/* Runtime dump - MFComposeRecipient
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeRecipient : NSObject <NSCopying, MFDraggableItem, NSCoding>
{
    void * _record;
    int _recordID;
    int _property;
    int _identifier;
    NSString * _address;
    NSString * _label;
    NSString * _countryCode;
    NSArray * _cachedCompleteMatches;
    NSArray * _cachedMatchedStrings;
    NSArray * _cachedSortedMembers;
    MFComposeRecipientOriginContext * _originContext;
}

@property (readonly, nonatomic) MFComposeRecipientOriginContext * originContext;
@property (readonly, nonatomic) char removableFromSearchResults;
@property (readonly, nonatomic) char showsAccessoryButton;
@property (retain, nonatomic) NSString * countryCode;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)recipientWithRecord:(void *)arg0 recordID:(int)arg1 property:(int)arg2 identifier:(int)arg3;
+ (NSObject *)mf_recipientWithGALResult:(NSObject *)arg0;
+ (NSObject *)recipientWithProperty:(int)arg0 address:(NSString *)arg1;
+ (NSObject *)recipientWithRecord:(void *)arg0 property:(int)arg1 identifier:(int)arg2;

- (MFComposeRecipient *)initWithRecord:(void *)arg0 recordID:(int)arg1 property:(int)arg2 identifier:(int)arg3 address:(NSString *)arg4;
- (NSString *)placeholderName;
- (NSString *)_unformattedAddress;
- (char)isRemovableFromSearchResults;
- (NSArray *)supportedDragTypes;
- (NSObject *)objectForDragType:(NSObject *)arg0;
- (void)setRecord:(void *)arg0 recordID:(int)arg1 identifier:(int)arg2;
- (NSString *)normalizedAddress;
- (NSString *)commentedAddress;
- (NSString *)unlocalizedLabel;
- (NSString *)shortName;
- (char)showsAccessoryButton;
- (NSArray *)sortedChildren;
- (id)childrenWithCompleteMatches;
- (void)setOriginContext:(MFComposeRecipientOriginContext *)arg0;
- (char)wasCompleteMatch;
- (NSArray *)completelyMatchedAttributedStrings;
- (NSString *)preferredSendingAddress;
- (MFComposeRecipientOriginContext *)originContext;
- (void)dealloc;
- (MFComposeRecipient *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)displayString;
- (int)identifier;
- (MFComposeRecipient *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(int)arg0;
- (NSString *)label;
- (char)isGroup;
- (void *)record;
- (int)recordID;
- (NSString *)compositeName;
- (NSString *)address;
- (int)property;
- (NSString *)uncommentedAddress;
- (void)setCountryCode:(NSString *)arg0;
- (NSString *)countryCode;
- (NSArray *)children;

@end
