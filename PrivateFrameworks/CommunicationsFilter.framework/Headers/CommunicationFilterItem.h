/* Runtime dump - CommunicationFilterItem
 * Image: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
 */

@interface CommunicationFilterItem : NSObject
{
    struct __CFPhoneNumber * _phoneNumber;
    NSString * _emailAddress;
}

@property (readonly, nonatomic) struct __CFPhoneNumber * phoneNumber;
@property (readonly, nonatomic) NSString * emailAddress;
@property (readonly, nonatomic) NSString * unformattedID;

- (void)dealloc;
- (NSString *)description;
- (struct __CFPhoneNumber *)phoneNumber;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)emailAddress;
- (CommunicationFilterItem *)initWithEmailAddress:(NSString *)arg0;
- (char)matchesFilterItem:(NSObject *)arg0;
- (id)_dictionaryRepresentationWithRedaction;
- (char)_acceptItemType:(NSObject *)arg0;
- (char)_acceptVersion:(NSString *)arg0;
- (CommunicationFilterItem *)initWithPhoneNumber:(struct __CFPhoneNumber *)arg0;
- (NSString *)unformattedID;
- (CommunicationFilterItem *)initWithDictionaryRepresentation:(NSDictionary *)arg0;
- (char)isPhoneNumber;

@end
