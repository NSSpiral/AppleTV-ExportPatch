/* Runtime dump - asn1IntegerToken
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface asn1IntegerToken : asn1Token
{
    unsigned long long mValue;
}

@property (readonly) unsigned long long value;

- (NSString *)description;
- (unsigned long long)value;
- (NSObject *)_initWithID:(unsigned int)arg0 class:(unsigned char)arg1 length:(unsigned int)arg2 content:(char *)arg3 opaque:(char)arg4;

@end
