/* Runtime dump - MBSnapshot
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBSnapshot : NSObject <NSCopying, NSCoding>
{
    unsigned int _snapshotID;
    NSString * _deviceName;
    NSDate * _date;
    int _state;
    char _isCompatible;
    NSString * _systemVersion;
    unsigned long long _quotaReserved;
}

@property (readonly, nonatomic) unsigned int snapshotID;
@property (readonly, nonatomic) NSString * deviceName;
@property (readonly, nonatomic) NSDate * date;
@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) char isCompatible;
@property (readonly, nonatomic) NSString * systemVersion;
@property (readonly, nonatomic) unsigned long long quotaReserved;

- (void)dealloc;
- (MBSnapshot *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (int)state;
- (NSDate *)date;
- (NSString *)systemVersion;
- (MBSnapshot *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)deviceName;
- (MBSnapshot *)initWithSnapshotID:(unsigned int)arg0 deviceName:(NSString *)arg1 date:(NSDate *)arg2 state:(int)arg3 isCompatible:(char)arg4 systemVersion:(NSString *)arg5 quotaReserved:(unsigned long long)arg6;
- (unsigned int)snapshotID;
- (char)isCompatible;
- (unsigned long long)quotaReserved;

@end
