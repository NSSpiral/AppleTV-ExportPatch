/* Runtime dump - asn1Token
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface asn1Token : NSObject
{
    unsigned char mClass;
    unsigned int mIdentifier;
    unsigned int mLength;
    char * mContent;
}

@property (readonly) unsigned char tokenClass;
@property (readonly) unsigned int identifier;
@property (readonly) unsigned int length;
@property (readonly) char * content;

+ (NSObject *)readTokenFromBuffer:(char *)arg0 opaque:(char)arg1;
+ (NSObject *)readTokenFromBuffer:(char *)arg0;
+ (NSObject *)readOpaqueTokenFromBuffer:(char *)arg0;

- (NSString *)description;
- (unsigned int)length;
- (unsigned int)identifier;
- (char *)content;
- (NSObject *)_initWithID:(unsigned int)arg0 class:(unsigned char)arg1 length:(unsigned int)arg2 content:(char *)arg3 opaque:(char)arg4;
- (unsigned char)tokenClass;

@end
