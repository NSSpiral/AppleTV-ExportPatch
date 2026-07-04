/* Runtime dump - TSCEUnitRegistry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEUnitRegistry : NSObject

+ (int)unitForString:(NSString *)arg0;
+ (int)unitPrefixForCharacter:(unsigned short)arg0;
+ (int)binaryUnitPrefixForChars:(unsigned short)arg0 :(unsigned short)arg1;
+ (double)multiplierForUnitPrefix:(int)arg0;
+ (int)unitForCurrencyCode:(id)arg0;
+ (TSCEUnitRegistry *)currencyCodeForUnit:(int)arg0;
+ (int)canonicalUnitForDimension:(int)arg0;
+ (struct ?)prefixedUnitForString:(NSString *)arg0;
+ (char)unitIsMetric:(int)arg0;
+ (double)convert:(double)arg0 fromUnit:(struct ?)arg1 toUnit:(struct ?)arg2;
+ (int)dimensionForUnit:(int)arg0;
+ (void)initialize;

@end
