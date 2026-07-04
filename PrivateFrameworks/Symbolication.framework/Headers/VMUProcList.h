/* Runtime dump - VMUProcList
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUProcList : NSObject
{
    NSLock * procLock;
    NSMapTable * allProcs;
    NSMapTable * filteredProcs;
    char appsOnly;
    char ownedOnly;
}

- (void)dealloc;
- (unsigned int)count;
- (VMUProcList *)init;
- (char)update;
- (char)updateFromSystem;
- (void)_populateFromSystem;
- (id)newestProcInfoSatisfyingCondition:(SEL)arg0 forTarget:(NSObject *)arg1 withContext:(void *)arg2;
- (void)setProcInfos:(id)arg0;
- (void)addProcInfo:(NSDictionary *)arg0;
- (void)removeProcInfo:(NSDictionary *)arg0;
- (void)setOwnedOnly:(char)arg0;
- (char)ownedOnly:(char)arg0;
- (void)setAppsOnly:(char)arg0;
- (char)appsOnly;
- (id)allProcInfos;
- (id)allPIDs;
- (NSArray *)allNames;
- (NSArray *)allPathNames;
- (NSDictionary *)newestProcInfo;
- (NSString *)newestProcInfoWithName:(NSString *)arg0;
- (id)newestProcInfoSatisfyingCondition:(SEL)arg0 forTarget:(NSObject *)arg1;
- (id)procInfoWithPID:(int)arg0;
- (void)finalize;

@end
