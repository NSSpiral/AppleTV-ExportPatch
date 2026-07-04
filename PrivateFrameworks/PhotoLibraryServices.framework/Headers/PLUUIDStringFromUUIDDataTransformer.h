/* Runtime dump - PLUUIDStringFromUUIDDataTransformer
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLUUIDStringFromUUIDDataTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (char)allowsReverseTransformation;

- (NSObject *)reverseTransformedValue:(id)arg0;
- (NSObject *)transformedValue:(NSObject *)arg0;

@end
