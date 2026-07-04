/* Runtime dump - BBParentSectionDataProviderFactory
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBParentSectionDataProviderFactory : NSObject <BBSectionIdentity, NSSecureCoding>
{
    BBSectionInfo * _sectionInfo;
    NSString * _universalSectionIdentifier;
}

@property (copy, nonatomic) BBSectionInfo * sectionInfo;
@property (copy, nonatomic) NSString * universalSectionIdentifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;
+ (BBParentSectionDataProviderFactory *)factoryFromSectionInfo:(NSDictionary *)arg0;

- (BBSectionInfo *)sectionInfo;
- (void)dealloc;
- (BBParentSectionDataProviderFactory *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setSectionInfo:(BBSectionInfo *)arg0;
- (NSString *)sectionIdentifier;
- (void)setUniversalSectionIdentifier:(NSString *)arg0;
- (NSString *)universalSectionIdentifier;
- (NSString *)sectionDisplayName;
- (BBSectionIcon *)sectionIcon;
- (BBParentSectionDataProviderFactory *)initWithSectionInfo:(BBSectionInfo *)arg0;
- (NSDictionary *)dataProviders;

@end
