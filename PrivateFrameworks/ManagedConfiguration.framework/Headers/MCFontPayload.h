/* Runtime dump - MCFontPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCFontPayload : MCPayload
{
    NSData * _fontData;
    NSString * _name;
    NSURL * _persistentURL;
}

@property (retain, nonatomic) NSData * fontData;
@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSURL * persistentURL;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)title;
- (void).cxx_destruct;
- (MCFontPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (NSURL *)persistentURL;
- (NSData *)fontData;
- (void)setFontData:(NSData *)arg0;
- (void)setPersistentURL:(NSURL *)arg0;

@end
