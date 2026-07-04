/* Runtime dump - MBRestoreFailure
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBRestoreFailure : NSObject <NSCopying, NSCoding>
{
    NSString * _identifier;
    NSString * _displayName;
    NSString * _dataclass;
    NSString * _assetType;
    NSData * _icon;
    NSError * _error;
}

@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSString * displayName;
@property (copy, nonatomic) NSString * dataclass;
@property (copy, nonatomic) NSString * assetType;
@property (copy, nonatomic) NSData * icon;
@property (copy, nonatomic) NSError * error;

- (NSData *)icon;
- (void)dealloc;
- (MBRestoreFailure *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSString *)identifier;
- (MBRestoreFailure *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (void)setIcon:(NSData *)arg0;
- (NSString *)displayName;
- (NSError *)error;
- (void)setDisplayName:(NSString *)arg0;
- (NSString *)dataclass;
- (void)setDataclass:(NSString *)arg0;
- (MBRestoreFailure *)initWithIdentifier:(NSString *)arg0 dataclass:(NSString *)arg1 assetType:(NSString *)arg2 displayName:(NSString *)arg3 error:(NSError *)arg4;
- (void)setError:(NSError *)arg0;
- (NSString *)assetType;
- (void)setAssetType:(NSString *)arg0;

@end
