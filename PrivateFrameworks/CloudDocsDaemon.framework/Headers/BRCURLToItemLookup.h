/* Runtime dump - BRCURLToItemLookup
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCURLToItemLookup : NSObject <NSSecureCoding>
{
    BRCAccountSession * _session;
    id _hasFetched;
    BRCRelativePath * __relpath;
    NSURL * _url;
    BRCRelativePath * _parentRelpath;
    BRCItemID * _parentItemID;
    NSString * _filename;
    BRCLocalItem * _byIDLocalItem;
    BRCServerItem * _byIDServerItem;
    BRCLocalItem * _byPathLocalItem;
    BRCServerItem * _byPathServerItem;
    BRCLocalItem * _faultedLocalItem;
    BRCServerItem * _faultedServerItem;
    BRCRelativePath * _faultedRelpath;
    BRCLocalItem * _reservedLocalItem;
    BRCServerItem * _reservedServerItem;
    unsigned long long _byIDDiffs;
    unsigned long long _byPathDiffs;
    unsigned long long _faultedDiffs;
}

@property (readonly, nonatomic) NSURL * url;
@property (readonly, nonatomic) struct ? byIDMatch;
@property (readonly, nonatomic) BRCLocalItem * byIDLocalItem;
@property (readonly, nonatomic) BRCServerItem * byIDServerItem;
@property (readonly, nonatomic) BRCRelativePath * byIDRelpath;
@property (readonly, nonatomic) unsigned long long byIDDiffs;
@property (readonly, nonatomic) struct ? byPathMatch;
@property (readonly, nonatomic) BRCLocalItem * byPathLocalItem;
@property (readonly, nonatomic) BRCServerItem * byPathServerItem;
@property (readonly, nonatomic) BRCRelativePath * byPathRelpath;
@property (readonly, nonatomic) unsigned long long byPathDiffs;
@property (readonly, nonatomic) struct ? faultedMatch;
@property (readonly, nonatomic) BRCLocalItem * faultedLocalItem;
@property (readonly, nonatomic) BRCServerItem * faultedServerItem;
@property (readonly, nonatomic) BRCRelativePath * faultedRelpath;
@property (readonly, nonatomic) unsigned long long faultedDiffs;
@property (readonly, nonatomic) struct ? reservedMatch;
@property (readonly, nonatomic) BRCLocalItem * reservedLocalItem;
@property (readonly, nonatomic) BRCServerItem * reservedServerItem;
@property (readonly, nonatomic) BRCRelativePath * parentRelpath;
@property (readonly, nonatomic) BRCItemID * parentItemID;
@property (readonly, nonatomic) NSString * filename;
@property (readonly, nonatomic) unsigned short pathType;
@property (readonly, nonatomic) BRCDocumentItem * bySharedEnclosureDocItem;

+ (char)supportsSecureCoding;

- (BRCURLToItemLookup *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSURL *)url;
- (void).cxx_destruct;
- (NSString *)filename;
- (void)closePaths;
- (void)_fetchRelPath;
- (BRCItemID *)parentItemID;
- (NSString *)_relpath;
- (void)refreshByPathDiffs;
- (void)_fetchPathMatch;
- (void)refreshByIDDiffs;
- (void)_fetchIDMatch;
- (void)_fetchFaultedPathMatch;
- (void)refreshFaultedDiffs;
- (void)_fetchReservedPathMatch;
- (BRCURLToItemLookup *)initWithURL:(NSString *)arg0 root:(NSObject *)arg1;
- (char)resolveParentAndKeepOpenMustExist:(char)arg0 errcode:(int *)arg1;
- (struct ?)byPathMatch;
- (BRCLocalItem *)byPathLocalItem;
- (BRCRelativePath *)byPathRelpath;
- (BRCServerItem *)byPathServerItem;
- (unsigned long long)byPathDiffs;
- (void)clearByPathItem;
- (struct ?)byIDMatch;
- (BRCLocalItem *)byIDLocalItem;
- (BRCRelativePath *)byIDRelpath;
- (BRCServerItem *)byIDServerItem;
- (unsigned long long)byIDDiffs;
- (void)clearByIDItem;
- (struct ?)faultedMatch;
- (BRCRelativePath *)faultedRelpath;
- (BRCServerItem *)faultedServerItem;
- (BRCLocalItem *)faultedLocalItem;
- (unsigned long long)faultedDiffs;
- (void)clearFaultedItem;
- (unsigned short)pathType;
- (BRCDocumentItem *)bySharedEnclosureDocItem;
- (struct ?)reservedMatch;
- (BRCLocalItem *)reservedLocalItem;
- (BRCServerItem *)reservedServerItem;
- (void)clearReservedItem;
- (BRCRelativePath *)parentRelpath;
- (void)markPathMatchLostIfLocationDoesntMatch:(struct ? *)arg0;
- (void)handleReservedPathMatchesIfNeeded;
- (void)matchLookupItemsWithDisk;
- (char)_isPathMatchIdle:(struct ? *)arg0;
- (id)_generateGentleBounceForPathMatch:(struct ? *)arg0 dirfd:(struct ?)arg1;
- (void)_clearNamespace:(unsigned char)arg0;
- (struct ?)_pathMatchInNamespace:(unsigned char)arg0;
- (char)_canUpdatePathMatch:(struct ? *)arg0 hasAdditionsToApply:(struct ?)arg1;
- (void)didApplyChangesAtPath:(NSString *)arg0 filename:(NSString *)arg1 li:(id)arg2 si:(struct socket_fdinfo)arg3;
- (char)_bounceBouncesHiddenByFault:(id)arg0;
- (char)tryToDeleteItemInNamespace:(unsigned char)arg0;
- (void)_moveMissingItemAsideInNamespace:(unsigned char)arg0;
- (char)_bouncePathMatch:(struct ? *)arg0 toApplyServerItem:(struct ?)arg1;
- (char)_removeDirectory:(PLSimpleDCIMDirectory *)arg0 atPath:(NSString *)arg1 error:(id *)arg2;
- (void)tryToUpdateItemInNamespace:(unsigned char)arg0 withDstLookup:(id)arg1;

@end
