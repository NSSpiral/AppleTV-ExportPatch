/* Runtime dump - TDSchemaDefinition
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDSchemaDefinition : NSManagedObject

@property (retain, nonatomic) NSString * name;
@property char published;
@property (retain, nonatomic) TDSchemaCategory * category;
@property (retain, nonatomic) NSSet * parts;

+ (struct ? *)elementDefinitionWithName:(int)arg0 withSchema:(int)arg1;
+ (unsigned int)elementDefinitionCountWithSchema:(id)arg0;
+ (struct ? *)sortedElementDefinitionAtIndex:(int)arg0 withSchema:(int)arg1;

- (NSString *)displayName;
- (UIImage *)previewImage;

@end
