/* Runtime dump - NSValueTransformer
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSValueTransformer : NSObject

+ (NSValueTransformer *)_transformerRegistry;
+ (NSValueTransformer *)valueTransformerNames;
+ (NSValueTransformer *)valueTransformerForName:(NSString *)arg0;
+ (void)setValueTransformer:(NSValueTransformer *)arg0 forName:(NSString *)arg1;
+ (Class)transformedValueClass;
+ (char)allowsReverseTransformation;

- (NSObject *)reverseTransformedValue:(id)arg0;
- (NSObject *)transformedValue:(NSObject *)arg0;

@end
