/* Runtime dump - SASetAlertContext
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetAlertContext : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * context;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSString *)setAlertContext;
+ (NSDictionary *)setAlertContextWithDictionary:(NSDictionary *)arg0 context:(NSArray *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)context;
- (void)setContext:(NSArray *)arg0;
- (NSString *)encodedClassName;

@end
