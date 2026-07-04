/* Runtime dump - SAUIMenuItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIMenuItem : SAAceView

@property (copy, nonatomic) NSArray * commands;
@property (copy, nonatomic) NSURL * icon;
@property (copy, nonatomic) NSURL * ref;
@property (copy, nonatomic) NSString * subtitle;
@property (copy, nonatomic) NSString * title;

+ (BRMenuItem *)menuItem;
+ (NSDictionary *)menuItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSURL *)icon;
- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)subtitle;
- (void)setIcon:(NSURL *)arg0;
- (void)setSubtitle:(NSString *)arg0;
- (NSArray *)commands;
- (void)setCommands:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (NSURL *)ref;
- (void)setRef:(NSURL *)arg0;

@end
