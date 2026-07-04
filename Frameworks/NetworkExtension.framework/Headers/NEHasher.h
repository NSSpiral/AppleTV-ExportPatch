/* Runtime dump - NEHasher
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEHasher : NSCoder
{
    struct CC_SHA1state_st * _sha1Context;
}

@property struct CC_SHA1state_st * sha1Context;

+ (NSObject *)hashObject:(NSObject *)arg0;

- (void)encodeDataObject:(NSObject *)arg0;
- (NSString *)decodePropertyListForKey:(NSString *)arg0;
- (void)encodeValueOfObjCType:(char *)arg0 at:(void *)arg1;
- (id)finishHashing;
- (void)setSha1Context:(struct CC_SHA1state_st *)arg0;
- (struct CC_SHA1state_st *)sha1Context;
- (void)dealloc;
- (NSString *)decodeObjectForKey:(NSString *)arg0;
- (char)decodeBoolForKey:(NSString *)arg0;
- (char)containsValueForKey:(NSString *)arg0;
- (void)encodeObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)encodeBool:(char)arg0 forKey:(NSString *)arg1;
- (NEHasher *)init;
- (void)encodeInt:(int)arg0 forKey:(NSString *)arg1;
- (int)decodeIntForKey:(NSString *)arg0;
- (char)allowsKeyedCoding;
- (int)decodeIntegerForKey:(NSString *)arg0;
- (char *)decodeBytesForKey:(SEL)arg0 returnedLength:(id)arg1;
- (float)decodeFloatForKey:(NSString *)arg0;
- (void)encodeInteger:(int)arg0 forKey:(NSString *)arg1;
- (void)encodeBytes:(char *)arg0 length:(unsigned int)arg1 forKey:(NSString *)arg2;
- (void)encodeFloat:(float)arg0 forKey:(NSString *)arg1;
- (NSObject *)decodeObjectOfClass:(Class)arg0 forKey:(NSString *)arg1;
- (void)encodeConditionalObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (double)decodeDoubleForKey:(NSString *)arg0;
- (void)encodeDouble:(double)arg0 forKey:(NSString *)arg1;
- (NSArray *)decodeObjectOfClasses:(NSArray *)arg0 forKey:(NSString *)arg1;
- (long long)decodeInt64ForKey:(NSString *)arg0;
- (void)decodeValueOfObjCType:(char *)arg0 at:(void *)arg1;
- (int)decodeInt32ForKey:(NSString *)arg0;
- (NSObject *)decodeDataObject;
- (int)versionForClassName:(NSString *)arg0;
- (void)encodeInt32:(int)arg0 forKey:(NSString *)arg1;
- (void)encodeInt64:(long long)arg0 forKey:(NSString *)arg1;
- (void)encodeBytes:(void *)arg0 length:(void)arg1;

@end
