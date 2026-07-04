/* Runtime dump - SAHACommand
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHACommand : SADomainCommand

@property (copy, nonatomic) NSArray * actions;
@property (retain, nonatomic) SAHAFilter * filter;

+ (<SAClientBoundCommand> *)command;
+ (NSDictionary *)commandWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)shortDescription;
- (NSString *)groupIdentifier;
- (NSArray *)actions;
- (void)setFilter:(SAHAFilter *)arg0;
- (SAHAFilter *)filter;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (void)setActions:(NSArray *)arg0;

@end
