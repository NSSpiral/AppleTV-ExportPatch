/* Runtime dump - SASetClientState
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetClientState : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * statesToSet;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSObject *)setClientState;
+ (NSDictionary *)setClientStateWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)statesToSet;
- (void)setStatesToSet:(NSArray *)arg0;

@end
