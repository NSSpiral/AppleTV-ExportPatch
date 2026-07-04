/* Runtime dump - BBSettingsGateway
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSettingsGateway : NSObject <BBSettingsGatewayClientInterface>
{
    id _overrideStatusChangeHandler;
    id _activeOverrideTypesChangedHandler;
    id _overrideStateChangeHandler;
    id _overridesChangedHandler;
    id _overridesEffectiveWhileUnlockedChangedHandler;
    id _privilegedSenderGroupChangedHandler;
    id _privilegedSenderTypesChangedHandler;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (BBSettingsGateway *)serverInterface;
+ (BBSettingsGateway *)clientInterface;

- (void)dealloc;
- (BBSettingsGateway *)init;
- (void)invalidate;
- (BBSettingsGateway *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)getSectionInfoForCategory:(int)arg0 withCompletion:(id /* block */)arg1;
- (void)getSectionOrderRuleWithCompletion:(id /* block */)arg0;
- (void)getPrivilegedSenderTypesWithCompletion:(id /* block */)arg0;
- (void)activeBehaviorOverrideTypesChanged:(unsigned int)arg0 source:(unsigned int)arg1;
- (void)behaviorOverrideStatusChanged:(int)arg0 source:(unsigned int)arg1;
- (void)privilegedSenderTypesChanged:(unsigned int)arg0 source:(unsigned int)arg1;
- (void)privilegedSenderAddressBookGroupRecordIDChanged:(int)arg0 name:(NSString *)arg1 source:(unsigned int)arg2;
- (void)behaviorOverridesChanged:(id)arg0 source:(unsigned int)arg1;
- (void)behaviorOverridesEffectiveWhileUnlockedChanged:(char)arg0 source:(unsigned int)arg1;
- (void)setSectionOrderRule:(int)arg0;
- (void)setOrderedSectionIDs:(id)arg0 forCategory:(int)arg1;
- (void)setSectionInfo:(NSDictionary *)arg0 forSectionID:(NSObject *)arg1 inCategory:(int)arg2;
- (void)setPrivilegedSenderTypes:(unsigned int)arg0 source:(unsigned int)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg0 name:(NSString *)arg1 source:(unsigned int)arg2;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(char)arg0 source:(unsigned int)arg1;
- (void)setBehaviorOverridesWithSourceChangeHandler:(id /* block */)arg0;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithCompletion:(id /* block */)arg0;
- (void)setBehaviorOverridesEffectiveWhileUnlockedChangeHandler:(id /* block */)arg0;
- (void)setBehaviorOverrideStateChangeHandler:(id /* block */)arg0;
- (void)setPrivilegedSenderAddressBookGroupRecordIDWithSourceChangeHandler:(id /* block */)arg0;
- (void)setPrivilegedSenderTypesWithSourceChangeHandler:(id /* block */)arg0;
- (void)setOrderedSectionIDs:(id)arg0;
- (void)setSectionInfo:(NSDictionary *)arg0 forSectionID:(NSObject *)arg1;
- (void)getBehaviorOverridesEffectiveWhileUnlockedWithCompletion:(id /* block */)arg0;
- (void)getBehaviorOverridesEnabledWithCompletion:(id /* block */)arg0;
- (void)setBehaviorOverridesEnabled:(char)arg0;
- (void)setBehaviorOverridesChangeHandler:(id /* block */)arg0;
- (void)setBehaviorOverrideStatusChangeHandler:(id /* block */)arg0;
- (void)setActiveBehaviorOverrideTypesChangeHandler:(id /* block */)arg0;
- (void)setBehaviorOverrideStatus:(int)arg0;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(char)arg0;
- (void)getSectionInfoWithCompletion:(id /* block */)arg0;
- (void)setBehaviorOverrides:(NSArray *)arg0 source:(unsigned int)arg1;
- (void)setBehaviorOverrideStatus:(int)arg0 source:(unsigned int)arg1;
- (void)setPrivilegedSenderTypes:(unsigned int)arg0;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg0 name:(NSString *)arg1;
- (void)setBehaviorOverrides:(NSArray *)arg0;
- (void)setActiveBehaviorOverrideTypesWithSourceChangeHandler:(id /* block */)arg0;
- (void)setBehaviorOverrideStatusWithSourceChangeHandler:(id /* block */)arg0;
- (void)getBehaviorOverridesWithCompletion:(id /* block */)arg0;

@end
