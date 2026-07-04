/* Runtime dump - SALocalSearchActionableMapItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchActionableMapItem : SALocalSearchMapItem

@property (copy, nonatomic) NSArray * commands;

+ (NSObject *)actionableMapItem;
+ (NSDictionary *)actionableMapItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)commands;
- (void)setCommands:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;

@end
