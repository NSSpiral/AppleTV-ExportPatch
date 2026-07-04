/* Runtime dump - BBDataProviderIdentity
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDataProviderIdentity : NSObject <NSSecureCoding>
{
    struct ? _traits;
    NSString * _sectionIdentifier;
    NSString * _universalSectionIdentifier;
    BBSectionInfo * _defaultSectionInfo;
    NSString * _sectionDisplayName;
    BBSectionIcon * _sectionIcon;
    NSArray * _sortDescriptors;
    BBSectionParameters * _sectionParameters;
    NSArray * _defaultSubsectionInfos;
    NSDictionary * _subsectionDisplayNames;
    NSString * _sortKey;
    NSString * _parentSectionIdentifier;
    char _syncsBulletinDismissal;
}

@property (readonly, nonatomic) struct ? traits;
@property (copy, nonatomic) NSString * sectionIdentifier;
@property (copy, nonatomic) NSString * universalSectionIdentifier;
@property (copy, nonatomic) BBSectionInfo * defaultSectionInfo;
@property (copy, nonatomic) NSString * sectionDisplayName;
@property (copy, nonatomic) BBSectionIcon * sectionIcon;
@property (copy, nonatomic) NSArray * sortDescriptors;
@property (retain, nonatomic) BBSectionParameters * sectionParameters;
@property (copy, nonatomic) NSArray * defaultSubsectionInfos;
@property (copy, nonatomic) NSString * sortKey;
@property (copy, nonatomic) NSDictionary * subsectionDisplayNames;
@property (readonly, nonatomic) char syncsBulletinDismissal;
@property (copy, nonatomic) NSString * parentSectionIdentifier;

+ (char)supportsSecureCoding;
+ (NSObject *)identityForDataProvider:(NSObject *)arg0;
+ (NSObject *)identityForRemoteDataProvider:(NSObject *)arg0;

- (NSString *)sortKey;
- (void)dealloc;
- (BBDataProviderIdentity *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void)setSortDescriptors:(NSArray *)arg0;
- (NSArray *)sortDescriptors;
- (struct ?)traits;
- (NSString *)sectionIdentifier;
- (void)setUniversalSectionIdentifier:(NSString *)arg0;
- (NSString *)universalSectionIdentifier;
- (char)syncsBulletinDismissal;
- (BBSectionParameters *)sectionParameters;
- (NSString *)parentSectionIdentifier;
- (BBSectionInfo *)defaultSectionInfo;
- (NSString *)sectionDisplayName;
- (BBSectionIcon *)sectionIcon;
- (NSArray *)defaultSubsectionInfos;
- (BBDataProviderIdentity *)initForDataProvider:(NSObject *)arg0 forRemoteDataProvider:(char)arg1;
- (void)setSortKey:(NSString *)arg0;
- (void)setSectionIdentifier:(NSString *)arg0;
- (void)setDefaultSectionInfo:(BBSectionInfo *)arg0;
- (void)setSectionDisplayName:(NSString *)arg0;
- (void)setSectionIcon:(BBSectionIcon *)arg0;
- (void)setSectionParameters:(BBSectionParameters *)arg0;
- (void)setDefaultSubsectionInfos:(NSArray *)arg0;
- (NSDictionary *)subsectionDisplayNames;
- (void)setSubsectionDisplayNames:(NSDictionary *)arg0;
- (void)setParentSectionIdentifier:(NSString *)arg0;

@end
