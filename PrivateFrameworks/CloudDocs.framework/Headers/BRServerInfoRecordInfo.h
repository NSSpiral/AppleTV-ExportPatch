/* Runtime dump - BRServerInfoRecordInfo
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRServerInfoRecordInfo : PBCodable <NSCopying>
{
    unsigned long long _bounceNo;
    NSData * _encryptedBasename;
    NSString * _etag;
    NSString * _extension;
    NSString * _recordID;
    NSData * _recordProtectionInfo;
    NSString * _zoneName;
    NSData * _zoneProtectionInfo;
    struct ? _has;
}

@property (readonly, nonatomic) char hasRecordID;
@property (retain, nonatomic) NSString * recordID;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString * etag;
@property (readonly, nonatomic) char hasEncryptedBasename;
@property (retain, nonatomic) NSData * encryptedBasename;
@property (nonatomic) char hasBounceNo;
@property (nonatomic) unsigned long long bounceNo;
@property (readonly, nonatomic) char hasExtension;
@property (retain, nonatomic) NSString * extension;
@property (readonly, nonatomic) char hasRecordProtectionInfo;
@property (retain, nonatomic) NSData * recordProtectionInfo;
@property (readonly, nonatomic) char hasZoneName;
@property (retain, nonatomic) NSString * zoneName;
@property (readonly, nonatomic) char hasZoneProtectionInfo;
@property (retain, nonatomic) NSData * zoneProtectionInfo;

- (void)setZoneName:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (BRServerInfoRecordInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void)setExtension:(NSString *)arg0;
- (NSString *)extension;
- (NSDictionary *)dictionaryRepresentation;
- (void)setEncryptedBasename:(NSData *)arg0;
- (void)setRecordProtectionInfo:(NSData *)arg0;
- (void)setZoneProtectionInfo:(NSData *)arg0;
- (char)hasRecordID;
- (char)hasEncryptedBasename;
- (void)setBounceNo:(unsigned long long)arg0;
- (void)setHasBounceNo:(char)arg0;
- (char)hasBounceNo;
- (char)hasExtension;
- (char)hasRecordProtectionInfo;
- (char)hasZoneName;
- (char)hasZoneProtectionInfo;
- (NSData *)encryptedBasename;
- (unsigned long long)bounceNo;
- (NSData *)recordProtectionInfo;
- (NSData *)zoneProtectionInfo;
- (void)setEtag:(NSString *)arg0;
- (char)hasEtag;
- (NSString *)etag;
- (NSString *)zoneName;
- (NSString *)recordID;
- (void)setRecordID:(NSString *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
