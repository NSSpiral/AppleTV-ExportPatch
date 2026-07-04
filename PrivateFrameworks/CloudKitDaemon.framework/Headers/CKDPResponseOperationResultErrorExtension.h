/* Runtime dump - CKDPResponseOperationResultErrorExtension
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPResponseOperationResultErrorExtension : PBCodable <NSCopying>
{
    NSString * _extensionName;
    unsigned int _typeCode;
    struct ? _has;
}

@property (readonly, nonatomic) char hasExtensionName;
@property (retain, nonatomic) NSString * extensionName;
@property (nonatomic) char hasTypeCode;
@property (nonatomic) unsigned int typeCode;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPResponseOperationResultErrorExtension *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)hasTypeCode;
- (NSString *)extensionName;
- (unsigned int)typeCode;
- (void)setExtensionName:(NSString *)arg0;
- (char)hasExtensionName;
- (void)setTypeCode:(unsigned int)arg0;
- (void)setHasTypeCode:(char)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
