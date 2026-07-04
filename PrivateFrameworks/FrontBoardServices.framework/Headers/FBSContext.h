/* Runtime dump - FBSContext
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSContext : NSObject <BSXPCCoding>
{
    unsigned int _identifier;
    float _level;
}

@property (readonly, nonatomic) unsigned int identifier;
@property (readonly, nonatomic) float level;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)contextWithSceneContext:(NSObject *)arg0;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)identifier;
- (float)level;
- (FBSContext *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;

@end
