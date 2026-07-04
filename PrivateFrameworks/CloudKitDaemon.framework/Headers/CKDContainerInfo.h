/* Runtime dump - CKDContainerInfo
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDContainerInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSURL * _publicCloudDBURL;
    NSURL * _publicShareServiceURL;
    NSURL * _publicDeviceServiceURL;
    NSString * _containerScopedUserID;
}

@property (copy, nonatomic) NSURL * publicCloudDBURL;
@property (copy, nonatomic) NSURL * publicShareServiceURL;
@property (copy, nonatomic) NSURL * publicDeviceServiceURL;
@property (copy, nonatomic) NSString * containerScopedUserID;

+ (char)supportsSecureCoding;

- (CKDContainerInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDContainerInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)CKPropertiesDescription;
- (NSURL *)publicCloudDBURL;
- (void)setPublicCloudDBURL:(NSURL *)arg0;
- (NSURL *)publicShareServiceURL;
- (void)setPublicShareServiceURL:(NSURL *)arg0;
- (NSURL *)publicDeviceServiceURL;
- (void)setPublicDeviceServiceURL:(NSURL *)arg0;
- (NSString *)containerScopedUserID;
- (void)setContainerScopedUserID:(NSString *)arg0;

@end
