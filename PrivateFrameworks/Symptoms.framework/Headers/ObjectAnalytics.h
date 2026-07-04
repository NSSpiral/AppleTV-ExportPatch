/* Runtime dump - ObjectAnalytics
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface ObjectAnalytics : NSObject
{
    AnalyticsWorkspace * wspace;
    NSString * entityName;
    char managedCache;
}

- (void)save;
- (void).cxx_destruct;
- (NSString *)fetchEntitiesFreeForm:(id)arg0 sortDesc:(id)arg1;
- (ObjectAnalytics *)initWithWorkspace:(FBWorkspace *)arg0 entityName:(NSString *)arg1 withCache:(char)arg2;
- (id)_fetch:(CKDQueuedRecordFetch *)arg0 sortDesc:(id)arg1;
- (id)_firstLastHappened:(char)arg0;
- (NSString *)createEntityForEntityName:(NSString *)arg0;
- (id)firstHappened;
- (id)lastHappened;
- (NSObject *)createEntity;
- (NSString *)createTemporaryEntityForEntityName:(NSString *)arg0;
- (NSString *)getDescriptionForName:(NSString *)arg0;
- (void)refresh:(id)arg0;
- (void)removeEntities:(id)arg0;

@end
