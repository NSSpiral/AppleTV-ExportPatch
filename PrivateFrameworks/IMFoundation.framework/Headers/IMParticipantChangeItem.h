/* Runtime dump - IMParticipantChangeItem
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMParticipantChangeItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding>
{
    NSString * _otherCountryCode;
    NSString * _otherHandle;
    NSString * _otherUnformattedID;
    long long _changeType;
}

@property (nonatomic) long long changeType;
@property (retain, nonatomic) NSString * otherHandle;
@property (retain, nonatomic) NSString * otherUnformattedID;
@property (retain, nonatomic) NSString * otherCountryCode;

- (NSDictionary *)copyDictionaryRepresentation;
- (void)dealloc;
- (IMParticipantChangeItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (IMParticipantChangeItem *)initWithDictionary:(NSDictionary *)arg0;
- (IMParticipantChangeItem *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)otherUnformattedID;
- (void)setOtherUnformattedID:(NSString *)arg0;
- (NSString *)otherHandle;
- (void)setOtherHandle:(NSString *)arg0;
- (NSString *)otherCountryCode;
- (void)setOtherCountryCode:(NSString *)arg0;
- (void)setChangeType:(long long)arg0;
- (long long)changeType;

@end
