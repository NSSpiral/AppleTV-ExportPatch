/* Runtime dump - CKDPPulseData
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPulseData : PBCodable <NSCopying>
{
    long long _customState;
    long long _stateTTLMillis;
    CKDPDate * _lastCustom;
    CKDPDate * _lastEdited;
    CKDPDate * _lastInvisible;
    CKDPDate * _lastViewed;
    int _state;
    CKDPIdentifier * _user;
    struct ? _has;
}

@property (readonly, nonatomic) char hasUser;
@property (retain, nonatomic) CKDPIdentifier * user;
@property (nonatomic) char hasState;
@property (nonatomic) int state;
@property (nonatomic) char hasCustomState;
@property (nonatomic) long long customState;
@property (nonatomic) char hasStateTTLMillis;
@property (nonatomic) long long stateTTLMillis;
@property (readonly, nonatomic) char hasLastViewed;
@property (retain, nonatomic) CKDPDate * lastViewed;
@property (readonly, nonatomic) char hasLastEdited;
@property (retain, nonatomic) CKDPDate * lastEdited;
@property (readonly, nonatomic) char hasLastCustom;
@property (retain, nonatomic) CKDPDate * lastCustom;
@property (readonly, nonatomic) char hasLastInvisible;
@property (retain, nonatomic) CKDPDate * lastInvisible;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)state;
- (void)setState:(int)arg0;
- (CKDPPulseData *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (CKDPIdentifier *)user;
- (void)setHasState:(char)arg0;
- (char)hasState;
- (void)setUser:(CKDPIdentifier *)arg0;
- (void)setLastViewed:(CKDPDate *)arg0;
- (void)setLastEdited:(CKDPDate *)arg0;
- (void)setLastCustom:(CKDPDate *)arg0;
- (void)setLastInvisible:(CKDPDate *)arg0;
- (char)hasUser;
- (long long)customState;
- (void)setCustomState:(long long)arg0;
- (void)setHasCustomState:(char)arg0;
- (char)hasCustomState;
- (long long)stateTTLMillis;
- (void)setStateTTLMillis:(long long)arg0;
- (void)setHasStateTTLMillis:(char)arg0;
- (char)hasStateTTLMillis;
- (char)hasLastViewed;
- (char)hasLastEdited;
- (char)hasLastCustom;
- (char)hasLastInvisible;
- (CKDPDate *)lastViewed;
- (CKDPDate *)lastEdited;
- (CKDPDate *)lastCustom;
- (CKDPDate *)lastInvisible;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
