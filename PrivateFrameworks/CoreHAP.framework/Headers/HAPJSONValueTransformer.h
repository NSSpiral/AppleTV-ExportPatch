/* Runtime dump - HAPJSONValueTransformer
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPJSONValueTransformer : HAPValueTransformer

+ (void)initialize;
+ (Class)expectedTransformedClassForFormat:(unsigned int)arg0;
+ (HAPJSONValueTransformer *)defaultJSONValueTransformer;

- (NSObject *)transformedValue:(NSObject *)arg0 format:(unsigned int)arg1 error:(id *)arg2;
- (NSObject *)reverseTransformedValue:(id)arg0 format:(unsigned int)arg1 error:(id *)arg2;

@end
