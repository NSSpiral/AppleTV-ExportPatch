/* Runtime dump - TDColorDefinition
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDColorDefinition : NSManagedObject <TDElementAttributes>

@property (retain, nonatomic) NSDate * dateOfLastChange;
@property (retain, nonatomic) NSNumber * physicalColor;
@property (retain, nonatomic) NSManagedObject * colorStatus;
@property (retain, nonatomic) TDThemeLook * look;
@property (retain, nonatomic) TDColorName * name;

- (void)copyAttributesInto:(id)arg0;
- (NSDictionary *)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(NSData *)arg0;
- (NSData *)dataFromAttributes;
- (void)setAttributesFromData:(NSData *)arg0;
- (NSString *)colorAsString;

@end
