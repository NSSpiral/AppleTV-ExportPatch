/* Runtime dump - SAUIColor
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIColor : AceObject <SAAceSerializable>

@property (nonatomic) int blueValue;
@property (nonatomic) int greenValue;
@property (nonatomic) int redValue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (UIColor *)color;
+ (NSDictionary *)colorWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (int)blueValue;
- (void)setBlueValue:(int)arg0;
- (int)greenValue;
- (void)setGreenValue:(int)arg0;
- (int)redValue;
- (void)setRedValue:(int)arg0;

@end
