/* Runtime dump - OADTextListStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTextListStyle : NSObject
{
    NSMutableArray * mParagraphProperties;
}

- (void)dealloc;
- (OADTextListStyle *)init;
- (id)propertiesForListLevel:(unsigned int)arg0;
- (NSDictionary *)defaultProperties;
- (void)removeUnnecessaryOverrides;
- (OADTextListStyle *)initWithDefaults;
- (void)setParentTextListStyle:(NSObject *)arg0;
- (void)overrideWithTextStyle:(NSObject *)arg0;
- (void)flatten;
- (void)setPropertiesForListLevel:(unsigned int)arg0 properties:(NSDictionary *)arg1;

@end
