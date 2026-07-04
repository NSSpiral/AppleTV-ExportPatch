/* Runtime dump - WKRemoteObjectDecoder
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKRemoteObjectDecoder : NSCoder
{
    struct RetainPtr<_WKRemoteObjectInterface> _interface;
    struct ImmutableDictionary * _rootDictionary;
    struct ImmutableDictionary * _currentDictionary;
    struct Array * _objectStream;
    unsigned long _objectStreamPosition;
    NSSet * _allowedClasses;
}

- (NSSet *)allowedClasses;
- (NSString *)decodeObjectForKey:(NSString *)arg0;
- (char)decodeBoolForKey:(NSString *)arg0;
- (char)containsValueForKey:(NSString *)arg0;
- (char)allowsKeyedCoding;
- (int)decodeIntegerForKey:(NSString *)arg0;
- (char *)decodeBytesForKey:(SEL)arg0 returnedLength:(id)arg1;
- (double)decodeDoubleForKey:(NSString *)arg0;
- (void).cxx_construct;
- (NSArray *)decodeObjectOfClasses:(NSArray *)arg0 forKey:(NSString *)arg1;
- (long long)decodeInt64ForKey:(NSString *)arg0;
- (void)decodeValueOfObjCType:(char *)arg0 at:(void *)arg1;
- (void).cxx_destruct;
- (WKRemoteObjectDecoder *)initWithInterface:(struct RetainPtr<_WKRemoteObjectInterface>)arg0 rootObjectDictionary:(struct ImmutableDictionary *)arg1;
- (char)requiresSecureCoding;

@end
