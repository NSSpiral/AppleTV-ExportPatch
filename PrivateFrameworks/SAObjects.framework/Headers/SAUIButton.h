/* Runtime dump - SAUIButton
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIButton : SAAceView

@property (copy, nonatomic) NSArray * commands;
@property (retain, nonatomic) SAUIImageResource * image;
@property (copy, nonatomic) NSString * secondaryText;
@property (copy, nonatomic) NSString * text;

+ (TPLegacyButton *)button;
+ (NSDictionary *)buttonWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setImage:(SAUIImageResource *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (SAUIImageResource *)image;
- (NSArray *)commands;
- (void)setCommands:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (NSString *)secondaryText;
- (void)setSecondaryText:(NSString *)arg0;

@end
