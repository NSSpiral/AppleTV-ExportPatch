/* Runtime dump - CKApplicationPermissionGroup
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKApplicationPermissionGroup : NSObject <NSSecureCoding>
{
    NSArray * _containerIDs;
    NSArray * _applicationBundleIDs;
    unsigned int _enabledPermissions;
}

@property (retain, nonatomic) NSArray * containerIDs;
@property (retain, nonatomic) NSArray * applicationBundleIDs;
@property (nonatomic) unsigned int enabledPermissions;

+ (char)supportsSecureCoding;

- (NSArray *)containerIDs;
- (unsigned int)enabledPermissions;
- (CKApplicationPermissionGroup *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)CKPropertiesDescription;
- (NSArray *)applicationBundleIDs;
- (void)setApplicationBundleIDs:(NSArray *)arg0;
- (void)setEnabledPermissions:(unsigned int)arg0;
- (void)setContainerIDs:(NSArray *)arg0;

@end
