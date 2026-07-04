/* Runtime dump - AFLocation
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFLocation : NSObject <AFTranscriptionType>
{
    NSURL * _addressBookID;
    NSString * _addressLabel;
    NSString * _contactName;
    NSData * _geoResult;
    int _resultType;
}

@property (copy, nonatomic) NSURL * addressBookID;
@property (copy, nonatomic) NSString * addressLabel;
@property (copy, nonatomic) NSString * contactName;
@property (copy, nonatomic) NSData * geoResult;
@property (nonatomic) int resultType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (AFLocation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (NSURL *)addressBookID;
- (void)setAddressBookID:(NSURL *)arg0;
- (NSData *)geoResult;
- (void)setGeoResult:(NSData *)arg0;
- (NSString *)contactName;
- (void)setResultType:(int)arg0;
- (NSString *)addressLabel;
- (void)setAddressLabel:(NSString *)arg0;
- (void)setContactName:(NSString *)arg0;
- (int)resultType;

@end
