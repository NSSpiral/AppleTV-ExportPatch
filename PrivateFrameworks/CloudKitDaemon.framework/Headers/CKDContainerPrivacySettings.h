/* Runtime dump - CKDContainerPrivacySettings
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDContainerPrivacySettings : NSObject
{
    CKContainerID * _containerID;
    NSSet * _applicationBundleIDs;
    int _discoverable;
}

@property (copy, nonatomic) CKContainerID * containerID;
@property (copy, nonatomic) NSSet * applicationBundleIDs;
@property (nonatomic) int discoverable;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (CKContainerID *)containerID;
- (void)setContainerID:(CKContainerID *)arg0;
- (int)discoverable;
- (void)setDiscoverable:(int)arg0;
- (NSString *)CKPropertiesDescription;
- (NSSet *)applicationBundleIDs;
- (void)setApplicationBundleIDs:(NSSet *)arg0;

@end
