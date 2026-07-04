/* Runtime dump - asn1SequenceToken
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface asn1SequenceToken : asn1Token
{
    char * mReadPointer;
}

- (NSString *)description;
- (void)reset;
- (NSObject *)_initWithID:(unsigned int)arg0 class:(unsigned char)arg1 length:(unsigned int)arg2 content:(char *)arg3 opaque:(char)arg4;
- (NSString *)nextToken;

@end
