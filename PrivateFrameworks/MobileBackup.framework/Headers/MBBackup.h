/* Runtime dump - MBBackup
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBBackup : NSObject <NSCopying, NSCoding>
{
    NSString * _backupUDID;
    NSString * _deviceClass;
    NSString * _productType;
    NSString * _hardwareModel;
    NSString * _marketingName;
    NSArray * _snapshots;
    char _restoreSystemFiles;
}

@property (readonly, nonatomic) NSString * backupUDID;
@property (readonly, nonatomic) NSString * deviceClass;
@property (readonly, nonatomic) NSString * productType;
@property (readonly, nonatomic) NSString * hardwareModel;
@property (readonly, nonatomic) NSString * marketingName;
@property (readonly, nonatomic) NSArray * snapshots;
@property (readonly, nonatomic) char restoreSystemFiles;

- (void)dealloc;
- (MBBackup *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (MBBackup *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)deviceClass;
- (NSString *)productType;
- (MBBackup *)initWithBackupUDID:(NSString *)arg0 deviceClass:(NSString *)arg1 productType:(NSString *)arg2 hardwareModel:(NSString *)arg3 marketingName:(NSString *)arg4 snapshots:(NSArray *)arg5 restoreSystemFiles:(char)arg6;
- (NSString *)backupUDID;
- (NSString *)marketingName;
- (NSArray *)snapshots;
- (char)canRestoreSystemFiles;
- (NSString *)hardwareModel;

@end
