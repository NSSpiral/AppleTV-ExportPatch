/* Runtime dump - XPCEncoder
 * Image: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

@interface XPCEncoder : NSCoder
{
    NSObject<OS_xpc_object> * _encoding;
    NSObject<OS_xpc_object> * _currentObject;
    struct __CFDictionary * _encodedObjects;
    struct __CFDictionary * _conditionalObjects;
    unsigned int _nextConditionalObjectID;
    struct __CFDictionary * _replacementObjects;
}

+ (NSObject *)copyEncodingForRootObject:(NSObject *)arg0;

- (void)encodeRootObject:(NSObject *)arg0;
- (void)dealloc;
- (void)encodeObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)encodeBool:(char)arg0 forKey:(NSString *)arg1;
- (XPCEncoder *)init;
- (void)encodeInt:(int)arg0 forKey:(NSString *)arg1;
- (char)allowsKeyedCoding;
- (void)encodeInteger:(int)arg0 forKey:(NSString *)arg1;
- (void)encodeBytes:(char *)arg0 length:(unsigned int)arg1 forKey:(NSString *)arg2;
- (void)encodeFloat:(float)arg0 forKey:(NSString *)arg1;
- (void)encodeConditionalObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)encodeDouble:(double)arg0 forKey:(NSString *)arg1;
- (int)versionForClassName:(NSString *)arg0;
- (void)encodeInt32:(int)arg0 forKey:(NSString *)arg1;
- (void)encodeInt64:(long long)arg0 forKey:(NSString *)arg1;
- (NSObject<OS_xpc_object> *)encoding;
- (void)_fixUpConditionalObjects;
- (NSObject *)_replacementObjectForObject:(NSObject *)arg0;
- (void)_verifyCurrentObject;
- (void)encodeEndpoint:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)encodeMachSendRight:(unsigned int)arg0 forKey:(NSString *)arg1;

@end
