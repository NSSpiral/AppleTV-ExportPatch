/* Runtime dump - asn1ReceiptToken
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface asn1ReceiptToken : NSObject
{
    unsigned int mType;
    unsigned int mTypeVersion;
    asn1Token * mContentToken;
}

@property (readonly) unsigned int type;
@property (readonly) unsigned int typeVersion;
@property (readonly) asn1Token * contentToken;
@property (readonly) NSString * stringValue;
@property (readonly) unsigned long long integerValue;

+ (NSObject *)readFromBuffer:(char *)arg0;

- (void)dealloc;
- (NSString *)description;
- (unsigned long long)integerValue;
- (unsigned int)type;
- (NSString *)stringValue;
- (asn1Token *)contentToken;
- (NSObject *)_initWithType:(unsigned int)arg0 typeVersion:(unsigned int)arg1 contentToken:(asn1Token *)arg2;
- (unsigned int)typeVersion;

@end
