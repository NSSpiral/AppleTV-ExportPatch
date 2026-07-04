/* Runtime dump - CKDAppContainerTuple
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAppContainerTuple : NSObject <NSCopying>
{
    NSString * _applicationBundleID;
    CKContainerID * _containerID;
}

@property (retain, nonatomic) NSString * applicationBundleID;
@property (retain, nonatomic) CKContainerID * containerID;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDAppContainerTuple *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (CKContainerID *)containerID;
- (void)setContainerID:(CKContainerID *)arg0;
- (NSString *)applicationBundleID;
- (CKDAppContainerTuple *)initWithApplicationBundleID:(NSString *)arg0 containerID:(CKContainerID *)arg1;
- (NSString *)CKPropertiesDescription;
- (void)setApplicationBundleID:(NSString *)arg0;

@end
