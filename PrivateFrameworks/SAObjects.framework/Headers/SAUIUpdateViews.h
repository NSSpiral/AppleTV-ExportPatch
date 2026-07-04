/* Runtime dump - SAUIUpdateViews
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIUpdateViews : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray * views;

+ (SAUIUpdateViews *)updateViews;
+ (NSDictionary *)updateViewsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)views;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (void)setViews:(NSArray *)arg0;

@end
