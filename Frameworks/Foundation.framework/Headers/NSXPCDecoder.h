/* Runtime dump - NSXPCDecoder
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCDecoder : NSXPCCoder
{
    NSObject<OS_xpc_object> * _oolObjects;
    NSXPCInterface * _interface;
    SEL _replyToSelector;
    unsigned long long _genericIndex;
    void * * _decoder;
    NSXPCConnection * _connection;
    id _collections;
    struct ? _rootObject;
    unsigned int _collectionPointer;
    id _allowedClassesList;
    int _allowedClassesIndex;
}

@property (retain) NSXPCInterface * interface;
@property SEL replyToSelector;
@property NSXPCConnection * _connection;

+ (NSData *)_createXPCObjectWithData:(NSData *)arg0;

- (NSArray *)allowedClasses;
- (NSString *)_decodeArrayOfObjectsForKey:(NSString *)arg0;
- (void)_validateAllowedClass:(Class)arg0 forKey:(NSString *)arg1 allowingInvocations:(char)arg2;
- (NSObject *)_initWithRootXPCObject:(NSObject *)arg0;
- (void)setReplyToSelector:(SEL)arg0;
- (void)set_connection:(NSXPCConnection *)arg0;
- (char *)_decodeCStringForKey:(SEL)arg0;
- (NSObject *)decodeInvocation;
- (SEL)replyToSelector;
- (void)dealloc;
- (NSString *)decodeObjectForKey:(NSString *)arg0;
- (char)decodeBoolForKey:(NSString *)arg0;
- (char)containsValueForKey:(NSString *)arg0;
- (NSString *)debugDescription;
- (int)decodeIntForKey:(NSString *)arg0;
- (char)allowsKeyedCoding;
- (int)decodeIntegerForKey:(NSString *)arg0;
- (char *)decodeBytesForKey:(SEL)arg0 returnedLength:(id)arg1;
- (float)decodeFloatForKey:(NSString *)arg0;
- (NSObject *)decodeObjectOfClass:(Class)arg0 forKey:(NSString *)arg1;
- (double)decodeDoubleForKey:(NSString *)arg0;
- (NSString *)decodeXPCObjectForKey:(NSString *)arg0;
- (NSObject *)decodeXPCObjectOfType:(struct _xpc_type_s *)arg0 forKey:(NSString *)arg1;
- (NSArray *)decodeObjectOfClasses:(NSArray *)arg0 forKey:(NSString *)arg1;
- (long long)decodeInt64ForKey:(NSString *)arg0;
- (void)decodeValueOfObjCType:(char *)arg0 at:(void *)arg1;
- (int)decodeInt32ForKey:(NSString *)arg0;
- (NSObject *)decodeObject;
- (NSXPCConnection *)_connection;
- (NSXPCInterface *)interface;
- (void)setInterface:(NSXPCInterface *)arg0;
- (void)finalize;

@end
