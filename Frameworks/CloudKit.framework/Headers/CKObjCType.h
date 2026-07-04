/* Runtime dump - CKObjCType
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKObjCType : NSObject
{
    int _code;
    NSString * _encoding;
    NSString * _name;
    NSString * _className;
    unsigned int _size;
    unsigned int _flags;
}

@property (readonly, nonatomic) int code;
@property (readonly, nonatomic) NSString * encoding;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSString * className;
@property (readonly, nonatomic) unsigned int size;
@property (readonly, nonatomic) unsigned int flags;
@property (readonly, nonatomic) char number;
@property (readonly, nonatomic) char integerNumber;
@property (readonly, nonatomic) char floatingPointNumber;
@property (readonly, nonatomic) char object;

+ (NSString *)typeForEncoding:(char *)arg0;
+ (CKObjCType *)typeForValue:(id)arg0;

- (char)isObject;
- (NSData *)objectWithBytes:(void *)arg0;
- (void)getBytes:(void *)arg0 forObject:(NSObject *)arg1;
- (char)isIntegerNumber;
- (char)isFloatingPointNumber;
- (CKObjCType *)initWithCode:(int)arg0 encoding:(NSString *)arg1 name:(NSString *)arg2 className:(NSString *)arg3 size:(unsigned int)arg4 flags:(unsigned int)arg5;
- (char)isNumber;
- (unsigned int)size;
- (NSString *)name;
- (int)code;
- (NSString *)className;
- (void).cxx_destruct;
- (unsigned int)flags;
- (NSString *)encoding;

@end
