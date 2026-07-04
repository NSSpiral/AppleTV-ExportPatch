/* Runtime dump - IMGroupTitleChangeItem
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMGroupTitleChangeItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding>
{
    NSString * _title;
    NSString * _otherCountryCode;
    NSString * _otherHandle;
    NSString * _otherUnformattedID;
}

@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * otherHandle;
@property (retain, nonatomic) NSString * otherUnformattedID;
@property (retain, nonatomic) NSString * otherCountryCode;

- (NSDictionary *)copyDictionaryRepresentation;
- (void)dealloc;
- (IMGroupTitleChangeItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setTitle:(NSString *)arg0;
- (IMGroupTitleChangeItem *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)title;
- (IMGroupTitleChangeItem *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)otherUnformattedID;
- (void)setOtherUnformattedID:(NSString *)arg0;
- (NSString *)otherHandle;
- (void)setOtherHandle:(NSString *)arg0;
- (NSString *)otherCountryCode;
- (void)setOtherCountryCode:(NSString *)arg0;

@end
