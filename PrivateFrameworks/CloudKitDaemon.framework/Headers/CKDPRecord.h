/* Runtime dump - CKDPRecord
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecord : PBCodable <NSCopying>
{
    NSMutableArray * _conflictLoserEtags;
    CKDPIdentifier * _createdBy;
    NSString * _etag;
    NSMutableArray * _fields;
    CKDPIdentifier * _modifiedBy;
    NSString * _modifiedByDevice;
    int _permission;
    NSMutableArray * _pluginFields;
    CKDPProtectionInfo * _protectionInfo;
    CKDPRecordIdentifier * _recordIdentifier;
    CKDPShareIdentifier * _shareId;
    CKDPDateStatistics * _timeStatistics;
    CKDPRecordType * _type;
    struct ? _has;
}

@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString * etag;
@property (readonly, nonatomic) char hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier * recordIdentifier;
@property (readonly, nonatomic) char hasType;
@property (retain, nonatomic) CKDPRecordType * type;
@property (readonly, nonatomic) char hasCreatedBy;
@property (retain, nonatomic) CKDPIdentifier * createdBy;
@property (readonly, nonatomic) char hasTimeStatistics;
@property (retain, nonatomic) CKDPDateStatistics * timeStatistics;
@property (retain, nonatomic) NSMutableArray * fields;
@property (readonly, nonatomic) char hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier * shareId;
@property (readonly, nonatomic) char hasModifiedBy;
@property (retain, nonatomic) CKDPIdentifier * modifiedBy;
@property (retain, nonatomic) NSMutableArray * conflictLoserEtags;
@property (readonly, nonatomic) char hasModifiedByDevice;
@property (retain, nonatomic) NSString * modifiedByDevice;
@property (retain, nonatomic) NSMutableArray * pluginFields;
@property (readonly, nonatomic) char hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo * protectionInfo;
@property (nonatomic) char hasPermission;
@property (nonatomic) int permission;

+ (NSData *)recordFromData:(NSData *)arg0;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(CKDPRecordType *)arg0;
- (CKDPRecordType *)type;
- (CKDPRecord *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (char)hasEtag;
- (NSString *)etag;
- (NSMutableArray *)conflictLoserEtags;
- (void)setConflictLoserEtags:(NSMutableArray *)arg0;
- (void)setPluginFields:(NSMutableArray *)arg0;
- (int)permission;
- (NSString *)modifiedByDevice;
- (NSMutableArray *)pluginFields;
- (void)setProtectionInfo:(CKDPProtectionInfo *)arg0;
- (char)hasProtectionInfo;
- (CKDPProtectionInfo *)protectionInfo;
- (void)setRecordIdentifier:(CKDPRecordIdentifier *)arg0;
- (char)hasRecordIdentifier;
- (CKDPRecordIdentifier *)recordIdentifier;
- (void)addFields:(SADomainObject *)arg0;
- (void)clearFields;
- (void)_inflateFieldsFromData:(NSData *)arg0;
- (NSData *)fieldData;
- (NSString *)fieldForKey:(NSString *)arg0;
- (void)setShareId:(CKDPShareIdentifier *)arg0;
- (char)hasShareId;
- (CKDPShareIdentifier *)shareId;
- (void)setTimeStatistics:(CKDPDateStatistics *)arg0;
- (char)hasTimeStatistics;
- (CKDPDateStatistics *)timeStatistics;
- (void)addConflictLoserEtags:(id)arg0;
- (void)addPluginFields:(NSArray *)arg0;
- (void)setCreatedBy:(CKDPIdentifier *)arg0;
- (unsigned int)fieldsCount;
- (NSObject *)fieldsAtIndex:(unsigned int)arg0;
- (void)setModifiedBy:(CKDPIdentifier *)arg0;
- (unsigned int)conflictLoserEtagsCount;
- (void)clearConflictLoserEtags;
- (NSObject *)conflictLoserEtagsAtIndex:(unsigned int)arg0;
- (void)setModifiedByDevice:(NSString *)arg0;
- (unsigned int)pluginFieldsCount;
- (void)clearPluginFields;
- (NSObject *)pluginFieldsAtIndex:(unsigned int)arg0;
- (char)hasCreatedBy;
- (char)hasModifiedBy;
- (char)hasModifiedByDevice;
- (void)setPermission:(int)arg0;
- (void)setHasPermission:(char)arg0;
- (char)hasPermission;
- (CKDPIdentifier *)createdBy;
- (NSMutableArray *)fields;
- (void)setFields:(NSMutableArray *)arg0;
- (CKDPIdentifier *)modifiedBy;
- (char)hasType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (NSData *)dataRepresentation;

@end
