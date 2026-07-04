/* Runtime dump - DOMCSSPrimitiveValue
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMCSSPrimitiveValue : DOMCSSValue

@property (readonly) unsigned short primitiveType;

- (id)getRGBColorValue;
- (float)getFloatValue:(unsigned short)arg0;
- (NSString *)getStringValue;
- (unsigned short)primitiveType;
- (void)setFloatValue:(unsigned short)arg0 floatValue:(float)arg1;
- (void)setFloatValue:(unsigned short)arg0 :(float)arg1;
- (void)setStringValue:(unsigned short)arg0 stringValue:(NSString *)arg1;
- (void)setStringValue:(unsigned short)arg0 :(id)arg1;
- (id)getCounterValue;
- (id)getRectValue;

@end
