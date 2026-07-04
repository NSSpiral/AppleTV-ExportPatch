/* Runtime dump - CNInstantMessageAddress
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNInstantMessageAddress : NSObject <NSCopying>
{
    NSString * _username;
    NSString * _service;
}

@property (readonly, copy) NSString * username;
@property (readonly, copy) NSString * service;

+ (CNInstantMessageAddress *)instantMessageAddressWithUsername:(NSString *)arg0 service:(NSString *)arg1;

- (CNInstantMessageAddress *)initWithUsername:(NSString *)arg0 service:(NSString *)arg1;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (CNInstantMessageAddress *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)service;
- (NSDictionary *)addressDictionary;
- (NSString *)username;

@end
