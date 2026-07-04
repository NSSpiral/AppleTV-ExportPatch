/* Runtime dump - BRCStatInfo
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCStatInfo : NSObject <NSCopying, NSSecureCoding>
{
    BRFieldCKInfo * _ckInfo;
    BRCItemID * _parentID;
    char _state;
    char _type;
    char _mode;
    long long _birthtime;
    NSString * _filenameOrAliasTarget;
    char _hiddenExt;
    NSData * _xattrSignature;
    NSData * _finderTags;
    NSData * _lazyXattr;
}

@property (retain, nonatomic) BRFieldCKInfo * ckInfo;
@property (retain, nonatomic) BRCItemID * parentID;
@property (nonatomic) char state;
@property (nonatomic) char type;
@property (nonatomic) char mode;
@property (nonatomic) long long birthtime;
@property (retain, nonatomic) NSString * filename;
@property (readonly, nonatomic) NSString * displayName;
@property (nonatomic) char hiddenExt;
@property (retain, nonatomic) NSData * finderTags;
@property (retain, nonatomic) NSData * xattrSignature;
@property (retain, nonatomic) NSData * lazyXattr;
@property (readonly, nonatomic) char iWorkShareable;
@property (readonly, nonatomic) NSString * _aliasTargetMangledID;
@property (readonly, nonatomic) NSString * _aliasTargetContainerID;
@property (readonly, nonatomic) BRCItemID * _aliasTargetItemID;

+ (char)supportsSecureCoding;

- (BRCStatInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (char)state;
- (void)setState:(char)arg0;
- (void)setType:(char)arg0;
- (char)type;
- (BRCStatInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void)setMode:(char)arg0;
- (char)mode;
- (void).cxx_destruct;
- (NSString *)displayName;
- (NSString *)filename;
- (BRCItemID *)parentID;
- (NSString *)_aliasTargetMangledID;
- (NSString *)_aliasTargetContainerID;
- (BRCItemID *)_aliasTargetItemID;
- (void)_updateAliasTarget:(NSObject *)arg0;
- (BRFieldCKInfo *)ckInfo;
- (long long)birthtime;
- (char)isHiddenExt;
- (NSData *)finderTags;
- (NSData *)xattrSignature;
- (NSString *)descriptionWithContext:(NSObject *)arg0 origName:(NSString *)arg1;
- (char)checkStateWithItemID:(NSObject *)arg0 logToFile:(struct __sFILE *)arg1;
- (BRCStatInfo *)initWithStatInfo:(struct stat)arg0;
- (char)iWorkShareable;
- (BRCStatInfo *)initFromResultSet:(NSSet *)arg0 pos:(int)arg1;
- (char)check:(WebPluginContainerCheck *)arg0 logToFile:(struct __sFILE *)arg1;
- (unsigned long long)diffAgainst:(id)arg0;
- (char)isExecutable;
- (char)isWritable;
- (void)setCkInfo:(BRFieldCKInfo *)arg0;
- (void)setBirthtime:(long long)arg0;
- (void)setParentID:(BRCItemID *)arg0;
- (void)setFilename:(NSString *)arg0;
- (void)setHiddenExt:(char)arg0;
- (void)setXattrSignature:(NSData *)arg0;
- (NSData *)lazyXattr;
- (void)setLazyXattr:(NSData *)arg0;
- (void)setFinderTags:(NSData *)arg0;

@end
