/* Runtime dump - CRRecentContactsLibrary
 * Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

@interface CRRecentContactsLibrary : NSObject
{
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSXPCConnection * _connection;
}

+ (CRRecentContactsLibrary *)defaultInstance;
+ (CRRecentContactsLibrary *)frecencyComparatorForSearch:(SEL)arg0 preferredKinds:(id)arg1 sendingAddress:(NSString *)arg2 queryOptions:(unsigned int)arg3;
+ (struct NSObject *)recentEventForAddress:(NSString *)arg0 displayName:(NSString *)arg1 kind:(TSCH3DAxisLabelKind *)arg2 date:(NSDate *)arg3 weight:(AWDPowerStateResidencyAndWeight *)arg4 metadata:(NSDictionary *)arg5 options:(unsigned int)arg6;
+ (id /* block */)frecencyComparator;
+ (CRRecentContactsLibrary *)rankedFrecencyComparatorWithPreferredSources:(SEL)arg0;
+ (struct NSObject *)groupMemberWithAddress:(NSString *)arg0 displayName:(NSString *)arg1 kind:(TSCH3DAxisLabelKind *)arg2;
+ (struct NSObject *)_recentEventForGroupMembers:(id)arg0 displayName:(NSString *)arg1 date:(NSDate *)arg2 weight:(AWDPowerStateResidencyAndWeight *)arg3 metadata:(NSDictionary *)arg4 options:(unsigned int)arg5;
+ (NSString *)recentEventForAddress:(NSString *)arg0 displayName:(NSString *)arg1 kind:(TSCH3DAxisLabelKind *)arg2 date:(NSDate *)arg3 metadata:(NSDictionary *)arg4;
+ (struct NSObject *)explicitGroupEventForGroupMembers:(id)arg0 displayName:(NSString *)arg1 date:(NSDate *)arg2 metadata:(NSDictionary *)arg3 options:(unsigned int)arg4;
+ (CRRecentContactsLibrary *)frecencyComparatorForSearch:(SEL)arg0 preferredKinds:(id)arg1 sendingAddress:(NSString *)arg2;
+ (struct NSObject *)recentEventForAddress:(NSString *)arg0 displayName:(NSString *)arg1 kind:(TSCH3DAxisLabelKind *)arg2 date:(NSDate *)arg3 weight:(AWDPowerStateResidencyAndWeight *)arg4 metadata:(NSDictionary *)arg5;
+ (struct NSObject *)recentEventForAddress:(NSString *)arg0 displayName:(NSString *)arg1 kind:(TSCH3DAxisLabelKind *)arg2 date:(NSDate *)arg3;

- (void)recordContactEventsForHeaders:(NSDictionary *)arg0 recentsDomain:(NSString *)arg1;
- (char)removeRecentContacts:(id)arg0 error:(id *)arg1;
- (void)performRecentsSearch:(id)arg0 queue:(NSObject *)arg1 completion:(id /* block */)arg2;
- (unsigned int)maxDateEventsPerRecentContact;
- (void)recordContactEvents:(id)arg0 recentsDomain:(NSString *)arg1 sendingAddress:(NSString *)arg2;
- (void)dealloc;
- (CRRecentContactsLibrary *)init;
- (void)start;
- (id)_remoteLibraryWithErrorHandler:(SSErrorHandler *)arg0;
- (void)_searchRecentsUsingQuery:(NSObject *)arg0 synchronously:(char)arg1 completion:(id /* block */)arg2;
- (void)recordContactEvents:(id)arg0 recentsDomain:(NSString *)arg1 sendingAddress:(NSString *)arg2 source:(NSObject *)arg3 userInitiated:(char)arg4;
- (char)_removeRecentContactsWithRecentIDs:(id)arg0 syncKeys:(NSArray *)arg1 recentsDomain:(NSString *)arg2 error:(id *)arg3;
- (void)setImplicitGroupThreshold:(unsigned int)arg0 forDomain:(NSString *)arg1;
- (void)requestRecentsUsingPredicate:(NSPredicate *)arg0 inDomains:(id)arg1 comparator:(id /* block */)arg2 queue:(/* block */ id)arg3 completion:(id /* block */)arg4;
- (NSString *)copyOrderedRecentsForSearchText:(NSString *)arg0 recentsDomain:(NSString *)arg1 sendingAddress:(NSString *)arg2 kinds:(id)arg3;
- (NSString *)copyRecentsForDomain:(NSString *)arg0;
- (int)_daemonProcessID;
- (void)recordContactEvents:(id)arg0 recentsDomain:(NSString *)arg1 sendingAddress:(NSString *)arg2 userInitiated:(char)arg3;
- (NSURLConnection *)_newConnection;

@end
