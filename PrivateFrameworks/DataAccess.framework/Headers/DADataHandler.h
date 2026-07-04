/* Runtime dump - DADataHandler
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DADataHandler : NSObject
{
    void * _container;
    NSString * _changeTrackingID;
}

@property (nonatomic) void * container;
@property (copy, nonatomic) NSString * changeTrackingID;

+ (DADataHandler *)newDataHandlerForDataclass:(int)arg0 container:(void *)arg1 changeTrackingID:(NSString *)arg2;

- (void)dealloc;
- (void)setContainer:(void *)arg0;
- (void *)container;
- (void).cxx_destruct;
- (DADataHandler *)initWithContainer:(void *)arg0 changeTrackingID:(NSString *)arg1;
- (int)getIdFromLocalObject:(void *)arg0;
- (void *)copyLocalObjectFromId:(int)arg0;
- (char)saveContainer;
- (NSObject *)copyOfAllLocalObjectsInContainer;
- (void)drainContainer;
- (char)wipeServerIds;
- (void)drainSuperfluousChanges;
- (void)openDB;
- (char)closeDBAndSave:(char)arg0;
- (NSObject *)getDAObjectWithLocalItem:(void *)arg0 serverId:(NSString *)arg1 account:(NSObject *)arg2;
- (void)setChangeTrackingID:(NSString *)arg0;
- (int)dataclass;
- (NSString *)changeTrackingID;

@end
