/* Runtime dump - IMGroupActionItem
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMGroupActionItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding>
{
    NSString * _otherCountryCode;
    NSString * _otherHandle;
    NSString * _otherUnformattedID;
    long long _actionType;
}

@property (nonatomic) long long actionType;
@property (retain, nonatomic) NSString * otherHandle;
@property (retain, nonatomic) NSString * otherUnformattedID;
@property (retain, nonatomic) NSString * otherCountryCode;

- (NSDictionary *)copyDictionaryRepresentation;
- (void)dealloc;
- (IMGroupActionItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (IMGroupActionItem *)initWithDictionary:(NSDictionary *)arg0;
- (IMGroupActionItem *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)otherUnformattedID;
- (void)setOtherUnformattedID:(NSString *)arg0;
- (NSString *)otherHandle;
- (void)setOtherHandle:(NSString *)arg0;
- (NSString *)otherCountryCode;
- (void)setOtherCountryCode:(NSString *)arg0;
- (void)setActionType:(long long)arg0;
- (long long)actionType;

@end
