/* Runtime dump - FAFamilyNotification
 * Image: /System/Library/PrivateFrameworks/FamilyNotification.framework/FamilyNotification
 */

@interface FAFamilyNotification : NSObject <NSSecureCoding>
{
    char _shouldPersistWhenActivated;
    char _shouldPersistWhenDismissed;
    char _hasActionButton;
    NSString * _identifier;
    NSString * _title;
    NSString * _informativeText;
    NSDate * _relevanceDate;
    NSDate * _expiryDate;
    NSNumber * _familyMemberDSID;
    unsigned int _displayStyle;
    NSString * _actionButtonLabel;
    NSString * _otherButtonLabel;
    NSString * _unlockActionLabel;
    NSURL * _activateActionURL;
    NSURL * _dismissActionlURL;
    NSURL * _clearActionURL;
    NSURL * _launchActionURL;
    NSData * _launchActionArguments;
    NSDictionary * _userInfo;
    NSString * _uuid;
    NSString * _clientIdentifier;
    NSString * _delegateMachServiceName;
}

@property (copy) NSString * identifier;
@property (copy) NSString * title;
@property (copy) NSString * informativeText;
@property (copy) NSDate * relevanceDate;
@property (copy) NSDate * expiryDate;
@property (copy) NSNumber * familyMemberDSID;
@property unsigned int displayStyle;
@property char shouldPersistWhenActivated;
@property char shouldPersistWhenDismissed;
@property (copy) NSString * actionButtonLabel;
@property (copy) NSString * otherButtonLabel;
@property char hasActionButton;
@property (copy) NSString * unlockActionLabel;
@property (copy) NSURL * activateActionURL;
@property (copy) NSURL * dismissActionlURL;
@property (copy) NSURL * clearActionURL;
@property (copy) NSURL * launchActionURL;
@property (copy) NSData * launchActionArguments;
@property (copy) NSDictionary * userInfo;
@property (copy) NSString * uuid;
@property (copy) NSString * clientIdentifier;
@property (copy) NSString * delegateMachServiceName;

+ (char)supportsSecureCoding;

- (NSString *)clientIdentifier;
- (unsigned int)displayStyle;
- (FAFamilyNotification *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (FAFamilyNotification *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)identifier;
- (NSString *)title;
- (void)setUserInfo:(NSDictionary *)arg0;
- (NSDictionary *)userInfo;
- (void)setIdentifier:(NSString *)arg0;
- (void)setClientIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)uuid;
- (void)setFamilyMemberDSID:(NSNumber *)arg0;
- (NSNumber *)familyMemberDSID;
- (void)setUnlockActionLabel:(NSString *)arg0;
- (NSString *)unlockActionLabel;
- (void)setDelegateMachServiceName:(NSString *)arg0;
- (NSString *)informativeText;
- (NSDictionary *)cacheDictionaryRepresentation;
- (FAFamilyNotification *)initWithCacheDictionaryRepresentation:(NSDictionary *)arg0;
- (void)setInformativeText:(NSString *)arg0;
- (NSDate *)relevanceDate;
- (void)setRelevanceDate:(NSDate *)arg0;
- (char)shouldPersistWhenActivated;
- (void)setShouldPersistWhenActivated:(char)arg0;
- (char)shouldPersistWhenDismissed;
- (void)setShouldPersistWhenDismissed:(char)arg0;
- (NSString *)actionButtonLabel;
- (void)setActionButtonLabel:(NSString *)arg0;
- (NSString *)otherButtonLabel;
- (void)setOtherButtonLabel:(NSString *)arg0;
- (char)hasActionButton;
- (void)setHasActionButton:(char)arg0;
- (NSURL *)activateActionURL;
- (void)setActivateActionURL:(NSURL *)arg0;
- (NSURL *)dismissActionlURL;
- (void)setDismissActionlURL:(NSURL *)arg0;
- (NSURL *)clearActionURL;
- (void)setClearActionURL:(NSURL *)arg0;
- (NSURL *)launchActionURL;
- (void)setLaunchActionURL:(NSURL *)arg0;
- (NSData *)launchActionArguments;
- (void)setLaunchActionArguments:(NSData *)arg0;
- (NSString *)delegateMachServiceName;
- (NSDate *)expiryDate;
- (void)setExpiryDate:(NSDate *)arg0;
- (void)setUuid:(NSString *)arg0;
- (void)setDisplayStyle:(unsigned int)arg0;

@end
