/* Runtime dump - WKRemoteObjectEncoder
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKRemoteObjectEncoder : NSCoder
{
    struct RefPtr<WebKit::MutableDictionary> _rootDictionary;
    struct Array * _objectStream;
    struct MutableDictionary * _currentDictionary;
}

- (void)encodeValueOfObjCType:(char *)arg0 at:(void *)arg1;
- (void)encodeObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)encodeBool:(char)arg0 forKey:(NSString *)arg1;
- (WKRemoteObjectEncoder *)init;
- (char)allowsKeyedCoding;
- (void)encodeInteger:(int)arg0 forKey:(NSString *)arg1;
- (void)encodeBytes:(char *)arg0 length:(unsigned int)arg1 forKey:(NSString *)arg2;
- (void)encodeDouble:(double)arg0 forKey:(NSString *)arg1;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct ImmutableDictionary *)rootObjectDictionary;
- (void)encodeInt64:(long long)arg0 forKey:(NSString *)arg1;
- (char)requiresSecureCoding;

@end
