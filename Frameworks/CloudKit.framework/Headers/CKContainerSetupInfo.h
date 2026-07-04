/* Runtime dump - CKContainerSetupInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKContainerSetupInfo : NSObject <NSSecureCoding>
{
    CKContainerID * _containerID;
    NSString * _sourceApplicationBundleIdentifier;
    CKAccountInfo * _accountInfoOverride;
}

@property (retain, nonatomic) CKContainerID * containerID;
@property (retain, nonatomic) NSString * sourceApplicationBundleIdentifier;
@property (retain, nonatomic) CKAccountInfo * accountInfoOverride;

+ (char)supportsSecureCoding;

- (void)setAccountInfoOverride:(CKAccountInfo *)arg0;
- (CKContainerSetupInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (CKContainerID *)containerID;
- (void)setSourceApplicationBundleIdentifier:(NSString *)arg0;
- (void)setContainerID:(CKContainerID *)arg0;
- (NSString *)sourceApplicationBundleIdentifier;
- (CKAccountInfo *)accountInfoOverride;

@end
