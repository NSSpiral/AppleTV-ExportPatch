/* Runtime dump - SASetApplicationContext
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetApplicationContext : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * orderedContext;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSString *)setApplicationContext;
+ (NSDictionary *)setApplicationContextWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)orderedContext;
- (void)setOrderedContext:(NSArray *)arg0;

@end
