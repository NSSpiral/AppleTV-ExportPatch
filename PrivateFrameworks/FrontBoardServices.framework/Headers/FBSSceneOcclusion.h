/* Runtime dump - FBSSceneOcclusion
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneOcclusion : NSObject <BSXPCCoding>
{
    struct CGRect _rect;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)occlusionWithRect:(struct CGRect)arg0;
+ (FBSSceneOcclusion *)fullOcclusion;

- (FBSSceneOcclusion *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (FBSSceneOcclusion *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (struct CGRect)CGRect;
- (NSObject *)_initWithCGRect:(struct CGRect)arg0;
- (char)isEqualToOcclusion:(id)arg0;

@end
