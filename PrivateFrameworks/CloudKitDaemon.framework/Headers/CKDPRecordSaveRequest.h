/* Runtime dump - CKDPRecordSaveRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordSaveRequest : PBRequest <NSCopying>
{
    CKDPRecordSaveRequestConflictLoserUpdate * _conflictLoserUpdate;
    NSMutableArray * _conflictLosersToResolves;
    NSString * _etag;
    NSMutableArray * _fieldsToDeleteIfExistOnMerges;
    CKDPRecord * _record;
    NSString * _recordProtectionInfoTag;
    int _saveSemantics;
    NSString * _shareEtag;
    CKDPRecordSaveRequestShareIdUpdate * _shareIDUpdate;
    NSString * _zoneProtectionInfoTag;
    char _merge;
    struct ? _has;
}

@property (readonly, nonatomic) char hasRecord;
@property (retain, nonatomic) CKDPRecord * record;
@property (nonatomic) char hasMerge;
@property (nonatomic) char merge;
@property (retain, nonatomic) NSMutableArray * fieldsToDeleteIfExistOnMerges;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString * etag;
@property (readonly, nonatomic) char hasConflictLoserUpdate;
@property (retain, nonatomic) CKDPRecordSaveRequestConflictLoserUpdate * conflictLoserUpdate;
@property (nonatomic) char hasSaveSemantics;
@property (nonatomic) int saveSemantics;
@property (readonly, nonatomic) char hasZoneProtectionInfoTag;
@property (retain, nonatomic) NSString * zoneProtectionInfoTag;
@property (readonly, nonatomic) char hasRecordProtectionInfoTag;
@property (retain, nonatomic) NSString * recordProtectionInfoTag;
@property (retain, nonatomic) NSMutableArray * conflictLosersToResolves;
@property (readonly, nonatomic) char hasShareEtag;
@property (retain, nonatomic) NSString * shareEtag;
@property (readonly, nonatomic) char hasShareIDUpdate;
@property (retain, nonatomic) CKDPRecordSaveRequestShareIdUpdate * shareIDUpdate;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPRecordSaveRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (char)hasEtag;
- (NSString *)etag;
- (CKDPRecord *)record;
- (void)setRecord:(CKDPRecord *)arg0;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setShareEtag:(NSString *)arg0;
- (void)setZoneProtectionInfoTag:(NSString *)arg0;
- (char)hasZoneProtectionInfoTag;
- (NSString *)zoneProtectionInfoTag;
- (char)hasRecord;
- (void)addFieldsToDeleteIfExistOnMerge:(id)arg0;
- (void)addConflictLosersToResolve:(id)arg0;
- (unsigned int)fieldsToDeleteIfExistOnMergesCount;
- (void)clearFieldsToDeleteIfExistOnMerges;
- (NSObject *)fieldsToDeleteIfExistOnMergeAtIndex:(unsigned int)arg0;
- (void)setConflictLoserUpdate:(CKDPRecordSaveRequestConflictLoserUpdate *)arg0;
- (void)setRecordProtectionInfoTag:(NSString *)arg0;
- (unsigned int)conflictLosersToResolvesCount;
- (void)clearConflictLosersToResolves;
- (NSObject *)conflictLosersToResolveAtIndex:(unsigned int)arg0;
- (void)setShareIDUpdate:(CKDPRecordSaveRequestShareIdUpdate *)arg0;
- (void)setMerge:(char)arg0;
- (void)setHasMerge:(char)arg0;
- (char)hasMerge;
- (char)hasConflictLoserUpdate;
- (int)saveSemantics;
- (void)setSaveSemantics:(int)arg0;
- (void)setHasSaveSemantics:(char)arg0;
- (char)hasSaveSemantics;
- (char)hasRecordProtectionInfoTag;
- (char)hasShareEtag;
- (char)hasShareIDUpdate;
- (char)merge;
- (NSMutableArray *)fieldsToDeleteIfExistOnMerges;
- (void)setFieldsToDeleteIfExistOnMerges:(NSMutableArray *)arg0;
- (CKDPRecordSaveRequestConflictLoserUpdate *)conflictLoserUpdate;
- (NSString *)recordProtectionInfoTag;
- (NSMutableArray *)conflictLosersToResolves;
- (void)setConflictLosersToResolves:(NSMutableArray *)arg0;
- (NSString *)shareEtag;
- (CKDPRecordSaveRequestShareIdUpdate *)shareIDUpdate;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
