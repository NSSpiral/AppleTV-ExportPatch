/* Runtime dump - SAUIImageView
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIImageView : SAAceView

@property (copy, nonatomic) NSArray * commands;
@property (copy, nonatomic) NSString * descriptionText;
@property (retain, nonatomic) SAUIImageResource * image;
@property (copy, nonatomic) NSNumber * tintColor;

+ (UIImageView *)imageView;
+ (NSDictionary *)imageViewWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setImage:(SAUIImageResource *)arg0;
- (SAUIImageResource *)image;
- (NSNumber *)tintColor;
- (void)setTintColor:(NSNumber *)arg0;
- (NSArray *)commands;
- (void)setCommands:(NSArray *)arg0;
- (void)setDescriptionText:(NSString *)arg0;
- (NSString *)descriptionText;
- (NSString *)encodedClassName;

@end
