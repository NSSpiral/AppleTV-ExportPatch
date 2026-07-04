/* Runtime dump - CMStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMStyle : NSObject <NSCopying>
{
    NSMutableDictionary * properties;
    NSMutableString * mStyleString;
}

- (void)dealloc;
- (CMStyle *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (CMStyle *)copyWithZone:(struct _NSZone *)arg0;
- (CMStyle *)initWithStyle:(NSObject *)arg0;
- (NSMutableDictionary *)properties;
- (void)appendPropertyForName:(NSString *)arg0 intValue:(int)arg1;
- (void)appendPropertyForName:(NSString *)arg0 stringWithColons:(id)arg1;
- (void)appendPropertyForName:(NSString *)arg0 stringValue:(NSString *)arg1;
- (void)addProperty:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSString *)propertyForName:(NSString *)arg0;
- (void)appendPropertyForName:(NSString *)arg0 length:(double)arg1 unit:(int)arg2;
- (void)appendSizeInfoFromRect:(struct CGRect)arg0;
- (void)appendPositionInfoFromRect:(struct CGRect)arg0;
- (void)appendDefaultBorderStyle;
- (void)appendPropertyForName:(NSString *)arg0 floatValue:(float)arg1;
- (void)appendPropertyString:(NSString *)arg0;
- (NSString *)attributeForName:(NSString *)arg0;
- (NSString *)cssStyleString;
- (NSString *)cacheFriendlyCSSStyleString;
- (void)appendPropertyForName:(NSString *)arg0 color:(UIColor *)arg1;
- (void)addPropertiesToCSSStyleString:(NSString *)arg0;
- (void)appendPropertyForName:(NSString *)arg0 oadTextSpacing:(id)arg1 unit:(int)arg2;
- (void)appendPropertyForName:(NSString *)arg0 oadTextSpacing:(id)arg1;
- (void)appendPropertyForName:(NSString *)arg0 oadTextSpacing:(id)arg1 lineHeight:(float)arg2 unit:(int)arg3;

@end
