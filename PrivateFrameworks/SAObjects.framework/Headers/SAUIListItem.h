/* Runtime dump - SAUIListItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIListItem : SAAceView

@property (copy, nonatomic) NSArray * commands;
@property (retain, nonatomic) <SAAceSerializable> * object;
@property (copy, nonatomic) NSString * selectionResponse;
@property (copy, nonatomic) NSString * selectionText;
@property (copy, nonatomic) NSString * speakableSelectionResponse;
@property (copy, nonatomic) NSString * title;

+ (CPListItem *)listItem;
+ (NSDictionary *)listItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (<SAAceSerializable> *)object;
- (void)setObject:(<SAAceSerializable> *)arg0;
- (NSArray *)commands;
- (void)setCommands:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (NSString *)selectionResponse;
- (void)setSelectionResponse:(NSString *)arg0;
- (NSString *)selectionText;
- (void)setSelectionText:(NSString *)arg0;
- (NSString *)speakableSelectionResponse;
- (void)setSpeakableSelectionResponse:(NSString *)arg0;

@end
