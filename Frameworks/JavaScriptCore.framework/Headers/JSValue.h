/* Runtime dump - JSValue
 * Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

@interface JSValue : NSObject
{
    struct OpaqueJSValue * m_value;
    JSContext * _context;
}

@property (readonly) JSContext * context;

+ (JSValue *)valueWithVector4:(struct SCNVector4)arg0 inContext:(NSObject *)arg1;
+ (JSValue *)valueWithVector3:(struct SCNVector3)arg0 inContext:(NSObject *)arg1;
+ (JSValue *)valueWithTransform3D:(struct SCNMatrix4)arg0 inContext:(NSObject *)arg1;
+ (JSValue *)valueWithDouble:(double)arg0 inContext:(NSObject *)arg1;
+ (JSValue *)valueWithBool:(char)arg0 inContext:(NSObject *)arg1;
+ (JSValue *)valueWithInt32:(int)arg0 inContext:(NSObject *)arg1;
+ (JSValue *)valueWithUInt32:(unsigned int)arg0 inContext:(NSObject *)arg1;
+ (NSObject *)valueWithNewRegularExpressionFromPattern:(NSObject *)arg0 flags:(_MFMessageFlags *)arg1 inContext:(NSObject *)arg2;
+ (NSString *)valueWithNewErrorFromMessage:(NSString *)arg0 inContext:(NSObject *)arg1;
+ (NSString *)valueWithNullInContext:(NSObject *)arg0;
+ (NSObject *)valueWithPoint:(struct CGPoint)arg0 inContext:(NSObject *)arg1;
+ (NSObject *)valueWithRange:(struct _NSRange)arg0 inContext:(NSObject *)arg1;
+ (NSObject *)valueWithRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
+ (NSObject *)valueWithSize:(struct CGSize)arg0 inContext:(NSObject *)arg1;
+ (SEL)selectorForStructToValue:(char *)arg0;
+ (SEL)selectorForValueToStruct:(char *)arg0;
+ (NSObject *)valueWithObject:(NSObject *)arg0 inContext:(NSObject *)arg1;
+ (JSValue *)valueWithJSValueRef:(struct OpaqueJSValue *)arg0 inContext:(NSObject *)arg1;
+ (NSString *)valueWithNewArrayInContext:(NSObject *)arg0;
+ (NSString *)valueWithUndefinedInContext:(NSObject *)arg0;
+ (NSString *)valueWithNewObjectInContext:(NSObject *)arg0;

- (struct SCNVector4)toVector4;
- (struct SCNVector3)toVector3;
- (struct SCNMatrix4)toTransform3D;
- (char)isObject;
- (char)isNumber;
- (NSString *)invokeMethod:(NSString *)arg0 withArguments:(NSDictionary *)arg1;
- (NSObject *)toObjectOfClass:(Class)arg0;
- (int)toInt32;
- (unsigned int)toUInt32;
- (NSNumber *)toNumber;
- (NSDate *)toDate;
- (NSArray *)toArray;
- (NSDictionary *)toDictionary;
- (char)deleteProperty:(NSObject *)arg0;
- (char)hasProperty:(char)arg0;
- (void)defineProperty:(NSObject *)arg0 descriptor:(NSObject *)arg1;
- (char)isBoolean;
- (char)isString;
- (char)isEqualToObject:(NSObject *)arg0;
- (char)isEqualWithTypeCoercionToObject:(NSObject *)arg0;
- (char)isInstanceOf:(AWDCoreRoutineModelClusterStandardDeviationInstance *)arg0;
- (NSArray *)callWithArguments:(NSDictionary *)arg0;
- (NSArray *)constructWithArguments:(NSDictionary *)arg0;
- (struct CGSize)toSize;
- (struct _NSRange)toRange;
- (struct CGRect)toRect;
- (JSValue *)initWithValue:(struct OpaqueJSValue *)arg0 inContext:(NSObject *)arg1;
- (double)toDouble;
- (char)toBool;
- (char)isUndefined;
- (void)dealloc;
- (JSValue *)init;
- (NSObject *)objectAtIndexedSubscript:(unsigned int)arg0;
- (NSString *)description;
- (NSObject *)objectForKeyedSubscript:(id)arg0;
- (void)setObject:(NSObject *)arg0 forKeyedSubscript:(id)arg1;
- (JSContext *)context;
- (void)setObject:(NSObject *)arg0 atIndexedSubscript:(unsigned int)arg1;
- (void *)valueForProperty:(NSString *)arg0;
- (NSObject *)toObject;
- (void)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1;
- (struct CGPoint)toPoint;
- (char)isNull;
- (void)setValue:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (NSObject *)valueAtIndex:(unsigned int)arg0;
- (NSString *)toString;
- (struct OpaqueJSValue *)JSValueRef;

@end
