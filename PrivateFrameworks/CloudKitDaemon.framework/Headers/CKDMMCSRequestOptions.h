/* Runtime dump - CKDMMCSRequestOptions
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSRequestOptions : NSObject
{
    char _usesBackgroundSession;
    char _allowsCellularAccess;
    char _allowsPowerNapScheduling;
    NSString * _applicationBundleID;
    NSString * _applicationSecondaryID;
    NSString * _containerID;
    NSArray * _zoneNames;
}

@property (retain, nonatomic) NSString * applicationBundleID;
@property (retain, nonatomic) NSString * applicationSecondaryID;
@property (retain, nonatomic) NSString * containerID;
@property (retain, nonatomic) NSArray * zoneNames;
@property (nonatomic) char usesBackgroundSession;
@property (nonatomic) char allowsCellularAccess;
@property (nonatomic) char allowsPowerNapScheduling;

- (NSString *)description;
- (void).cxx_destruct;
- (char)usesBackgroundSession;
- (void)setUsesBackgroundSession:(char)arg0;
- (NSString *)containerID;
- (void)setContainerID:(NSString *)arg0;
- (char)allowsCellularAccess;
- (void)setAllowsCellularAccess:(char)arg0;
- (NSString *)applicationBundleID;
- (void)setAllowsPowerNapScheduling:(char)arg0;
- (NSString *)CKPropertiesDescription;
- (char)allowsPowerNapScheduling;
- (void)setApplicationBundleID:(NSString *)arg0;
- (CKDMMCSRequestOptions *)initWithOperation:(NSObject *)arg0;
- (void)setZoneNames:(NSArray *)arg0;
- (NSString *)applicationSecondaryID;
- (NSArray *)zoneNames;
- (NSDictionary *)MMCSOptions;
- (void)setApplicationSecondaryID:(NSString *)arg0;

@end
