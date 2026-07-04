/* Runtime dump - SAUIRequestUpdateViews
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIRequestUpdateViews : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray * commands;
@property (copy, nonatomic) NSNumber * timeInSeconds;
@property (copy, nonatomic) NSArray * viewIds;

+ (SAUIRequestUpdateViews *)requestUpdateViews;
+ (NSDictionary *)requestUpdateViewsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)commands;
- (void)setCommands:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSNumber *)timeInSeconds;
- (void)setTimeInSeconds:(NSNumber *)arg0;
- (NSArray *)viewIds;
- (void)setViewIds:(NSArray *)arg0;

@end
