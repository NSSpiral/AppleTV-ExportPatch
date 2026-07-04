/* Runtime dump - WMStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMStyle : CMStyle

- (void)addCharacterProperties:(NSDictionary *)arg0;
- (WMStyle *)initWithWDStyle:(NSObject *)arg0;
- (void)cascadeWithStyle:(NSObject *)arg0;
- (WMStyle *)initWithWDStyle:(NSObject *)arg0 isInTextFrame:(char)arg1;
- (void)ResoveInterPropertyDependencies;
- (NSString *)cssStyleString;
- (WMStyle *)initWithWMStyle:(NSObject *)arg0;
- (WMStyle *)initWithWDCharacterProperties:(NSDictionary *)arg0;

@end
