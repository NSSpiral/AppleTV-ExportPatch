/* Runtime dump - FBSSceneSettingsDiff
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneSettingsDiff : NSObject <BSXPCCoding>
{
    BSMutableSettings * _changes;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDictionary *)diffFromSettings:(NSDictionary *)arg0 toSettings:(NSDictionary *)arg1;

- (void)dealloc;
- (FBSSceneSettingsDiff *)init;
- (NSString *)description;
- (FBSSceneSettingsDiff *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (void)inspectChangesWithBlock:(id /* block */)arg0;
- (NSDictionary *)settingsByApplyingToMutableCopyOfSettings:(NSDictionary *)arg0;
- (FBSSceneSettingsDiff *)_initWithChanges:(BSMutableSettings *)arg0;
- (void)inspectOtherChangesWithBlock:(id /* block */)arg0;

@end
