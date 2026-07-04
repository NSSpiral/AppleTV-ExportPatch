/* Runtime dump - CKDPProtectionInfo
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPProtectionInfo : PBCodable <NSCopying>
{
    NSData * _protectionInfo;
    NSString * _protectionInfoTag;
}

@property (readonly, nonatomic) char hasProtectionInfo;
@property (retain, nonatomic) NSData * protectionInfo;
@property (readonly, nonatomic) char hasProtectionInfoTag;
@property (retain, nonatomic) NSString * protectionInfoTag;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPProtectionInfo *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setProtectionInfo:(NSData *)arg0;
- (void)setProtectionInfoTag:(NSString *)arg0;
- (char)hasProtectionInfo;
- (char)hasProtectionInfoTag;
- (NSData *)protectionInfo;
- (NSString *)protectionInfoTag;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
