/* Runtime dump - XPCDecoder
 * Image: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

@interface XPCDecoder : NSCoder
{
    NSObject<OS_xpc_object> * _encoding;
    NSObject<OS_xpc_object> * _currentObject;
    struct __CFDictionary * _decodedObjects;
    struct __CFSet * _requestedDecodedObjects;
    NSArray * _allowedClasses;
    NSString * _errorDescription;
}

@property (copy, nonatomic) NSString * errorDescription;

+ (NSString *)rootObjectForEncoding:(NSString *)arg0 allowedClasses:(NSArray *)arg1 errorDescription:(NSString *)arg2;
+ (NSString *)rootObjectForEncoding:(NSString *)arg0 allowedClasses:(NSArray *)arg1;
+ (NSString *)rootObjectForEncoding:(NSString *)arg0;

- (void)dealloc;
- (NSString *)decodeObjectForKey:(NSString *)arg0;
- (char)decodeBoolForKey:(NSString *)arg0;
- (char)containsValueForKey:(NSString *)arg0;
- (int)decodeIntForKey:(NSString *)arg0;
- (char)allowsKeyedCoding;
- (int)decodeIntegerForKey:(NSString *)arg0;
- (char *)decodeBytesForKey:(SEL)arg0 returnedLength:(id)arg1;
- (float)decodeFloatForKey:(NSString *)arg0;
- (double)decodeDoubleForKey:(NSString *)arg0;
- (long long)decodeInt64ForKey:(NSString *)arg0;
- (int)decodeInt32ForKey:(NSString *)arg0;
- (NSObject *)decodeObject;
- (int)versionForClassName:(NSString *)arg0;
- (XPCDecoder *)initWithEncoding:(NSObject<OS_xpc_object> *)arg0;
- (void)setErrorDescription:(NSString *)arg0;
- (NSString *)errorDescription;
- (void)_verifyCurrentObject;
- (char)_classIsAllowed:(Class)arg0;
- (NSString *)decodeEndpointForKey:(NSString *)arg0;
- (unsigned int)decodeMachSendRightForKey:(NSString *)arg0;

@end
