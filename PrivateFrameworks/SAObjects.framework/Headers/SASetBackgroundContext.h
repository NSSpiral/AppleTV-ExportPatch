/* Runtime dump - SASetBackgroundContext
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetBackgroundContext : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * objects;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSString *)setBackgroundContext;
+ (NSDictionary *)setBackgroundContextWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSArray *)objects;
- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (void)setObjects:(NSArray *)arg0;

@end
