/* Runtime dump - CoreDAVUpdateACLTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVUpdateACLTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVACLTaskDelegate>
{
    int _state;
    NSSet * _aceItems;
    NSURL * _url;
    CoreDAVPropFindTask * _fetchTask;
}

@property (nonatomic) int state;
@property (retain, nonatomic) NSSet * aceItems;
@property (retain, nonatomic) NSURL * url;
@property (retain, nonatomic) CoreDAVPropFindTask * fetchTask;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (int)state;
- (void)setState:(int)arg0;
- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;
- (void)task:(NSObject *)arg0 didFinishWithError:(NSError *)arg1;
- (void)taskGroupWillCancelWithError:(NSError *)arg0;
- (void)startTaskGroup;
- (void)setFetchTask:(CoreDAVPropFindTask *)arg0;
- (CoreDAVPropFindTask *)fetchTask;
- (void)_startGetACL;
- (void)_finishWithError:(NSError *)arg0 state:(int)arg1;
- (NSSet *)aceItems;
- (void)_startSetACLWithAccessControlEntities:(id)arg0;
- (CoreDAVUpdateACLTaskGroup *)initWithAccountInfoProvider:(NSDictionary *)arg0 aceItems:(NSSet *)arg1 url:(NSURL *)arg2 taskManager:(NSObject *)arg3;
- (void)setAceItems:(NSSet *)arg0;

@end
