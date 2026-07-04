/* Runtime dump - UINibCoderValue
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINibCoderValue : NSObject
{
    NSString * key;
    unsigned int scope;
    char type;
    id value;
    unsigned long length;
}

+ (UINibCoderValue *)nibValueForInt8:(unsigned char)arg0 key:(NSString *)arg1 scope:(unsigned int)arg2;
+ (UINibCoderValue *)nibValueForInt16:(unsigned short)arg0 key:(NSString *)arg1 scope:(unsigned int)arg2;
+ (UINibCoderValue *)nibValueForInt32:(unsigned int)arg0 key:(NSString *)arg1 scope:(unsigned int)arg2;
+ (UINibCoderValue *)nibValueForInt64:(unsigned long long)arg0 key:(NSString *)arg1 scope:(unsigned int)arg2;
+ (NSObject *)nibValueForObjectReference:(long long)arg0 key:(NSString *)arg1 scope:(unsigned int)arg2;
+ (UINibCoderValue *)nibValueForInteger:(unsigned long long)arg0 key:(NSString *)arg1 scope:(unsigned int)arg2;
+ (UINibCoderValue *)nibValueForBoolean:(char)arg0 key:(NSString *)arg1 scope:(unsigned int)arg2;
+ (UINibCoderValue *)nibValueForDouble:(double)arg0 key:(NSString *)arg1 scope:(unsigned int)arg2;
+ (UINibCoderValue *)nibValueForFloat:(float)arg0 key:(NSString *)arg1 scope:(unsigned int)arg2;
+ (NSData *)nibValueForBytes:(void *)arg0 length:(void)arg1 key:(unsigned long)arg2 scope:(unsigned int)arg3;
+ (NSString *)nibValueRepresentingNilReferenceForKey:(NSString *)arg0 scope:(unsigned int)arg1;

- (void)dealloc;
- (unsigned long)byteLength;

@end
