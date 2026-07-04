/* Runtime dump - CKDPPulseRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPulseRequest : PBRequest <NSCopying>
{
    long long _lookbackWindowMillis;
    int _apnsEnv;
    NSString * _etag;
    CKDPPulseData * _pulseData;
    NSData * _pushToken;
    CKDPShareIdentifier * _shareId;
    char _reset;
    struct ? _has;
}

@property (readonly, nonatomic) char hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier * shareId;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString * etag;
@property (readonly, nonatomic) char hasPushToken;
@property (retain, nonatomic) NSData * pushToken;
@property (readonly, nonatomic) char hasPulseData;
@property (retain, nonatomic) CKDPPulseData * pulseData;
@property (nonatomic) char hasReset;
@property (nonatomic) char reset;
@property (nonatomic) char hasLookbackWindowMillis;
@property (nonatomic) long long lookbackWindowMillis;
@property (nonatomic) char hasApnsEnv;
@property (nonatomic) int apnsEnv;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (char)reset;
- (CKDPPulseRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (char)hasEtag;
- (NSString *)etag;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setShareId:(CKDPShareIdentifier *)arg0;
- (char)hasShareId;
- (CKDPShareIdentifier *)shareId;
- (void)setApnsEnv:(int)arg0;
- (void)setHasApnsEnv:(char)arg0;
- (char)hasApnsEnv;
- (int)apnsEnv;
- (void)setPushToken:(NSData *)arg0;
- (void)setPulseData:(CKDPPulseData *)arg0;
- (char)hasPushToken;
- (char)hasPulseData;
- (void)setReset:(char)arg0;
- (void)setHasReset:(char)arg0;
- (char)hasReset;
- (long long)lookbackWindowMillis;
- (void)setLookbackWindowMillis:(long long)arg0;
- (void)setHasLookbackWindowMillis:(char)arg0;
- (char)hasLookbackWindowMillis;
- (NSData *)pushToken;
- (CKDPPulseData *)pulseData;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
