/* Runtime dump - NSXPCEncoder
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCEncoder : NSXPCCoder
{
    NSObject<OS_xpc_object> * _oolObjects;
    NSXPCConnection * _connection;
    struct __CFDictionary * _replacedObjects;
    struct __CFDictionary * _replacedByDelegateObjects;
    <NSXPCEncoderDelegate> * _delegate;
    char _askForReplacement;
    void * * _encoder;
    unsigned long long _genericIndex;
}

@property NSXPCConnection * _connection;
@property <NSXPCEncoderDelegate> * delegate;

+ (NSObject *)_dataWithXPCObject:(NSObject *)arg0;

- (void)encodeDataObject:(NSObject *)arg0;
- (void)_encodeArrayOfObjects:(NSArray *)arg0 forKey:(NSString *)arg1;
- (void)set_connection:(NSXPCConnection *)arg0;
- (void)_insertIntoXPCObject:(NSObject *)arg0;
- (void)_encodeCString:(char *)arg0 forKey:(NSString *)arg1;
- (void)encodeInvocation:(NSObject *)arg0;
- (NSObject *)_replaceObject:(NSObject *)arg0;
- (void)_checkObject:(NSObject *)arg0;
- (void)_encodeObject:(NSObject *)arg0;
- (NSObject *)_createRootXPCObject;
- (void)encodeValueOfObjCType:(char *)arg0 at:(void *)arg1;
- (void)dealloc;
- (void)encodeObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)encodeBool:(char)arg0 forKey:(NSString *)arg1;
- (void)setDelegate:(<NSXPCEncoderDelegate> *)arg0;
- (NSXPCEncoder *)init;
- (NSString *)debugDescription;
- (<NSXPCEncoderDelegate> *)delegate;
- (void)encodeInt:(int)arg0 forKey:(NSString *)arg1;
- (char)allowsKeyedCoding;
- (void)encodeInteger:(int)arg0 forKey:(NSString *)arg1;
- (void)encodeBytes:(char *)arg0 length:(unsigned int)arg1 forKey:(NSString *)arg2;
- (void)encodeFloat:(float)arg0 forKey:(NSString *)arg1;
- (void)encodeConditionalObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)encodeDouble:(double)arg0 forKey:(NSString *)arg1;
- (void)encodeXPCObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)encodeInt32:(int)arg0 forKey:(NSString *)arg1;
- (NSXPCConnection *)_connection;
- (void)encodeInt64:(long long)arg0 forKey:(NSString *)arg1;
- (void)encodeObject:(NSObject *)arg0;
- (void)finalize;

@end
