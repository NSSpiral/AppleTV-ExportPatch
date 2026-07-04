/* Runtime dump - asn1OSToken
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface asn1OSToken : asn1Token
{
    asn1Token * mValue;
}

@property (readonly) asn1Token * value;

- (void)dealloc;
- (asn1Token *)value;
- (NSString *)stringValue;
- (NSObject *)_initWithID:(unsigned int)arg0 class:(unsigned char)arg1 length:(unsigned int)arg2 content:(char *)arg3 opaque:(char)arg4;

@end
