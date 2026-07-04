/* Runtime dump - MBDomainInfo
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBDomainInfo : NSObject <NSCopying, NSCoding>
{
    char _systemApp;
    char _enabled;
    char _restricted;
    NSString * _domainName;
    unsigned long long _remoteSize;
    unsigned long long _localSize;
}

@property (readonly, nonatomic) char appDomain;
@property (nonatomic) char systemApp;
@property (readonly, nonatomic) char cameraRollDomain;
@property (retain, nonatomic) NSString * domainName;
@property (readonly, nonatomic) NSString * bundleID;
@property (readonly, nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long remoteSize;
@property (nonatomic) unsigned long long localSize;
@property (nonatomic) char enabled;
@property (nonatomic) char restricted;

+ (NSObject *)domainNameForBundleID:(NSObject *)arg0;
+ (NSString *)domainInfoWithName:(NSString *)arg0 systemApp:(char)arg1 remoteSize:(unsigned long long)arg2 localSize:(unsigned long long)arg3 enabled:(char)arg4 restricted:(char)arg5;

- (void)dealloc;
- (unsigned long long)size;
- (MBDomainInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (MBDomainInfo *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)bundleID;
- (NSString *)domainName;
- (void)setDomainName:(NSString *)arg0;
- (char)isAppDomain;
- (char)isSystemApp;
- (MBDomainInfo *)initWithDomainName:(NSString *)arg0 systemApp:(char)arg1 remoteSize:(unsigned long long)arg2 localSize:(unsigned long long)arg3 enabled:(char)arg4 restricted:(char)arg5;
- (char)isCameraRollDomain;
- (void)setSystemApp:(char)arg0;
- (void)setRemoteSize:(unsigned long long)arg0;
- (unsigned long long)localSize;
- (void)setLocalSize:(unsigned long long)arg0;
- (unsigned long long)remoteSize;
- (char)isRestricted;
- (void)setRestricted:(char)arg0;

@end
