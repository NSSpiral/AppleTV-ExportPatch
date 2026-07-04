/* Runtime dump - CAValueFunction
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAValueFunction : NSObject <NSCoding>
{
    NSString * _string;
    void * _impl;
}

@property (readonly) NSString * name;

+ (void)CAMLParserStartElement:(NSObject *)arg0;
+ (void)CAMLParserEndElement:(NSObject *)arg0 content:(char *)arg1;
+ (NSString *)functionWithName:(NSString *)arg0;

- (NSString *)_initWithName:(int)arg0;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (struct Object *)CA_copyRenderValue;
- (unsigned long)outputCount;
- (char)apply:(double *)arg0 result:(double)arg1 parameterFunction:(double *)arg2 context:(/* block */ id *)arg3;
- (char)apply:(double *)arg0 result:(double)arg1;
- (void)dealloc;
- (CAValueFunction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)name;
- (unsigned long)inputCount;

@end
