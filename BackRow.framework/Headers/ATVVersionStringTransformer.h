/* Runtime dump - ATVVersionStringTransformer
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVVersionStringTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (char)allowsReverseTransformation;

- (NSObject *)reverseTransformedValue:(id)arg0;
- (NSObject *)transformedValue:(NSObject *)arg0;

@end
