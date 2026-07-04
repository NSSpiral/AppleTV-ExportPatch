/* Runtime dump - BBSectionParameters
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSectionParameters : NSObject <BBUniquableObject, NSSecureCoding>
{
    NSLock * _lock;
    NSString * _uniqueIdentifier;
    char _showsSubtitle;
    char _usesVariableLayout;
    char _orderSectionUsingRecencyDate;
    char _showsDateInFloatingLockScreenAlert;
    char _displaysCriticalBulletins;
    unsigned int _messageNumberOfLines;
    BBSectionSubtypeParameters * _defaultSubtypeParameters;
    NSMutableDictionary * _allSubtypeParameters;
    NSString * _displayName;
    BBSectionIcon * _icon;
}

@property (nonatomic) char showsSubtitle;
@property (nonatomic) char usesVariableLayout;
@property (nonatomic) unsigned int messageNumberOfLines;
@property (nonatomic) char orderSectionUsingRecencyDate;
@property (nonatomic) char showsDateInFloatingLockScreenAlert;
@property (copy, nonatomic) NSString * displayName;
@property (retain, nonatomic) BBSectionIcon * icon;
@property (nonatomic) char displaysCriticalBulletins;
@property (retain, nonatomic) BBSectionSubtypeParameters * defaultSubtypeParameters;
@property (retain, nonatomic) NSMutableDictionary * allSubtypeParameters;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;
+ (NSCache *)addSectionParametersToCache:(NSObject *)arg0;
+ (void)removeSectionParametersFromCache:(NSObject *)arg0;
+ (NSString *)copyCachedSectionParametersWithIdentifier:(NSString *)arg0;

- (BBSectionIcon *)icon;
- (void)dealloc;
- (BBSectionParameters *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (BBSectionParameters *)init;
- (void)setIcon:(BBSectionIcon *)arg0;
- (NSString *)uniqueIdentifier;
- (NSString *)displayName;
- (char)displaysCriticalBulletins;
- (void)setDisplaysCriticalBulletins:(char)arg0;
- (void)setMessageNumberOfLines:(unsigned int)arg0;
- (void)setDefaultSubtypeParameters:(BBSectionSubtypeParameters *)arg0;
- (void)setAllSubtypeParameters:(NSMutableDictionary *)arg0;
- (void)setShowsSubtitle:(char)arg0;
- (void)setUsesVariableLayout:(char)arg0;
- (void)setOrderSectionUsingRecencyDate:(char)arg0;
- (void)setShowsDateInFloatingLockScreenAlert:(char)arg0;
- (BBSectionSubtypeParameters *)defaultSubtypeParameters;
- (NSMutableDictionary *)allSubtypeParameters;
- (char)showsSubtitle;
- (unsigned int)messageNumberOfLines;
- (char)usesVariableLayout;
- (char)orderSectionUsingRecencyDate;
- (char)showsDateInFloatingLockScreenAlert;
- (id)parametersForSubtype:(int)arg0;
- (NSArray *)allSubtypes;
- (void)setDisplayName:(NSString *)arg0;

@end
