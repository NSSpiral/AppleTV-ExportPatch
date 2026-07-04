/* Runtime dump - IMLocationShareStatusChangeItem
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMLocationShareStatusChangeItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding>
{
    char _actionable;
    char _expired;
    NSString * _otherCountryCode;
    NSString * _otherHandle;
    NSString * _otherUnformattedID;
    long long _status;
    long long _direction;
}

@property (nonatomic) long long status;
@property (nonatomic) long long direction;
@property (nonatomic) char actionable;
@property (nonatomic) char expired;
@property (retain, nonatomic) NSString * otherHandle;
@property (retain, nonatomic) NSString * otherUnformattedID;
@property (retain, nonatomic) NSString * otherCountryCode;

- (NSDictionary *)copyDictionaryRepresentation;
- (void)dealloc;
- (IMLocationShareStatusChangeItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (IMLocationShareStatusChangeItem *)initWithDictionary:(NSDictionary *)arg0;
- (IMLocationShareStatusChangeItem *)copyWithZone:(struct _NSZone *)arg0;
- (void)setDirection:(long long)arg0;
- (long long)direction;
- (long long)status;
- (void)setStatus:(long long)arg0;
- (NSString *)otherUnformattedID;
- (void)setOtherUnformattedID:(NSString *)arg0;
- (NSString *)otherHandle;
- (void)setOtherHandle:(NSString *)arg0;
- (NSString *)otherCountryCode;
- (void)setOtherCountryCode:(NSString *)arg0;
- (char)actionable;
- (void)setActionable:(char)arg0;
- (char)expired;
- (void)setExpired:(char)arg0;

@end
