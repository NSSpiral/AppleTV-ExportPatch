/* Runtime dump - CKOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationInfo : NSObject <NSSecureCoding>
{
    char _allowsCellularAccess;
    NSString * _operationID;
    NSString * _parentSectionID;
    int _usesBackgroundSessionOverride;
    int _qualityOfService;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _sourceApplicationSecondaryIdentifier;
    CKContainerSetupInfo * _setupInfo;
    NSString * _deviceIdentifier;
    id _parentOperation;
}

@property (retain, nonatomic) NSString * operationID;
@property (retain, nonatomic) NSString * parentSectionID;
@property (nonatomic) int usesBackgroundSessionOverride;
@property (nonatomic) char allowsCellularAccess;
@property (nonatomic) int qualityOfService;
@property (retain, nonatomic) NSString * sourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSString * sourceApplicationSecondaryIdentifier;
@property (retain, nonatomic) CKContainerSetupInfo * setupInfo;
@property (retain, nonatomic) NSString * deviceIdentifier;
@property (weak, nonatomic) id parentOperation;

+ (char)supportsSecureCoding;

- (CKOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CKOperationInfo *)init;
- (void).cxx_destruct;
- (void)setQualityOfService:(int)arg0;
- (int)qualityOfService;
- (NSString *)operationID;
- (void)setSourceApplicationBundleIdentifier:(NSString *)arg0;
- (void)setSourceApplicationSecondaryIdentifier:(NSString *)arg0;
- (char)allowsCellularAccess;
- (void)setAllowsCellularAccess:(char)arg0;
- (NSString *)sourceApplicationBundleIdentifier;
- (NSString *)sourceApplicationSecondaryIdentifier;
- (CKContainerSetupInfo *)setupInfo;
- (void)setSetupInfo:(CKContainerSetupInfo *)arg0;
- (void)setOperationID:(NSString *)arg0;
- (ISOperation *)parentOperation;
- (NSString *)parentSectionID;
- (int)usesBackgroundSessionOverride;
- (NSString *)deviceIdentifier;
- (void)setUsesBackgroundSessionOverride:(int)arg0;
- (void)setParentOperation:(NSObject *)arg0;
- (void)setParentSectionID:(NSString *)arg0;
- (void)setDeviceIdentifier:(NSString *)arg0;

@end
