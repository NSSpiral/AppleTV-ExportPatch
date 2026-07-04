/* Runtime dump - BRCVersion
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCVersion : NSObject <NSCopying, NSSecureCoding>
{
    BRFieldCKInfo * _ckInfo;
    long long _mtime;
    NSString * _originalPOSIXName;
    long long _size;
    long long _thumbnailSize;
    NSData * _thumbnailSignature;
    NSData * _contentSignature;
    NSData * _xattrSignature;
    NSData * _quarantineInfo;
    NSSet * _conflictLoserEtags;
    NSData * _lazyXattr;
    NSNumber * _lastEditorDeviceOrOwnerKey;
    NSString * _lastEditorDeviceName;
}

@property (retain, nonatomic) BRFieldCKInfo * ckInfo;
@property (nonatomic) long long mtime;
@property (retain, nonatomic) NSString * originalPOSIXName;
@property (nonatomic) long long size;
@property (nonatomic) long long thumbnailSize;
@property (retain, nonatomic) NSSet * conflictLoserEtags;
@property (readonly, nonatomic) char isPackage;
@property (readonly, nonatomic) char hasThumbnail;
@property (retain, nonatomic) NSData * xattrSignature;
@property (retain, nonatomic) NSData * lazyXattr;
@property (retain, nonatomic) NSData * quarantineInfo;
@property (retain, nonatomic) NSData * contentSignature;
@property (retain, nonatomic) NSData * thumbnailSignature;
@property (retain, nonatomic) NSNumber * lastEditorDeviceOrOwnerKey;
@property (retain, nonatomic) NSString * lastEditorDeviceName;

+ (char)supportsSecureCoding;

- (long long)size;
- (BRCVersion *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (BRCVersion *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSize:(long long)arg0;
- (void).cxx_destruct;
- (long long)thumbnailSize;
- (long long)mtime;
- (NSString *)descriptionWithContext:(NSObject *)arg0;
- (BRFieldCKInfo *)ckInfo;
- (NSData *)xattrSignature;
- (char)isPackage;
- (BRCVersion *)initFromResultSet:(NSSet *)arg0 pos:(int)arg1;
- (char)check:(WebPluginContainerCheck *)arg0 logToFile:(struct __sFILE *)arg1;
- (unsigned long long)diffAgainst:(id)arg0;
- (void)setCkInfo:(BRFieldCKInfo *)arg0;
- (void)setXattrSignature:(NSData *)arg0;
- (NSData *)lazyXattr;
- (void)setLazyXattr:(NSData *)arg0;
- (BRCVersion *)initWithVersion:(NSString *)arg0;
- (id)lastEditorDeviceNameWithDB:(double)arg0;
- (id)lastEditorNameWithDB:(double)arg0;
- (NSString *)displayNameWithoutExtension:(char)arg0;
- (char)hasThumbnail;
- (NSObject *)additionNameForItemID:(NSObject *)arg0 zoneID:(CKRecordZoneID *)arg1;
- (void)setMtime:(long long)arg0;
- (NSString *)originalPOSIXName;
- (void)setOriginalPOSIXName:(NSString *)arg0;
- (void)setThumbnailSize:(long long)arg0;
- (NSData *)thumbnailSignature;
- (void)setThumbnailSignature:(NSData *)arg0;
- (NSData *)contentSignature;
- (void)setContentSignature:(NSData *)arg0;
- (NSSet *)conflictLoserEtags;
- (void)setConflictLoserEtags:(NSSet *)arg0;
- (NSNumber *)lastEditorDeviceOrOwnerKey;
- (void)setLastEditorDeviceOrOwnerKey:(NSNumber *)arg0;
- (NSString *)lastEditorDeviceName;
- (void)setLastEditorDeviceName:(NSString *)arg0;
- (NSData *)quarantineInfo;
- (void)setQuarantineInfo:(NSData *)arg0;

@end
