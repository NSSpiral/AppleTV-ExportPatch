/* Runtime dump - PLPropertyListFromDataTransformer
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPropertyListFromDataTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (char)allowsReverseTransformation;

- (NSObject *)reverseTransformedValue:(id)arg0;
- (NSObject *)transformedValue:(NSObject *)arg0;

@end
