/* Runtime dump - HAPDataValueTransformer
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPDataValueTransformer : HAPValueTransformer

+ (void)initialize;
+ (char)isValidFormat:(unsigned int)arg0;
+ (Class)expectedTransformedClassForFormat:(unsigned int)arg0;
+ (HAPDataValueTransformer *)defaultDataValueTransformer;

- (NSObject *)transformedValue:(NSObject *)arg0 format:(unsigned int)arg1 error:(id *)arg2;
- (NSObject *)reverseTransformedValue:(id)arg0 format:(unsigned int)arg1 error:(id *)arg2;

@end
