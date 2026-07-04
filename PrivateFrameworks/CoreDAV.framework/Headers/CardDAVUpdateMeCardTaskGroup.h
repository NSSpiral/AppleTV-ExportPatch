/* Runtime dump - CardDAVUpdateMeCardTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CardDAVUpdateMeCardTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate>
{
    NSURL * _homeURL;
    NSURL * _cardURL;
}

@property (readonly, nonatomic) NSURL * cardURL;
@property (readonly, nonatomic) NSURL * homeURL;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSString *)description;
- (void)startTaskGroup;
- (void)propPatchTask:(NSObject *)arg0 parsedResponses:(id)arg1 error:(NSError *)arg2;
- (NSURLSessionTask *)_newPropPatchTask;
- (CardDAVUpdateMeCardTaskGroup *)initWithAccountInfoProvider:(NSDictionary *)arg0 taskManager:(NSObject *)arg1 homeURL:(NSURL *)arg2 cardURL:(NSURL *)arg3;
- (NSURL *)cardURL;
- (NSURL *)homeURL;

@end
