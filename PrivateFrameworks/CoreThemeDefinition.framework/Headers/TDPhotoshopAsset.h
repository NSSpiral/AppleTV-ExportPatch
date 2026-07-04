/* Runtime dump - TDPhotoshopAsset
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDPhotoshopAsset : TDAsset

@property (retain, nonatomic) NSSet * productions;

- (char)hasCursorProduction;
- (char)hasProduction;
- (NSDictionary *)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(NSData *)arg0;
- (TDElementProduction *)production;
- (id)_activeProductionWithRenditionsInProductions:(id)arg0;
- (id)_productionWithRenditionsInProductions:(id)arg0;

@end
