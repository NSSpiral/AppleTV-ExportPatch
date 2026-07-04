/* Runtime dump - IDSSockAddrWrapper
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSockAddrWrapper : NSObject <NSCopying>
{
    struct sockaddr_storage _sa;
}

@property (readonly, nonatomic) struct sockaddr * sa;
@property (readonly, nonatomic) struct sockaddr_in * sa4;
@property (readonly, nonatomic) struct sockaddr_in6 * sa6;
@property (readonly, nonatomic) unsigned short saPortHostOrder;

+ (NSString *)wrapperWithAddressString:(NSString *)arg0 withPortHostOrder:(unsigned short)arg1 withInterfaceName:(NSString *)arg2;
+ (IDSSockAddrWrapper *)wrapperWithSockAddr:(struct sockaddr *)arg0;
+ (NSString *)wrapperWithAddressString:(NSString *)arg0 withPortHostOrder:(unsigned short)arg1;
+ (NSObject *)wrapperWithWrapper:(NSObject *)arg0 andPortHostOrder:(unsigned short)arg1;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (IDSSockAddrWrapper *)copyWithZone:(struct _NSZone *)arg0;
- (struct sockaddr *)sa;
- (IDSSockAddrWrapper *)initWithSockAddr:(struct sockaddr *)arg0;
- (struct sockaddr_in *)sa4;
- (struct sockaddr_in6 *)sa6;
- (char)isEqualToWrapper:(NSObject *)arg0;
- (unsigned short)saPortHostOrder;
- (char)isEqualToSockAddr:(struct sockaddr *)arg0;
- (NSData *)ipData;
- (NSString *)ipString;
- (void)copySockAddr:(struct sockaddr *)arg0;

@end
