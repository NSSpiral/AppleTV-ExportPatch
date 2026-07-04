/* Runtime dump - SASyncChunk
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncChunk : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSString * key;
@property (copy, nonatomic) NSString * postGen;
@property (copy, nonatomic) NSString * preGen;
@property (copy, nonatomic) NSArray * toAdd;
@property (copy, nonatomic) NSArray * toRemove;
@property (copy, nonatomic) NSString * validity;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (KNBuildChunk *)chunk;
+ (NSDictionary *)chunkWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)key;
- (void)setKey:(NSString *)arg0;
- (NSString *)encodedClassName;
- (void)setValidity:(NSString *)arg0;
- (NSString *)postGen;
- (void)setPostGen:(NSString *)arg0;
- (NSString *)preGen;
- (void)setPreGen:(NSString *)arg0;
- (NSArray *)toAdd;
- (void)setToAdd:(NSArray *)arg0;
- (NSArray *)toRemove;
- (void)setToRemove:(NSArray *)arg0;
- (NSString *)validity;

@end
