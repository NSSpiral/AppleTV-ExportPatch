/* Runtime dump - GEOUserSessionEntity
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUserSessionEntity : NSObject
{
    struct ? _sessionID;
    unsigned int _sequenceNumber;
    double _sessionCreationTime;
}

@property struct ? sessionID;
@property unsigned int sequenceNumber;
@property double sessionCreationTime;
@property (readonly, nonatomic) NSString * sessionIDString;
@property (readonly, nonatomic) NSNumber * sessionIDLow;
@property (readonly, nonatomic) NSNumber * sessionIDHigh;
@property (readonly, nonatomic) NSString * sessionIDLowString;
@property (readonly, nonatomic) NSString * sessionIDHighString;

- (NSString *)description;
- (struct ?)sessionID;
- (void)setSessionID:(struct ?)arg0;
- (void)setSequenceNumber:(unsigned int)arg0;
- (unsigned int)sequenceNumber;
- (void)setSessionCreationTime:(double)arg0;
- (double)sessionCreationTime;
- (NSString *)sessionIDString;
- (NSString *)sessionIDHighString;
- (NSString *)sessionIDLowString;
- (NSNumber *)sessionIDLow;
- (NSNumber *)sessionIDHigh;
- (void)updateSessionIDFromUUIDString:(NSString *)arg0;

@end
