/* Runtime dump - MBRestoreInfo
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBRestoreInfo : NSObject <NSCoding, NSCopying>
{
    NSDate * _date;
    char _wasCloudRestore;
    NSString * _deviceBuildVersion;
    NSString * _backupBuildVersion;
}

@property (readonly) NSDate * date;
@property (readonly) char wasCloudRestore;
@property (readonly) NSString * deviceBuildVersion;
@property (readonly) NSString * backupBuildVersion;

- (void)dealloc;
- (MBRestoreInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSDate *)date;
- (MBRestoreInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void)setDate:(NSDate *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setWasCloudRestore:(char)arg0;
- (void)setDeviceBuildVersion:(NSString *)arg0;
- (void)setBackupBuildVersion:(NSString *)arg0;
- (char)wasCloudRestore;
- (NSString *)deviceBuildVersion;
- (NSString *)backupBuildVersion;
- (MBRestoreInfo *)initWithDictionaryRepresentation:(NSDictionary *)arg0;

@end
