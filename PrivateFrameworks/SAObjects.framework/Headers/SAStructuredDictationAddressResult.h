/* Runtime dump - SAStructuredDictationAddressResult
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStructuredDictationAddressResult : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * addressLabel;
@property (copy, nonatomic) NSURL * contactId;
@property (copy, nonatomic) NSString * contactName;
@property (copy, nonatomic) NSData * forwardGeoProtobuf;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)structuredDictationAddressResult;
+ (NSDictionary *)structuredDictationAddressResultWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)contactName;
- (NSString *)encodedClassName;
- (NSString *)addressLabel;
- (void)setAddressLabel:(NSString *)arg0;
- (NSURL *)contactId;
- (void)setContactId:(NSURL *)arg0;
- (void)setContactName:(NSString *)arg0;
- (NSData *)forwardGeoProtobuf;
- (void)setForwardGeoProtobuf:(NSData *)arg0;

@end
