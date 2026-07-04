/* Runtime dump - HAPValueTransformer
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPValueTransformer : NSObject

+ (Class)expectedTransformedClassForFormat:(unsigned int)arg0;
+ (Class)expectedClassForFormat:(unsigned int)arg0;

- (NSObject *)transformedValue:(NSObject *)arg0 format:(unsigned int)arg1 error:(id *)arg2;
- (NSObject *)reverseTransformedValue:(id)arg0 format:(unsigned int)arg1 error:(id *)arg2;

@end
