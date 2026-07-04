/* Runtime dump - TDSchemaElementProduction
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDSchemaElementProduction : TDSimpleArtworkElementProduction

@property (retain, nonatomic) NSString * folderName;
@property (retain, nonatomic) NSOrderedSet * slices;

- (NSObject *)associatedFileURLWithDocument:(NSObject *)arg0;
- (void)generateNewRendition;
- (NSString *)relativePath;

@end
