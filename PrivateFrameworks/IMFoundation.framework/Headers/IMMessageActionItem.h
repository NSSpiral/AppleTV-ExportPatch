/* Runtime dump - IMMessageActionItem
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMMessageActionItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding>
{
    NSString * _otherCountryCode;
    NSString * _otherHandle;
    NSString * _otherUnformattedID;
    NSString * _originalMessageGUID;
    long long _actionType;
}

@property (nonatomic) long long actionType;
@property (retain, nonatomic) NSString * otherHandle;
@property (retain, nonatomic) NSString * otherUnformattedID;
@property (retain, nonatomic) NSString * otherCountryCode;
@property (retain, nonatomic) NSString * originalMessageGUID;

- (NSDictionary *)copyDictionaryRepresentation;
- (void)dealloc;
- (IMMessageActionItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (IMMessageActionItem *)initWithDictionary:(NSDictionary *)arg0;
- (IMMessageActionItem *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)otherUnformattedID;
- (void)setOtherUnformattedID:(NSString *)arg0;
- (NSString *)otherHandle;
- (void)setOtherHandle:(NSString *)arg0;
- (NSString *)otherCountryCode;
- (void)setOtherCountryCode:(NSString *)arg0;
- (NSString *)originalMessageGUID;
- (void)setOriginalMessageGUID:(NSString *)arg0;
- (void)setActionType:(long long)arg0;
- (long long)actionType;

@end
