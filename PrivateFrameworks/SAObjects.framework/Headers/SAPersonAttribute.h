/* Runtime dump - SAPersonAttribute
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPersonAttribute : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * data;
@property (copy, nonatomic) NSString * displayText;
@property (retain, nonatomic) SAPerson * object;
@property (retain, nonatomic) <SAAceSerializable> * typedData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)personAttribute;
+ (NSDictionary *)personAttributeWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (id)af_contactAddressValue;
- (NSString *)displayText;
- (NSString *)groupIdentifier;
- (NSString *)data;
- (void)setData:(NSString *)arg0;
- (SAPerson *)object;
- (void)setObject:(SAPerson *)arg0;
- (NSString *)encodedClassName;
- (void)setDisplayText:(NSString *)arg0;
- (<SAAceSerializable> *)typedData;
- (void)setTypedData:(<SAAceSerializable> *)arg0;

@end
