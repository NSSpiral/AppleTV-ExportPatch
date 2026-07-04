/* Runtime dump - SAUIConfirmationOption
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIConfirmationOption : AceObject <SAAceSerializable>

@property (nonatomic) char active;
@property (copy, nonatomic) NSArray * commands;
@property (copy, nonatomic) NSString * label;
@property (copy, nonatomic) NSString * type;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAUIConfirmationOption *)confirmationOption;
+ (NSDictionary *)confirmationOptionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSString *)label;
- (char)active;
- (void)setLabel:(NSString *)arg0;
- (void)setActive:(char)arg0;
- (NSArray *)commands;
- (void)setCommands:(NSArray *)arg0;
- (NSString *)encodedClassName;

@end
