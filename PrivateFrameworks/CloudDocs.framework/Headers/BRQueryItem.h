/* Runtime dump - BRQueryItem
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRQueryItem : NSObject <NSSecureCoding, NSCopying>
{
    id _flags;
    unsigned short _diffs;
    NSString * _containerID;
    NSString * _parentPath;
    NSString * _logicalName;
    NSString * _physicalName;
    NSNumber * _fileObjectID;
    NSNumber * _size;
    NSNumber * _mtime;
    NSMutableDictionary * _attrs;
    NSURL * _url;
    NSURL * _localRepresentationURL;
    id _replacement;
    char _isNetworkOffline;
    long long _logicalHandle;
    long long _physicalHandle;
}

@property (readonly, nonatomic) unsigned short diffs;
@property (readonly, nonatomic) unsigned int downloadStatus;
@property (readonly, nonatomic) unsigned int uploadStatus;
@property (readonly, nonatomic) unsigned int shareOptions;
@property (readonly, nonatomic) char isInTransfer;
@property (readonly, nonatomic) char isConflicted;
@property (readonly, nonatomic) char isLive;
@property (readonly, nonatomic) char isDead;
@property (readonly, nonatomic) char isDocument;
@property (readonly, nonatomic) char hasTransferStatuses;
@property (nonatomic) char isPreCrash;
@property (readonly, nonatomic) char isUploadActive;
@property (readonly, nonatomic) char isDownloadActive;
@property (readonly, nonatomic) char isDownloadRequested;
@property (readonly, nonatomic) char isAlias;
@property (readonly, nonatomic) NSString * containerID;
@property (readonly, nonatomic) NSString * parentPath;
@property (readonly, nonatomic) NSString * logicalName;
@property (readonly, nonatomic) NSString * physicalName;
@property (readonly, nonatomic) NSNumber * fileObjectID;
@property (readonly, nonatomic) NSNumber * size;
@property (readonly, nonatomic) NSNumber * mtime;
@property (readonly, nonatomic) NSURL * url;
@property (readonly, nonatomic) NSURL * localRepresentationURL;
@property (readonly, nonatomic) NSString * path;
@property (nonatomic) char isNetworkOffline;
@property (nonatomic) id replacement;

+ (void)initialize;
+ (char)supportsSecureCoding;
+ (NSURL *)askDaemonQueryItemForURL:(NSURL *)arg0;

- (BRQueryItem *)initWithRelPath:(NSString *)arg0 error:(id *)arg1;
- (NSArray *)attributeNames;
- (NSArray *)attributesForNames:(id)arg0;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (NSNumber *)size;
- (BRQueryItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSURL *)url;
- (NSString *)path;
- (BRQueryItem *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIsNetworkOffline:(char)arg0;
- (char)isUploadActive;
- (char)isDownloadActive;
- (void)attachLogicalExtension:(id)arg0 physicalExtension:(id)arg1;
- (char)isConflicted;
- (NSURL *)localRepresentationURL;
- (NSString *)sharedItemRole;
- (BRQueryItem *)initWithQueryItem:(NSObject *)arg0;
- (char)isEqualToQueryItem:(NSObject *)arg0;
- (void)_mergeURL:(NSURL *)arg0;
- (void)_mergeAttrs:(id)arg0;
- (unsigned int)shareOptions;
- (void)clearDiffs;
- (char)isPreCrash;
- (void)setIsPreCrash:(char)arg0;
- (void)_setAttr:(id)arg0 forKey:(NSString *)arg1;
- (char)hasTransferStatuses;
- (UITextReplacement *)replacement;
- (void)setReplacement:(UITextReplacement *)arg0;
- (char)isNetworkOffline;
- (char)isDocument;
- (NSString *)containerID;
- (NSNumber *)fileObjectID;
- (char)isAlias;
- (char)isDead;
- (NSNumber *)mtime;
- (unsigned int)downloadStatus;
- (unsigned int)uploadStatus;
- (void)setAttribute:(char *)arg0 forKey:(NSString *)arg1;
- (char)isDownloadRequested;
- (void)merge:(char)arg0;
- (NSString *)subclassDescription;
- (char)canMerge:(CPTextLineMerge *)arg0;
- (void)markDead;
- (NSString *)parentPath;
- (char)isShared;
- (NSString *)logicalName;
- (unsigned short)diffs;
- (char)isLive;
- (char)isInTransfer;
- (NSString *)physicalName;
- (NSString *)attributeForName:(NSString *)arg0;

@end
