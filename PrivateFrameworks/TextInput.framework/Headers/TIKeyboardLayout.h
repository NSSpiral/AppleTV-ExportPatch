/* Runtime dump - TIKeyboardLayout
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardLayout : NSObject <NSSecureCoding>
{
    unsigned int _count;
    struct _ShortRect * _frames;
    unsigned int _framesCapacity;
    char * _strings;
    unsigned int _stringsSize;
    unsigned int _stringsCapacity;
}

+ (char)supportsSecureCoding;

- (void)dealloc;
- (TIKeyboardLayout *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TIKeyboardLayout *)initWithCapacity:(unsigned int)arg0;
- (void)addKeyWithString:(NSString *)arg0 frame:(struct CGRect)arg1;
- (void)ensureFrameCapacity:(unsigned int)arg0;
- (void)ensureStringCapacity:(unsigned int)arg0;
- (void)enumerateKeysUsingBlock:(id /* block */)arg0;

@end
